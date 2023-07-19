/*
# 非常弹的球
 - 链接：https://pintia.cn/problem-sets/1674039732562952192/exam/problems/1677296997738860549
 - 代码长度限制：16 KB
 - 时间限制：150 ms
 - 内存限制：65536 KB

# 题目描述

刚上高一的森森为了学好物理，买了一个“非常弹”的球。虽然说是非常弹的球，其实也就是一般的弹力球而已。森森玩了一会儿弹力球后突然想到，假如他在地上用力弹球，球最远能弹到多远去呢？他不太会，你能帮他解决吗？当然为了刚学习物理的森森，我们对环境做一些简化：

- 假设森森是一个质点，以森森为原点设立坐标轴，则森森位于(0, 0)点。
- 小球质量为$w/100$ 千克（kg），重力加速度为9.8米/秒平方（$m/s^2$）。
- 森森在地上用力弹球的过程可简化为球从(0, 0)点以某个森森选择的角度$ang$ ($0 < ang < \pi/2$) 向第一象限抛出，抛出时假设动能为1000 焦耳（J）。
- 小球在空中仅受重力作用，球纵坐标为0时可视作落地，落地时损失$p\%$动能并反弹。
- 地面可视为刚体，忽略小球形状、空气阻力及摩擦阻力等。

森森为你准备的公式：

- 动能公式：$E = m\times v^2 / 2$
- 牛顿力学公式：$F = m\times a$
- 重力：$G = m\times g$

其中：

- $E$ - 动能，单位为“焦耳”
- $m$ - 质量，单位为“千克”
- $v$ - 速度，单位为“米/秒”
- $a$ - 加速度，单位为“米/秒平方”
- $g$ - 重力加速度

## 输入格式：

输入在一行中给出两个整数：$1 \le w \le 1000$ 和 $1 \le p \le 100$，分别表示放大100倍的小球质量、以及损失动力的百分比$p$。

## 输出格式：

在一行输出最远的投掷距离，保留3位小数。

## 输入样例：
```in
100 90
```

## 输出样例：
```out
226.757
```
*/

#include <iostream>
#include <cmath>

using namespace std;

static const double e = 1000.0;
static const double g = 9.8;
static double m = 1.0;
static double loss = 1.0;

double f(double energy)
{
    // must smaller than 1e-9
    if (energy < 1e-9)
        return 0;

    double v = sqrt(energy / m);
    double t = 2 * v / g;
    double x = v * t;
    double energy2 = energy * loss;
    return x + f(energy2);
}

int main()
{
    double a, b;
    cin >> a >> b;
    m = a / 100;
    loss = 1 - b / 100.0;

    printf("%.3f", f(e));
}