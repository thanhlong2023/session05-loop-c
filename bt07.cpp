#include <bits/stdc++.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int originalA = a, originalB = b;
    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    int ucln = a;
    printf("Ước chung lớn nhất của %d và %d là %d", originalA, originalB, ucln);
    return 0;
}