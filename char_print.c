#include <unistd.h>
/**
*char_print - prints characters to stdout based on spesifer (%c) format
*@c: char
*Return: number of printed characters
*/
int char_print(char c)
{
write(1, &c, 1);
return (1);
}
