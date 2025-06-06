#include <<unistd.h>

int string_print(char *str)
{
int i;
for(i = 0; str[i]; i++)
write(1,&str[i],1);
return i;
}
