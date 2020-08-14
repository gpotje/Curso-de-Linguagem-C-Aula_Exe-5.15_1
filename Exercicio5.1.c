#include <stdio.h>


main(){
	
	/*
	Estrutura IF
		if(condição){
			intrução 1 
		}else{
			intrução 2
		}	
	
	*/
	
	
	int n1,n2;
	
	printf("digite o numero 1 \n");
	scanf("%d",&n1);
	
	printf("digite o numero 2 \n");
	scanf("%d",&n2);
	
	if (n1 < n2){
		
	printf("a ordem e %d %d \n\n",n1,n2);
	
	}
	else {
		
	printf("a ordem e %d %d \n\n",n2,n1);

	}
	
	system("pause");
	
}
