//
//  Programme63.c
//  
//
//  Created by Ashutosh Vikhe on 22/03/21.
//

#include <stdio.h>
void Display(char str[])
{
    int iCnt = 0;
    while(str[iCnt]!='\0')
    {
        printf("%c\n",str[iCnt]);
        iCnt++;
    }
    
}
int main()
{
    char Arr[40];
    printf("Enter Your Name\n");
    fgets(Arr,40,stdin);
   
    Display(Arr);
    return 0;
}
