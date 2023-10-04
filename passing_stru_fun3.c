#include<stdio.h>

struct s
{
    int x;
    int y;
};

void print(struct s v1);

int main()
{
    struct s s1 = {10,20};
    struct s s2 = {50,100};
    print(s1);
    printf("Inside main:\n");
    printf("%d %d\n",s1.x,s1.y);
    print(s2);
    printf("Inside main:\n");
    printf("%d %d\n",s2.x,s2.y);
    return 0;
}

void print(struct s v1)
{
    printf("Inside print:\n");
    printf("%d %d\n",v1.x,v1.y);
    v1.x=1;
    v1.y=2;
}