#include <unistd.h>

void ft_print_comb2(coid){

	char a;
	char b;

	a = '0';
	b = '0';

	if(a < '9'){
       if(b < '9'){
		   if(a<b){
		   ft_putchar(a);
		   ft_putchar(b);
		   b++;
		   }
		b = '0';
	   	a++;
	}
}
