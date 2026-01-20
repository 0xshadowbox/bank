#include<stdio.h>

struct student {
    char name;
    int age;
    float per;
}

int main(){
    float a[] = {10.1,20.1,30.1,40.1,50.1};
    void *p;
    p = a;

    printf("\n *p: %f", *(float*)p);
}