int main(void)
{
int i, j, k;

for (i = 0; i < 100; i++)
{
j = i % 10; /* Extract last digit */
k = i / 10; /* Extract first digit */

if (k != j && k < j) /* Check for different digits and smallest combination */
{
putchar(k + '0'); /* Convert digits to characters and print */
putchar(j + '0');

if (i != 89) /* Check for last combination */
{
putchar(','); /* Print separator */
putchar(' ');
}
}
}

putchar('\n'); /* Print newline */

return (0);
}
