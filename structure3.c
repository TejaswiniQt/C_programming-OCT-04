/*Nested structure */

#include<stdio.h>

typedef struct stu1
{
    int a;
    struct stu2
    {
        int s;
        char c;
    }s2;
    double k;
}s1;

int main()
{
    s1 var1;
    var1.a = 45;
    var1.s2.s = 50;
    var1.s2.c = 'p';
    printf("%d %d %c\n",var1.a,var1.s2.s,var1.s2.c);

    return 0;
}