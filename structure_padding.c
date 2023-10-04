/* Structure padding */

#include<stdio.h>
#pragma pack(1)

typedef struct stu1
{
    char c1;
    //char c2;
    double a;
    int v;
}s1;

struct stu2
{
    int a;
    char v;
    float b;
};

int main()
{
    s1 var1;
    struct stu2 s2;
    printf("%zu\n",sizeof(var1));
    printf("%d\n",sizeof(s2));
    return 0;
}