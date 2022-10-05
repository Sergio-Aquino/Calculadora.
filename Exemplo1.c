#include <stdio.h> 

int main(){
 
 
 	int idade = 0;
 	float peso = 0;
 	float altura = 0;
 	float imc = 0;
 	int meses = 0;
 	int dias = 0;
 	
 
 	
 	//printf("Informe a sua idade: ");
 	//scanf("%d", &idade);
 	
 	printf("Informe o seu peso: ");
 	scanf("%f", &peso);
 	
 	printf("Informe a sua altura: ");
 	scanf("%f", &altura);
 	
 	while(altura != 0 && peso != 0){
 	
 		imc = peso / (altura * altura);
 		//meses = idade * 12;
 		//dias = idade * 365;
 	
 		//printf("A sua idade é de %d anos.\n", idade); 
 		printf("O seu peso é de %.2f Kg. A sua altura é de %.2f metros. E o seu imc é de %.2f. \n", peso, altura, imc);
 		//printf("A sua altura é de %.2f metros.\n", altura);
 		//printf("Você tem %d meses de vida.\n", meses);
 		//printf("O seu imc é de %.2f. Kg/m²\n", imc);
 		//printf("O seus dias de vida são de %d.\n", dias);
 	
 
		if(imc < 18.5){
			printf("Você está abaixo do peso.\n");
		
		} else if(imc >= 18.6 && imc <= 24.9){
			printf("     Você está no peso ideal.\n");
	
		} else if(imc >= 25 && imc <= 29.9){
			printf("Você está levemente acima do peso.\n");
	
		} else if(imc >= 30 && imc <= 34.9){
			printf("Você está com obesidade de 1º grau.\n");
	
		} else if(imc >= 35 && imc <= 39.9){
			printf("Você está com obesidade de 2º grau.\n");
		} else{
			printf("Você está com obesidade mórbida.\n");
		}
		
		printf("Informe novamente um peso: ");
		scanf("%f", &peso);
		
		printf("Informe novamento uma altura: ");
		scanf("%f", &altura);
	}
 
 	return 0;
}
