#include <bits/stdc++.h>
#include <chrono> // 引入时间库

using namespace std;
using namespace chrono;

int main() {
    int s = 1;
    double pi = 0.0, i = 1.0, n = 1.0;
    auto start = high_resolution_clock::now(); // 开始计时
    int float_count=0;
    while (fabs(i) >= 1e-6) {
        float_count+=1;
        pi += i;
        n += 2;
        s = -s;
        i = s * 1.0 / n;
    }
    pi *= 4;

    auto stop = high_resolution_clock::now(); // 结束计时
    auto duration = duration_cast<microseconds>(stop - start); // 计算持续时间

    printf("PI = %.6f\n,float_count%d \n", pi,float_count);
    printf("Time taken: %ld microseconds\n", duration.count());

    return 0;
}