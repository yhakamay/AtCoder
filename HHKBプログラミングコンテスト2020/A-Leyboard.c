#include <stdio.h>

int	main(void)
{
  char	s, t;
  
  scanf("%c\n%c", &s, &t);
  if (s == 'Y')
    printf("%c", t - 32);
  else
    printf("%c", t);
  return 0;
}
