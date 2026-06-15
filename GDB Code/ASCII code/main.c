
#include <stdio.h>

int main()
{
    
    char a1 = 65;     // for this you should know the ASCII know the code numbers of characters 
    char a2 = 112;
    char a3 = 112;
    char a4 = 108;
    char a5 = 101;
    char a6 = 58;
    char a7 = 41;
    
    printf("01 The string is: %c%c%C%c%C%c%c\n",a1,a2,a3,a4,a5,a6,a7);
    
    char b1 = 'A';      
    char b2 = 'p';
    char b3 = 'p';
    char b4 = 'l';
    char b5 = 'e';
    char b6 = ':';
    char b7 = ')';
    
    printf("02 The string is: %c%c%C%c%C%c%c\n",b1,b2,b3,b4,b5,b6,b7);
    
    
    char a[] = "Apple:)";
    printf("03 The string is: %s\n",a);
    
    
    return 0;
}