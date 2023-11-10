# include "main.h"

char *_strpbrk(char *s, char *accept)
{
  int i;
  
  for (i = 0; *(s + i) != '\0';i++)
    {
      
      if (*s == *(accept + i))
	{
	  return (s);
	}
    }
  return (0);
}
