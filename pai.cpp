#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    int s = 1; // 修改为 int 类型
    double pi = 0.0, i = 1.0, n = 1.0; // 修改为 double 类型
    while (fabs(i) >= 1e-6) { // 修正条件表达式
        pi += i;
        n += 2;
        s = -s; 
        i = s * 1.0 / n;
    }
    pi *= 4;
    printf("PI = %.6f\n", pi);
    
    return 0;
}