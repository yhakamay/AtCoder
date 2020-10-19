#include <stdio.h>

int	main(void)
{
  char	str[500];
  int	i;
  int	j;
  int	len;

  scanf("%s", str);
  len = 0;
  while (str[len] != '\0')
    len++;
  i = 0;
  while (i < len - 1)
  {
    j = i + 1;
    while (j < len)
    {
      if (str[i] == str[j])
      {
        printf("no");
        return (0);
      }
      j++;
    }
    i++;
  }
  printf("yes");
  return (0);
}
