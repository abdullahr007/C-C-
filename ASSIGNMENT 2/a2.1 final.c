#include <stdio.h>

int main(){
    double Double1;
    double Double2;
    
    scanf("%lf", &Double1);
   
    scanf("%lf", &Double2);
    printf("sum of doubles=%lf\n",Double1 + Double2);
    printf("difference of doubles=%lf\n",Double1 - Double2);
    printf("square=%lf\n",Double1*Double1);
    int Integer1;
    int Integer2;
    scanf("%d",&Integer1);
    scanf("%d",&Integer2);
    printf("sum of integers=%d\n",Integer1+Integer2);
    printf("product of integers=%d\n",Integer1*Integer2);
    char Char1;
    char Char2;
    getchar();
    scanf("%c",&Char1);
    getchar();
    scanf("%c",&Char2);
    printf("sum of chars=%d\n",Char1+Char2);
    printf("product of chars=%d\n",Char1*Char2);
    printf("sum of chars=%c\n",Char1+Char2);
    printf("product of chars=%c\n",Char1*Char2);

    return 0;
}