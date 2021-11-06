#include<stdio.h>
#include<conio.h>
int main()

{
    int a,b;
    printf("enter value of a and b\n");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("swapping - a=%d b=%d",a,b);
    getch();
    return 0;
}
