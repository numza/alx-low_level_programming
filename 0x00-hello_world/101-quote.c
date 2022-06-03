#include <unistd.h>
0;276;0c
/**
 *main -Entry point
 *
 *Return: Always 1
 *
 */
int main(void)
{
char arr[] = "and tha piece of art is useful\" - Dora Korpar,2015-10-19\n";
write(STDOUT_FILENO, arr, 59);
return (1);
}
