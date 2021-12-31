//
//  Programme81.c
//  
//
//  Created by Ashutosh Vikhe on 29/03/21.
//Accept the string from user and

#include <stdio.h>
void strcpyX(char str[],char Crr[])
{
    if(str==NULL || Crr == NULL)
    {
        return;
    }
    while(*str != 0)
    {
        if((*str >='a')&&(*str <='z'))
        {
            *Crr=*str-32;
        }
        else
        {
            *Crr=*str;
        }
        str++;
        Crr++;
    }
    *Crr='\0';
}
int main()
{
    char Arr[40];
    char Brr[40];
    int iRet = 0;
    
    printf("Enter Your String\n");
    scanf("%[^'\n']s",Arr);
    
    strcpyX(Arr,Brr);
    
    printf("Updated String is:%s\n",Brr);
    
    return 0;
}
