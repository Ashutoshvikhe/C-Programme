//
//  Programme80.c
//  
//
//  Created by Ashutosh Vikhe on 29/03/21.
//
#include <stdio.h>
void strcpyrevX(char str[],char dest[])
{
    int iCount =0;
    if(str==NULL || dest == NULL)
    {
        return;
    }
    while(*str != '\0')
    {
        str++;
        iCount++;
    }
    str--;
    while(iCount > 0)
    {
        *dest=*str;
        str--;
        dest++;
        iCount--;
    }
    *dest='\0';
}
int main()
{
    char Arr[40];
    char Brr[40];
    
    printf("Enter Your String\n");
    scanf("%[^'\n']s",Arr);
    
    strcpyrevX(Arr,Brr);
    
    printf("Reverse string is:%s\n",Brr);
    
    return 0;
}


