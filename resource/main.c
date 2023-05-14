#include <stdio.h>
int main()
{
    int age = 0;
    printf("please input your age:");
    scanf_s("%d", &age);
    printf("hello world:%d", age);
    return 0;
}