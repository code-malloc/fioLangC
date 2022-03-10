// malloc.ru
// Операции с числами взятых из файла - кол-во чисел, сумма, ср. арифметическое


#include <stdio.h>

int main()
{
	float num, sum;
	int count;
	float average;

	num = 0, sum = 0.0, count = 0, average = 0.0;

	/* создание файла */
	FILE *read;
	const char *bd = "files/база_данных.txt";
	const char *mode = "r";

	if( ( read = fopen( bd, mode ) ) == NULL )	
	{
		printf( "\nЧто то пошло не так =(\n" );
	}

	for( ; fscanf( read, "%f", &num ) != EOF; ) // сумма, кол-во чисел в файле
	{
		sum = sum + num;
		count++;
	}

	average = sum / count; // среднее арифметическое

	printf( "Считано из \"%s\": \n\n",  bd );
	printf( "Количество чисел = %d\n",  count );	
	printf( "Сумма чисел = %0.2f\n",  sum );
	printf( "Среднее арифметическое = %0.2f\n\n",  average );	

	return 0;
}
