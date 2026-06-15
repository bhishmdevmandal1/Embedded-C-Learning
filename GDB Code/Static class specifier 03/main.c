// ststic class specifier use with function 


#include <stdio.h>

void file1_myFun1(void);

static int mainPrivateData;


int main()
{
    mainPrivateData = 100;
    
    printf("mainPrivateData = %d\n",mainPrivateData);
    
    file1_myFun1();
    
    printf("mainPrivateData = %d\n",mainPrivateData);
    
    return 0;
}


void change_system_clock(int system_clock)  // we can use static keyword to prevent this function from no one can use this nor modify, from outside the scope of thic file 
{
    
    printf("System clock changed to = %d\n",system_clock);
    
}