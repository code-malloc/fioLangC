//	malloc.ru
//	Добавить в файл


#include <stdio.h>

int main()
{
	float num;
	/* создание файла */
	FILE *add;
	const char *filename = "files/база_данных.txt";
	const char *mode = "a";

	if( ( add= fopen( filename, mode ) ) == NULL )	
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
		fprintf( add, "%0.2f ", num );
	}

	/* close write */
	fclose( add );

	printf( "\nСохранено в - %s\n\n", filename );

	return 0;
}
