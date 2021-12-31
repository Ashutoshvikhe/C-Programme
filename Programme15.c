//
//  Programme14.c
//  Function : Time Complexity
//
//Created by Ashutosh Vikhe on 02/03/21.
//Que : Accept number from user and display its factor

#include <stdio.h>
void Factor(int iValue)
{
    int iCnt = 0;
    if(iValue <= 0)
    {
        iValue = -iValue;
    }
    for(iCnt=1;iCnt<=iValue\2;iCnt++)    //In this line the timecomplexity of thr programme is reduced to its half
    //Time complexity is denoted by O(N) where n is number of loop to be rotated
    {
        if(iValue % iCnt==0)
        {
            printf("%d\n",iCnt);
        }
    }
}
//time complexity :O(N/2)
int main()
{
    int iNo1 =0 ;
    int iRet = 0;
    printf("Enter first Number..\n");
    scanf("%d",&iNo1);
    Factor(iNo1);
   
    return 0;
}
