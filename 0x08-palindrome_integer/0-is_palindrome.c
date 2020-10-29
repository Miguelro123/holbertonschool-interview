# incluye  " palindrome.h "
# incluye  < stdio.h >
/ * *
 * is_palindrome - función si es palíndromo
 * @n: entero para comprobar si es palíndromo
 * Devuelve: 1 si n es un palíndromo y 0 en caso contrario
 * /
int  is_palindrome ( unsigned  long n)
{
	int unidad = 0 ;
	/ * unsigned long int dec = 1; * /
	/ * unsigned long int dec_up = 1; * /
	unsigned  long  int revn = 0 ;
	unsigned  long  int original = n;

	/ * mientras (n> dec) * /
	/ * { * /
	/ * dec = dec * 10; * /
	/ * } * /
	/ * si (dec> 1) * /
	/ * dec = dec / 10; * /
	mientras (n> = 1 )
	{

		unidad = n% 10 ;
		/ * n = n - (unidad * dec); * /
		revn = (revn * ( 10 )) + unidad;
		/ * dec_up = dec_up * 10; * /
		n = n / 10 ;
	}
	/ * printf ("este original% lu este vuelta% lu \ n", original, revn); * /
	return (original == revn);
}
