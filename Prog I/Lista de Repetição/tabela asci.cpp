#include<stdio.h>
main()
{
	int x=0;
	
	printf("Tabela ASCII:");
	while(x <= 255)
	{
		if(x%10==0)
		printf("\n");
		printf("%d = %c\t", x, x);
		x++;
	}
}
