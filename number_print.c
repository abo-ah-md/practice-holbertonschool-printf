#include <<unistd.h>

int number_print(int num)
{
if (num < 0)
{
write(1,"-",1);
num = -num;
return 1 + number_print(num);
}
if (num / 10)
return 1 + number_print(num / 10);
char c = num % 10 + '0';
write(1,&c,1);
return 1;
}
