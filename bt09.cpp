#include <stdio.h>

int main()
{
    int a, b, c;
    int choice;
    int checkInput = 0;
    while (1)
    {
        printf("\nMENU\n");
        printf("1. Nhập 3 số\n");
        printf("2. Tổng 3 số\n");
        printf("3. Trung bình cộng 3 số\n");
        printf("4. Số nhỏ nhất\n");
        printf("5. Số lớn nhất\n");
        printf("6. Thoát\n");
        printf("Lựa chọn của bạn: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Nhập 3 số: ");
            scanf("%d %d %d", &a, &b, &c);
            checkInput = 1; // Đánh dấu đã nhập 3 số
            break;
        case 2:
            if (checkInput)
            {
                printf("Tổng 3 số: %d\n", a + b + c);
            }
            else
            {
                printf("Bạn cần nhập 3 số trước.\n");
            }
            break;
        case 3:
            if (checkInput)
            {
                printf("Trung bình cộng 3 số: %.2f\n", (a + b + c) / 3.0);
            }
            else
            {
                printf("Bạn cần nhập 3 số trước.\n");
            }
            break;
        case 4:
            if (checkInput)
            {
                if (a <= b && a <= c)
                {
                    printf("Số nhỏ nhất: %d\n", a);
                }
                else if (b <= a && b <= c)
                {
                    printf("Số nhỏ nhất: %d\n", b);
                }
                else
                {
                    printf("Số nhỏ nhất: %d\n", c);
                }
            }
            else
            {
                printf("Bạn cần nhập 3 số trước.\n");
            }
            break;
        case 5:
            if (checkInput)
            {
                if (a >= b && a >= c)
                {
                    printf("Số lớn nhất: %d\n", a);
                }
                else if (b >= a && b >= c)
                {
                    printf("Số lớn nhất: %d\n", b);
                }
                else
                {
                    printf("Số lớn nhất: %d\n", c);
                }
            }
            else
            {
                printf("Bạn cần nhập 3 số trước.\n");
            }
            break;
        case 6:
            printf("Thoát chương trình.\n");
            return 0;
        default:
            printf("Lựa chọn không hợp lệ. Vui lòng chọn lại.\n");
            break;
        }
    }

    return 0;
}
