/* Array of structures in c*/

#include<stdio.h>

struct stu1
{
    int roll_num;
    char name[20];
    float marks;
};

int main()
{
    struct stu1 s[3];
    int i;
    for(i=0; i<3; i++)
    {
        printf("Enter data: ");
        scanf("%d%s%f",&s[i].roll_num,s[i].name,&s[i].marks);
    }
    printf("Structure data:\n");
    for(i=0; i<3; i++)
    {
        printf("%d %s %f\n",s[i].roll_num,s[i].name,s[i].marks);
    }

    return 0;
}