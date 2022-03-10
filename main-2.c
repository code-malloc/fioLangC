//	malloc.ru
//	Запись в файл


#include <stdio.h>

int main( )
{
	float num;

	/* создание файла */
	FILE *write;
	const char *filename = "files/записанное_число.txt";
	const char *mode = "w";

	if( ( write = fopen( filename, mode ) ) == NULL )	
	{
		printf( "\nЧто то пошло не так =(\n" );
		return 1;
	}

	for ( ; ; )
	{	
		printf( "Введите число: " );
		scanf( "%f", &num );

		if( num == 0 )
			break;

		/* w2f */
		fprintf( write, "%f ", num );
	}

	/* close write */
	fclose( write );
	
	printf( "Записано в \"%s\" число %f \n",  filename, num );

	return 0;
}
