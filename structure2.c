/*structure nesting*/

#include<stdio.h>

typedef struct stu1
{
    int a;
    char c;
}s1;

typedef struct stu2
{
    float f;
    s1 v1;
}s2;

int main()
{
    s1 var1;
    var1.a = 50;
    var1.c = 'k';
    s2 var2;
    var2.f = 45.12;
    var2.v1.a = 80;
    var2.v1.c = 'T';
    printf("Structure s1:\n");
    printf("%d %c\n",var1.a,var1.c);
    printf("Structure s2:\n");
    printf("%f %d %c\n",var2.f,var2.v1.a,var2.v1.c);
    return 0;
}