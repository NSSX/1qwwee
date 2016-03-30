#include "my_printf.h"

//SpdDoOuUxXcC
int main()
{
  int res1;
  int res2;
  //  unsigned long a = 200;
   //   char *i = "lol";
  res1 = 0;
  res2 = 0;
  //les modifier l ll etc voir dans le man 3 printf
  //La precision dit cb de carac afficher
  //peut etre un ft_strjoin pour un bloc ?
  printf("VRAI PRINTF : \n");
  res1 = printf("%ld\n", LONG_MAX);
  printf("MON PRINTF : \n");
  res2 = ft_printf("%ld\n", INT_MAX);
  ft_putstr("\nret 1 : ");
  ft_putnbr(res1);
  ft_putstr("\nret 2 : ");
  ft_putnbr(res2);
  return (0);
}

