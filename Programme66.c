//
//  Programme66.c
//  
//
//  Created by Ashutosh Vikhe on 22/03/21.
// Accept the string from user and find the character count

#include <stdio.h>
int CountA(char str[])
{
    int iCount = 0;
    if(str==NULL)
    {
        return 0;
    }
    while(*str !='\0')
    {
        if(*str=='a')
        {
            iCount++;
        }
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
    
    
    iRet = CountA(Arr);
    printf("character count is:%d\n",iRet);
    return 0;
}
