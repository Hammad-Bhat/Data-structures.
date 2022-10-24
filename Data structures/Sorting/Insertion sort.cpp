#include <stdio.h>
#include <stdlib.h>

int * insertionSort( int * ar, int n )
{

	for( int i = 1; i < n; i++ ){
	int currentValue = ar[i];
	int j = i - 1;
	while( j >= 0 && ar[j] > currentValue )
	{
		ar[ j+1 ] = ar[j];
		j--; 		
} 		
ar[j+1] = currentValue;
  }
 
  return ar; }


int main()

{
 int A[] = { 6, 4, 1, 3, 2, 5, 7 };

int n = sizeof(A) / sizeof(A[0]); 

printf("Before Sorting: \n"); 	

printArray( A, n );

printf("InsertionSort: \n");

int * insertion = insertionSort( copyOf(A, n), n );
 
printArray( insertion, n ); 	

return 0; 
}
