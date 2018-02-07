#include<stdio.h>


int main (){
	 int numero_1 = 0;
	 int numero_2 = 0;
	 int numero_3 = 0;
	 int numero_4 = 0;
	 
	 scanf("%d\n",&numero_1);
	 scanf("%d\n",&numero_2);
	 scanf("%d\n",&numero_3);
	 scanf("%d\n",&numero_4);
	 
	 if(((numero_1+numero_2+numero_3+numero_4)/4)<6){
	 	printf("Reprovado");
	 }else{
	 	printf("Aprovado");
	 }
	 	 	 	 
	
	
}
