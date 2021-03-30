#include <stdio.h>
#include <string.h> 
int main(int argc, char *argv[])
{
    char filename[255], cmd[600];
    if ( argc != 2 )
    {
        printf("\n\nusage: %s <filename/dir>\n\n", argv[0]); 
        exit(0);
    }
    strcpy(filename, argv[1]);
    snprintf(cmd, 600, "ls |grep %s", filename);
    system(cmd);
    return 0;
}
