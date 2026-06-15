

#include <stdio.h>

 int mainPrivateData;  // you can use static class specifier to limit this variable that no other file can use this variable and modif.

 void file1_myFun1(void);

int main()
{
    
    
    mainPrivateData = 100;
    
    printf("mainPrivateData = %d\n",mainPrivateData);
    
    file1_myFun1();
    
     printf("mainPrivateData = %d\n",mainPrivateData);
     
    return 0;
}