//
//  Programme78.c
//  
//
//  Created by Ashutosh Vikhe on 23/03/21.
//

#include <stdio.h>
void DisplayReverse(char str[])
{
    char *start;
    char *end;
    char temp;
    if(str==NULL)
    {
        return;
    }
    start=str;
    end=str;
    while(*end !='\0')
    {
        end++;
    }
    end--;
    while(start < end)
    {
        temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
}
int main()
{
    char Arr[40];
    int iRet = 0;
    
    printf("Enter Your String\n");
    scanf("%[^'\n']s",Arr);
    
    DisplayReverse(Arr);
    
    printf("Reverse string is:%s\n",Arr);
    
    return 0;
}




