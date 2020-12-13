#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    char checkbox;
    char *locale=setlocale(LC_ALL,"");
    int age=0;
    float cost=0,discout=0;
    printf ("ПIБ: Гарбар Вадим Володимирович, ЗВО: Центральноукраїнський нацiональний технiчний унiверситет, Рiк реалiзацiї проекту: 2020\n");
    printf("Введiть цiну ");
    scanf("%f", &cost);
    printf("Введiть вiк ");
    scanf("%d", &age);
    if(age>=6 && age<14){
        printf("Якщо дитина iнвалiд Press f ");
        scanf("%s", &checkbox);
        if(checkbox=='F'|| checkbox=='f'){
            discout=0.50;
            cost=cost-cost*discout;
            printf("Цiна у грн");
            printf("%.2f", cost);
            return 0;
        }
            discout=0.75;
        cost=cost-cost*discout;
        printf("Цiна у грн");
        printf("%.2f", cost);
        return 0;
        }
    printf("\nЯкщо iнвалiд press r ");
    scanf("%s",&checkbox);
    if(checkbox=='R'|| checkbox=='r'){
            discout=0.50;
            cost=cost-cost*discout;
            printf("Цiна у грн");
            printf("%.2f", cost);
            return 0;
    }
     printf("\nЯкщо герой press g");
    scanf("%s",&checkbox);
    if(checkbox=='g'|| checkbox=='G'){
            cost=cost-cost*discout;
            printf("Цiна у грн");
            printf("%.2f", cost);
            return 0;
    }
    printf("Цiна у грн");
    printf("%.0f",cost);
    return 0;
}

