#include "main.h"

/**
 * print_alphabet - Check description
 * Description: It prints the alphabet in lowercase followed by a new line
 * Return: Nothing.
 */
void print_alphabet(void)
{
  char alphabets;

  for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
  {
    _putchar(alphabets);
  }
  _putchar('\n');
}
