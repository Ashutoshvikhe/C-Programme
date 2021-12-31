//
//  Programme77.c
//  
//
//  Created by Ashutosh Vikhe on 23/03/21.
//

#include <stdio.h>
void Display(char str[])
{
    int iCount = 0;
    int i = 0;
    if(str==NULL)
    {
        return;
    }
    while(*str !='\0')
    {
        iCount++;
        str++;
    }
    str--;
    while(iCount>0)
    {
        printf("%c",*str);
        iCount--;
        str--;
    }
}
int main()
{
    char Arr[40];
    int iRet = 0;
    
    printf("Enter Your String\n");
    scanf("%[^'\n']s",Arr);
    
    Display(Arr);
    
    //printf("Updated string is:%s\n",Arr);
    
    return 0;
}



