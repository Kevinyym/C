#include <stdio.h>

int main()
{
	int arr[10] = {0};
	// 输入
	int i = 0;
	for (i = 0; i<10; i++)
	{
		scanf("%d", &arr[i]);
	} 
	// 求和
	int sum = 0;
	for (i = 0; i<10; i++)
	{
		sum = sum + arr[i];
	}
	// 求平均值
	int avg = sum / 10;
	printf("avg = %d\n", avg);
	return 0;
}