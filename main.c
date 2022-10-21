#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, result;
	a = 0;
	b = 0;
	
	
	printf("\n Informe o valor de a:");
	scanf("%d", &a);
	printf("\n Informe o valor de b:");
	scanf("%d", &b);
	result = !(a && b) && !a || !b;
	printf("\nO resultado e: %d\n\n", result);
	
	
	system("pause");
}
