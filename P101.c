#include <stdio.h>
#define MAX 10000 //#define定义的标识符常量；

int main()
{
	// const int n = 10; //const修饰的常变量；
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};

	int i=0;
	printf("arr[] = ");
	for (i=0; i<10; i++)
	{

		printf("%d ",arr[i]);
	}
	printf("\n");
	int n = MAX;
	printf("n = %d\n",n);
	printf("\n");

	return 0;
}