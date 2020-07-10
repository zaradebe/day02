#include <unistd.h>

void ft_print_comb(void)
{ 
 char a;
 char b;
 char c;

  a='0';
  b='0';
  c='0';

  while (a<'9'){
	  while(b<'9'){
	 
		 while(c<'9'){
			 while(a<b && b<c){
		     ft_putchar(a);
		     ft_putchar(b);
			 ft_putchar(c);
             ft_putchar(',');
			 ft_purchar(' ');
			 }
			 c++;
			
		 }
		 c = '0';
		 b++;
	  }
	 
   b = '0';
   a++;
  }

}
