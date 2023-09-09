#include<stdio.h>

// 两数之和
int sum(int a, int b) {
	return a + b;
}

// 比较俩数大小
int numberSize(int a, int b) {
	int c;
	if (a>b)
	{
		c = a;
	}
	else if (a<b)
	{
		c = b;
	}
	else {
		c = a;
		printf("两位数相同，a=%d,b=%d \n", c, c);
	}
	return c;
}

int main() {
	//printf("Hello C!");

	// 两数之和
	/*
	int a, b = 0;
	printf("请输入a b:");
	scanf_s("%d %d", &a,&b);
	int c = sum(a, b);
	printf("两数之和a+b=%d \n", c);
	*/
	int a, b;
	printf("请输入a b:");
	scanf_s("%d %d", &a, &b);
	printf("sum is %d \n", a+b);

	// 比较俩数大小
	/*
	int a, b;
	printf("请输入两个数进行比大小:");
	scanf_s("%d %d", &a, &b);
	printf("max = %d", (a > b) ? a : b);
	*/
	

	return 0;
}


