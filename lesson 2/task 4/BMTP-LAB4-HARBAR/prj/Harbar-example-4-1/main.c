#include <stdio.h>
#include <locale.h>

int main(void)
{
    float a;
    char *locale = setlocale(LC_ALL, "");
    printf("����i�� ������� ����i ���� (�): ");
    scanf("%f", &a);
    printf("��\'�� ����: %0.2f �.", a*a*a);
    puts("\n\n��� ���������� ������i�� Enter...");
    getch();
    return 0;
}
