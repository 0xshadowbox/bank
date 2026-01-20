#include<stdio.h>
struct student
{
int age;
char *name;
float per;
}o;
int main()
{
printf("\n  size of struct:%d",sizeof(o));
printf("\n size of char:%d",sizeof(char));
printf("\n size of int :%d",sizeof(int));
printf("\n size of float:%f",sizeof(float));
 o.name="saipavan";
 o.age =19;
 o.per=85;
 printf("\n name:%s",o.name);
 printf("\n age:%d",o.age);
 printf("\n per:%0.2f",o.per);
 }