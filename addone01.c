                                                                              addone
#include<stdio.h>
int get_input()
{
int a;
printf("enter the value of a\n");
scanf("%d",&a);
return a;
}
int add_one(int x)
{
int c;
c=x+1;
return c;
}
int output(int y)
{
printf("%d",y);
}
int main()
{
 int get_input();
 int add_one(int a);
 int output(int c);
}





