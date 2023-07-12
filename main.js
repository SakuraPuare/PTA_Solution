// ==UserScript==
// @name         PTA 复制题目描述为 Markdown 格式
// @namespace    https://github.com/SakuraPuare/PTA_Solution
// @version      0.1
// @description  PTA 复制题目描述为 Markdown 格式
// @author       SakuraPuare
// @match        https://pintia.cn/problem-sets/*/exam/problems/*
// @icon         https://www.google.com/s2/favicons?sz=64&domain=pintia.cn
// @grant        GM_setClipboard
// @run-at       document-end
// @license 	 MIT
// ==/UserScript==

(function () {
    'use strict';

    // debugger;
    function getContent() {
        function fmt_msg(msg) {
            msg = msg.problemSetProblem

            const title = msg.title
            const url = document.URL
            const codeSizeLimit = msg.problemConfig.programmingProblemConfig.codeSizeLimit
            const timeLimit = msg.problemConfig.programmingProblemConfig.timeLimit
            const memoryLimit = msg.problemConfig.programmingProblemConfig.memoryLimit

            let content = msg.content
            // \n\n -> \n
            // content = content.replace(/\n\n/g, '\n')

            // ### -> ##
            content = content.replace(/###/g, '##')

            // 限制每行为65个字符
            // content = content.replace(/(.{65})/g, '$1\n')

            // 替换图片 ~ -> https://images.ptausercontent.com
            content = content.replace(/~\//g, 'https://images.ptausercontent.com/')

            // 三个以上换行符替换为两个
            content = content.replace(/\n{3,}/g, '\n\n')

            // $$ -> $
            content = content.replace(/\$\$/g, '$')

            let text = `# ${title}\n - 链接：${url}\n - 代码长度限制：${codeSizeLimit} KB\n - 时间限制：${timeLimit} ms\n - 内存限制：${memoryLimit} KB\n\n# 题目描述 \n\n${content} \n\n`
            // 移除前后的换行符
            text = text.trim()
            return text
        }

        const url = document.URL;

        // https://pintia.cn/problem-sets/*/exam/problems/*
        const re = /https:\/\/pintia.cn\/problem-sets\/(\d+)\/exam\/problems\/(\d+)/;
        const match = url.match(re);
        const problem_set_id = match[1];
        const problem_id = match[2];

        // api
        // https://pintia.cn/api/problem-sets/*/exam-problems/*
        const api = `https://pintia.cn/api/problem-sets/${problem_set_id}/exam-problems/${problem_id}`;
        // cookies
        const cookies = document.cookie;
        fetch(api, {
            method: 'GET',
            headers: {
                'Content-Type': 'application/json',
                'Accept': 'application/json',
                'Cookie': cookies
            }
        }).then(response => response.json())
            .then(data => {
                console.log(data);
                GM_setClipboard(fmt_msg(data));
            })
    }

    function addbutton() {
        // 检查是否已经添加过按钮
        if (document.getElementById('copy-button')) {
            return;
        }

        // debugger;
        var button = document.createElement('button');
        button.id = 'copy-button';
        button.innerHTML = '复制题目';
        button.addEventListener('click', function () {
            getContent();
            console.log('复制成功');
        });
        // 设置按钮class
        button.setAttribute('class', 'pc-button py-2 px-4 bg-bg-base pc-button-text pc-sm pc-active-light cursor-pointer');
        button.style.marginLeft = '10px';

        const selector = '#exam-app > div:nth-child(1) > div:nth-child(1) > div:nth-child(1) > div > div:nth-child(1) > div:nth-child(1) > div > div:nth-child(1)';
        var targetElement = document.querySelector(selector);
        if (targetElement) {
            targetElement.appendChild(button);
        }
        else {
            console.error('targetElement not found.');
        }
    }

    var observer = new MutationObserver(function (mutations) {
        for (let mutation of mutations) {
            // console.log(mutation);
            if (mutation.target.innerText.startsWith('题目')) {
                // observer.disconnect();
                addbutton();
            }
        }
    });

    observer.observe(document.body, { childList: true, subtree: true });
})();