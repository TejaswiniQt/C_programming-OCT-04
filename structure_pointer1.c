/*structure pointer*/

#include<stdio.h>

typedef struct stu1
{
    int a;
    float b;
}s1;

int main()
{
    s1 var1 = {.a=100, .b=80.56};
    s1 *ptr = &var1;
    printf("%d %f\n",ptr->a,ptr->b);

    return 0;
}