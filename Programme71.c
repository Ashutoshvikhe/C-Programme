//
//  Programme71.c
//  
//
//  Created by Ashutosh Vikhe on 23/03/21.
// Accept the string from user and covert small character into capital character

#include <stdio.h>
void strlwrX(char str[])
{
    if(str==NULL)
    {
        return;
    }
    while(*str !='\0')
    {
        if((*str >='a')&&(*str <='z'))
        {
            *str=*str-32;
        }
        str++;
    }
}
int main()
{
    char Arr[40];
    int iRet = 0;
    
    printf("Enter Your String\n");
    scanf("%[^'\n']s",Arr);
    
    strlwrX(Arr);
    
    printf("Updated string is:%s\n",Arr);
    
    return 0;
}


