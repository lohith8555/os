#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

#include <stdlib.h>
int main()
{
int pid;          
pid = fork();     
if ( pid < 0 )
{                                 
printf(â€œ\nFork failed\nâ€);
exit (-1);
}
else if ( pid == 0 )
{                    
execlp ( â€œ/bin/lsâ€, â€œlsâ€, â€œ-lâ€, NULL ); 
}
else
{                          
wait (NULL);             
printf(â€œ\nchild complete\nâ€);
exit (0);
}
}
