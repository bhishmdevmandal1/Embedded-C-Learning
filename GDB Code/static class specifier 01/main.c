
#include <stdio.h>

void myFun1(void);

   //int count = 0;

int main()
{
    
    myFun1();
    
    myFun1();
    
    myFun1();
    
    myFun1();
    
    return 0;
    
}


void myFun1(void)
{
    
   static int count = 0;
    
    count  = count + 1;
    
    printf("This function excuted %d time's\n",count);
    
}