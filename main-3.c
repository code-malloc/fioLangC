//	malloc.ru
//	Чтение из файла


#include <stdio.h>

int main( )
{
	float num;

	/* создание файла */
	FILE *read;
	const char *wn = "files/записанное_число.txt";
	const char *bd = "files/база_данных.txt";
	const char *mode = "r";

	 ///////////////////////////////////////////
	/* записанное_число.txt */
	if( ( read = fopen( wn, mode ) ) == NULL )	
	{
		printf( "\nЧто то пошло не так =(\n" );
	}

	printf( "Считано из \"%s\": \n",  wn );
	for( ; fscanf( read, "%f", &num ) != EOF; printf( "%0.2f  ",  num ) );

	printf("\n\n");


	///////////////////////////////////
	/* база_данных.txt */
	if( ( read = fopen( bd, mode ) ) == NULL )	
	{
		printf( "\nЧто то пошло не так =(\n" );
	}

	printf( "Считано из \"%s\": \n",  bd );
	for( ; fscanf( read, "%f", &num ) != EOF; printf( "%0.2f  ",  num ) );

	printf("\n\n");

	return 0;
}
