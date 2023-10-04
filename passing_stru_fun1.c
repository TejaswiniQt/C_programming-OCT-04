#include<stdio.h>

struct s1
{
    int x;
    int y;
};

void print(int a,int b);

int main()
{
    struct s1 v1 = {.y=90,.x=50};
    struct s1 v2 ={10,20};
    print(v1.x,v1.y);
    print(v2.x,v2.y);

    return 0;
}

void print(int a,int b)
{
    printf("%d %d\n",a,b);
}