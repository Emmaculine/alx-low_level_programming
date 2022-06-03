#include <stdio.h>
/**
 * main - my entry point
 * Description: prints all sizes in c
 * Return:0
 */
int main(void)
{
char a;
int b;
int long c;
int long long d;
printf("size of a char: %zu byte(s)\n", sizeof(a));
printf("size of an int: %zu byte(s)\n", sizeof(b));
printf("size of a long int: %zu byte(s)\n", sizeof(c));
printf("size of a long long int: %zu byte(s)\n", sizeof(d));
printf("size of a float: %zu byte(s)\n", sizeof(float));
return (0);
}
