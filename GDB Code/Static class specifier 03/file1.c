// function prototype
void change_system_clock(int system_clock);     //we are using a function from outside the scope or file so we need to use extern but in function call fron other file   extern will be assumed 

void file1_myFun1(void)
{
    
    change_system_clock(0);   //function call 
    
    
}

