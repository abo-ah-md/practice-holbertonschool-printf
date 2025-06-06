#include <<unistd.h>

int char_print(char c)
{
write(1,&c,1);
return 1;
}
