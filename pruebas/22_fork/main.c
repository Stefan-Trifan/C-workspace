#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

void clearBuffer();

void paso(int d)  
{  
    (fork() == 0) ? printf("1") : printf("0");   
    
    if (d > 0)   
        paso(d - 1);   
}

int main(void)
{ 
    pid_t pid_padre = getpid();
    setbuf(stdout, NULL);
    paso(1);  
    if (getpid() == pid_padre) 
    {                
        usleep(10000);     
        printf("\n"); 
    }
    return 0;
}