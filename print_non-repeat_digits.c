#include <stdio.h>

int repeat_digit(int num)
{
    int rem,temp,count=0,res=1;
    while(num)
    {
        rem = num %10;
        count++;
        if(count > 1)
        {
            if(rem == temp)
            res = 0;
            else 
            res = 1;
        }
        temp = rem;
        num = num /10;
    }
    return res;
}

int main()
{
    int i;
    for(i=1;i<=1000;i++)
    {
        if(repeat_digit(i))
        printf("%d ",i);
    }

    return 0;
}
