// File Name :Programme11.c
// Input : 4 , 2
// Output : 4 * 4 =16
// Function : DisplayPower
// Created by Ashutosh Vikhe on 02/03/21.
// Que :Accept two Number from user and calculate its power

#include <stdio.h>
int Power(int iValue1,int iValue2)  
{
    long unsigned int iCnt = 0;                  // long unsigned int
    int iMult = 1;
    
    if(iValue1 < 0)                              //Filter
    {
        iValue1 = - iValue1;
    }
    if(iValue2 < 0 )                              //Filter
    {
        iValue2 = -iValue2;
    }
    for (iCnt=1;iCnt<=iValue2;iCnt++)             //Loop
    {
        iMult = iMult * iValue1;                  //Logical Function
    }
    return iMult;
}
int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iRet = 0;
    
    printf("Enter First Number..\n");
    scanf("%d",&iNo1);
    
    printf("Enter Second Number..\n");
    scanf("%d",&iNo2);
    
    iRet=Power(iNo1,iNo2);
    
    printf("Result is :%d\n",iRet);
    return 0;
}
