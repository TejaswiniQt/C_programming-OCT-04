#include<stdio.h>

struct s
{
    int x;
    int y;
};

void print(int *a,int *b);

int main()
{
    struct s s1 = {10,20};
    struct s s2 = {100,200};
    print(&s1.x,&s1.y);
    printf("in main:\n");
    printf("%d %d\n",s1.x,s1.y);
    print(&s2.x,&s2.y);
    printf("in main:\n");
    printf("%d %d\n",s2.x,s2.y);
    return 0;
}

void print(int *a,int *b)
{
    printf("in print func:\n");
    printf("%d %d\n",*a,*b);
    *a = 50;
}