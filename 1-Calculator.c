#include<stdio.h>
int main()
{
    int a,b,add,sub,mul,mod;
    float div;
    printf("enter the value of a");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);
    add=a+b;
    sub+a-b;
    mul=a*b;
    mod=a%b;
    div=a/b;
    printf("addition of a and b is %d\n",add);
    printf("subtraction of a and b is %d\n",sub);
    printf("multiplication of a and b is %d\n",mul);
    printf("division of a and b is %.2f\n",div);
    printf("modulo of a and b is %d\n",mod);
}
