#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int num1;
	int num2;
	printf("Enter two numbers, and I will tell you\n");
	printf("the relationships they satsify:");
	scanf_s("%d%d", &num1, &num2);
	if (num1 == num2)
		printf("%d num1 is equal to %d\n", num1, num2);
	if (num1 != num2)
		printf("%d num1 is not equal to %d\n", num1, num2);
	if (num1 < num2)
		printf("%d num1 is less than %d\n", num1, num2);
	if (num1 > num2)
		printf("%d num1 is greater than %d\n", num1, num2);
	if (num1 <= num2)
		printf("%d num1 is less than or equal to %d\n", num1, num2);
	if (num1 >= num2)
		printf("%d num1 is greater than or equal to %d\n", num1, num2);
	system("pause");
	return 0;
}
