/* Structures in c*/

#include<stdio.h>

struct stu1
{
    int a;
    float b;
    char c;
    double d;
};

struct stu3
{
    int a;
    float b;
};

int main()
{
    struct stu1 s1 = {10, 50.23, 'l', 45.12};
    struct stu3 s3 = {.a=50, .b=85.45};
    struct stu1 s2;
    s2 = s1; 
    printf("Strucure1 : \n");
    printf("%d %f %c %lf\n",s1.a,s1.b,s1.c,s1.d);
    printf("Structure2 : \n");
    printf("%d %f %c %lf\n",s2.a,s2.b,s2.c,s2.d);
    printf("Structure3 : \n");
    printf("%d %f\n",s3.a,s3.b);

    return 0;
}