// ==UserScript==
// @name         PTA 复制题目描述为 Markdown 格式
// @namespace    https://github.com/SakuraPuare/PTA_Solution
// @version      0.2
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

        // https://pintia.cn/problem-sets/1767419859015790592/exam/problems/type/7?problemSetProblemId=1767420176117731334&page=0
        const problem_set_id = url.match(/problem-sets\/(\d+)/)[1];
        const problem_set_problem_id = url.match(/problemSetProblemId=(\d+)/)[1];

        // api
        // https://pintia.cn/api/problem-sets/1767419859015790592/exam-problems/1767420176117731334
        const api = `https://pintia.cn/api/problem-sets/${problem_set_id}/exam-problems/${problem_set_problem_id}`;

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

    // listen for the `
    document.addEventListener('keydown', function (e) {
        if (e.key === '`') {
            getContent();
        }
    });

})();