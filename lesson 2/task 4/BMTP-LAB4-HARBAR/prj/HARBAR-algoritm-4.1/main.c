#include <stdio.h>
#include <stdlib.h>

int main()
{
    float abs=0,ann=0,kenn=0,rez=0;
    printf("enter abs ");
    scanf("%f", &abs);
    printf("enter ann ");
    scanf("%f", &ann);
    abs=abs+ann;
    printf("enter kenn ");
    scanf("%f", &kenn);
    abs=abs/kenn;
    rez=abs/ann/(kenn+abs);
    printf("%f",rez);
    return 0;
}
