//
//  Programme72.c
//  
//
//  Created by Ashutosh Vikhe on 23/03/21.
//

#include <stdio.h>
void strlwrX(char str[])
{
    if(str==NULL)
    {
        return;
    }
    while(*str !='\0')
    {
        if((*str >='A')&&(*str <='Z'))
        {
            *str=*str+32;
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


