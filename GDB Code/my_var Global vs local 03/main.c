
#include <stdio.h>

int a;     // global variable 

int main()
{
    a = 25;
    
    {
        int my_var;   //Local variable
        my_var = 45;
        
        printf("01. value of local variable 'my_var' = %d\n", my_var);
        printf("02. value of global variable 'a' = %d\n", a);
    }
    
    
    int my_var;
    my_var = my_var + 10;   //in right hand side expression my_var variable is not initiliz. That's why its value is samne ramdom/garbage value
    printf("03. value of the local variable 'my_var' = %d\n", my_var);     // Output of this printf is unpredictable
    
    
    return 0;
}



