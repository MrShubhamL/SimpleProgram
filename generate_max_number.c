
// This program to generate max possible digit from the given number.

// e.g. Number: 5986 -------------> Max Possible Number: 9865


#include<stdio.h>

int main()
{
    int number,temp,i,flg,rem,new_num=0;

    printf("\n Enter the no: ");
    scanf("%d",&number);
    temp=number;


    for(i=9;i>=0;i--)
    {
        flg=0;
        number=temp;
        while(number!=0)
        {
            rem=number%10;
            if(rem==i)
            {
                new_num=(new_num*10)+rem;
            }
            number=number/10;
        }
    }
    printf("\n Max Possible Number: %d \n",new_num);

    return 0;
}
