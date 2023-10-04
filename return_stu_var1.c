#include<stdio.h>

struct s
{
    int x;
    int y;
};

struct s edit(struct s v1);
void print(struct s v1);

int main()
{
    struct s s1 = {10,20};
    struct s s2 = {80,90};
    s1 = edit(s1);
    s2 = edit(s2);
    print(s1);
    print(s2);
    return 0;
}

struct s edit(struct s v1)
{
    (v1.x)++;
    v1.y = v1.y + 2;
    return v1;
}

void print(struct s v1)
{
    printf("%d %d\n",v1.x,v1.y);
}

