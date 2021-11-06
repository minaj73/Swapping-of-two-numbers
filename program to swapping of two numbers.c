#include<stdio.h>
#include<conio.h>
int main()

{
    int a,b,temp;
    printf("enter value of a and b\n");
    scanf("%d %d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("swapping - a=%d b=%d",a,b);
    getch();
    return 0;
}
