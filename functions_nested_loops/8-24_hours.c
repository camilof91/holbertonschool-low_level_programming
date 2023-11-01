/*This program prints 24 horas.*/
#include "main.h"
/**
 *jack_bauer - Entry point
 *
 *Description: This is the main function that prints 24 horas.
 *Return: void.
 *
 */
void jack_bauer(void)
{
int hd, hu, md, mu;
for (hd = 0; hd <= 2; hd++)
{
for (hu = 0; hu <= 9; hu++)
{
if ((hd <= 1 && hu <= 9)|| (hd <= 2 && hu <= 3))
{
for (md = 0; md <= 5; md++)
{
for (mu = 0; mu <= 9; mu++)
{
_putchar(hd + '0');
_putchar(hu + '0');
_putchar(58);
_putchar(md + '0');
_putchar(mu + '0');
_putchar('\n');
}
}
}
}
}
}
