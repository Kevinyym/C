#include <stdio.h>

enum Sex
{
	//这种枚举类型的变量的未来可能取值；
	//枚举常量；
	Male = 3,  //赋初值；缺省值为0；
	Female,
	Secret
};
int main()
{
	enum Sex s = Female;
	printf("Sex = %d\n", Male);
	printf("Sex = %d\n", Female);
	printf("Sex = %d\n", Secret);

	return 0;
}