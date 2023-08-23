#include<stdio.h>
int main()
{
	
	
	int a,b,addition,subtraction,multiplication,divison,module;
	printf("enter two  numbers:");
	scanf("%d%d",&a,&b);
   
	
	//enter a addition value//
	
	addition=a+b;
	
	
	//enter a subtraction value//
	subtraction=a-b;
	
	
	//enter a multiplication value//
    multiplication=a*b;

	//enter a divison value//
	 divison=a/b;
	 
	//enter a divison value//
	 module=a%b;
	 
    printf("addition : %d\n",addition); 
    printf("subtraction : %d\n",subtraction);
	printf("multiplication : %d\n",multiplication);
    printf("divison : %d\n",divison);
    printf("module : %d\n",module);
}
