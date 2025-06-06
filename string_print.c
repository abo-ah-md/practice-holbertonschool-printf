#include <unistd.h>
/**
*string_print - prints characters to stdout based on spesifer (%s) format
*@str: string
*Return: number of printed characters
*/
int string_print(char *str)
{
int i;
for (i = 0; str[i]; i++)
write(1, &str[i], 1);
return (i);
}
