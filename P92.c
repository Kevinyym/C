#include <stdio.h>

// 作用域和生命周期
// 局部变量;就是变量所在的局部范围
// 全局变量的作用域:整个工程
int g_val = 2022; //全局变量
// extern int g_val; //工程内的外部声明的全局变量;
//局部变量的生命周期：
// 全局变量的生命周期：程序的生命周期;

int main()
{
	printf("1:%d\n", g_val);
	printf("hehe\n");
	printf("啵啵啵\n");
	printf("????????????????\n");
	{
		printf("2:%d\n", g_val);

		int a = 10;
		printf("a = %d\n", a);
	}
	printf("3:%d\n\n", g_val);

	// int a = 10;
	// printf("a = %d\n", a);


	return 0;

}