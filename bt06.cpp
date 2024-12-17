#include <bits/stdc++.h>
int main()
{
    int a, b;
    printf("Hãy nhập số a: ");
    scanf("%d", &a);
    getchar();
    printf("Hãy nhập số b: ");
    scanf("%d", &b);

    while (true)
    {
        printf("1. Tính tổng 2 số\n");
        printf("2. Hiệu 2 số\n");
        printf("3. Tích 2 số\n");
        printf("4. Thương 2 số\n");
        printf("5. Thoát\n");

        int choice;
        scanf("%d", &choice);

        if (choice == 5)
        {
            break;
        }

        switch (choice)
        {
        case 1:
            printf("%d + %d = %d\n", a, b, a + b);
            break;
        case 2:
            printf("%d - %d = %d\n", a, b, a - b);
            break;
        case 3:
            printf("%d * %d = %d\n", a, b, a * b);
            break;
        case 4:
            if (b != 0)
            {
                printf("%d / %d = %.2f\n", a, b, (float)a / b);
            }
            else
            {
                printf("Không thể chia cho 0\n");
            }
            break;
        default:
            printf("Lựa chọn không hợp lệ. Vui lòng chọn lại.\n");
            break;
        }
    }

    printf("Bạn đã thoát chương trình.\n");
    return 0;
}
