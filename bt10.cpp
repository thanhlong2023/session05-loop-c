#include <bits/stdc++.h>
int main()
{
    int n;
    printf("Nhập số bất kì: ");
    scanf("%d", &n);
    int r;
    int reversed = 0;
    while (n)
    {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    // printf("%d \n", reversed);
    while (reversed)
    {
        r = reversed % 10;
        reversed /= 10;
        printf("%d ", r);
    }
    return 0;
}