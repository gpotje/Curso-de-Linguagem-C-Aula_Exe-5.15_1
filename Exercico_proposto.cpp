#include <stdio.h>
#include <locale.h>
main(){
	
	setlocale(LC_ALL,"Portuguese");
	float n1,n2,media;
	
	printf("digite a 1° nota do aluno:\n");
	scanf("%f",&n1);
	printf("digite a 2° nota do aluno:\n");
	scanf("%f",&n2);
	
	media = (n1+n2)/2;
	
	
	if(media >= 6.0)
	{printf("Aluno foi aprovado parabéns");}
	
	else{printf("Aluno foi Reprovado Lamento");}
	
	
}
