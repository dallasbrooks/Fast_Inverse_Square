#include <bits/stdc++.h>
#include <iostream>

float q_rsqrt(float number)
{
    long i = 0;
    float x2 = 0;
    float y = 0;
    const float threeHalfs = 1.5f;
    x2 = number * 0.5f;
    y = number;
    i = *(long*)&y;
    i = 0x5f3759df - (i >> 1);
    y = *(float*)&i;
    y = y *(threeHalfs - (x2 * y * y));
    // y = y * (threehalfs - (x2 * y * y));
    return y;
}

int main(void)
{
    float num = 256;
    float invSq = q_rsqrt(num);
    std::cout << num << " -> " << invSq << std::endl;
    return 0;
}