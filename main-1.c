//	malloc.ru
//	Ввод-вывод в терминал


#include <stdio.h>

int main( )
{
	float num;
	
	printf( "Введите число: " );
	scanf( "%f", &num );	

	printf("\nВаше число : %0.2f", num);

	return 0;
}
