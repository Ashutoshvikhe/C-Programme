//
//  Programme62.c
//  
//
//  Created by Ashutosh Vikhe on 22/03/21.
// Accept the string from user and display its character on seperate line

#include <stdio.h>
void Display(char str[])
{
    printf("Characters are :\n");
    while(*str != 0)
    {
        printf("%c\n",*str);
        str++;
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

