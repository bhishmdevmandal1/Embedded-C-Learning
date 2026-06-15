

#include <stdio.h>


// this is a function prototype of function myfunction1 
void myFunction1(void);


int myScore; //globlvariable


int main()
{
         //int myScore; local variable, 1.Local variable exist for the time the function is executed 2. Once the function exits, local variable die.
    
    
    myScore = 900;
    printf("001Value of the variable myScore = %d\n",myScore);
    
    
   //this is a function call
   myFunction1();
    
    return 0;
}





// this is a function defination
void myFunction1(void)   //this function doesn't return anything.So, that's why, we can mention it as void.And also this function doesn't take any arguments. So, that's why, let's mention void inside the parentheses.
{
  
   
    myScore = 800;
    printf("002Value of the variable myScore = %d\n",myScore);
}


