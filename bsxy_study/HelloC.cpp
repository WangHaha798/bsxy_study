#include<stdio.h>

// ����֮��
int sum(int a, int b) {
	return a + b;
}

// �Ƚ�������С
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
		printf("��λ����ͬ��a=%d,b=%d \n", c, c);
	}
	return c;
}

int main() {
	//printf("Hello C!");

	// ����֮��
	/*
	int a, b = 0;
	printf("������a b:");
	scanf_s("%d %d", &a,&b);
	int c = sum(a, b);
	printf("����֮��a+b=%d \n", c);
	*/
	int a, b;
	printf("������a b:");
	scanf_s("%d %d", &a, &b);
	printf("sum is %d \n", a+b);

	// �Ƚ�������С
	/*
	int a, b;
	printf("���������������бȴ�С:");
	scanf_s("%d %d", &a, &b);
	printf("max = %d", (a > b) ? a : b);
	*/
	

	return 0;
}


