



#include <stdio.h>

int valueA = 4;          //global variable


int main()
{
    {
      int valueA = 67;   // local variable
      
       printf("1 Value A = %d\n",valueA);
    }
    
    
    
    
     printf("2 Value A = %d\n",valueA);
    
    
    
    
    
     return 0;
}







/*when the variable names are same between local space and global space.
The first preference is always given to the local space.
this is absolutely illegal -> you cannot define another variable of same name.*/