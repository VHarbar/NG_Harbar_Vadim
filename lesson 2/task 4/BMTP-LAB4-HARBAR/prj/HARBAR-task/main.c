#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    char checkbox;
    char *locale=setlocale(LC_ALL,"");
    int age=0;
    float cost=0,discout=0;
    printf ("�I�: ������ ����� �������������, ���: �������������������� ���i�������� ����i���� ��i��������, �i� ����i���i� �������: 2020\n");
    printf("����i�� �i�� ");
    scanf("%f", &cost);
    printf("����i�� �i� ");
    scanf("%d", &age);
    if(age>=6 && age<14){
        printf("���� ������ i����i� Press f ");
        scanf("%s", &checkbox);
        if(checkbox=='F'|| checkbox=='f'){
            discout=0.50;
            cost=cost-cost*discout;
            printf("�i�� � ���");
            printf("%.2f", cost);
            return 0;
        }
            discout=0.75;
        cost=cost-cost*discout;
        printf("�i�� � ���");
        printf("%.2f", cost);
        return 0;
        }
    printf("\n���� i����i� press r ");
    scanf("%s",&checkbox);
    if(checkbox=='R'|| checkbox=='r'){
            discout=0.50;
            cost=cost-cost*discout;
            printf("�i�� � ���");
            printf("%.2f", cost);
            return 0;
    }
     printf("\n���� ����� press g");
    scanf("%s",&checkbox);
    if(checkbox=='g'|| checkbox=='G'){
            cost=cost-cost*discout;
            printf("�i�� � ���");
            printf("%.2f", cost);
            return 0;
    }
    printf("�i�� � ���");
    printf("%.0f",cost);
    return 0;
}

