:Stdheader

//#include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

/*int main(void)
{ 
    int a;
    int b;
    int x;
    int y;

  printf ("\nDigite um numero:");
  scanf ("%d", &a);
  
  printf ("\nDigite um numero:");
  scanf ("%d", &b);
  
  ft_div_mod(a, b, &x, &y);
  
  printf("\nResultado da divisao de %d / %d = %d. \n", a, b, x);
  printf("\nResultado do modulo de %d %% %d = %d. \n", a, b, y);
  return0;
}*/