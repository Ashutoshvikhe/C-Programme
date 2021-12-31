 //
//  Programme65.c
//  
//
//  Created by Ashutosh Vikhe on 22/03/21.
//Accept the string from user and display the length of the string

#include <stdio.h>
int strlenX(char str[])
{
    int iCount = 0;
    while(*str !='\0')
    {
        iCount++;
        str++;
    }
    return iCount;
}
int main()
{
    char Arr[40];
    int iRet = 0;
    printf("Enter Your Name\n");
    
    scanf("%[^'\n']s",Arr);
    
    //fgets(Arr,40,stdin);
    
    iRet = strlenX(Arr);
    printf("The length of the string is:%d\n",iRet);
    return 0;
}
