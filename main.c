#include <stdio.h>
#include <math.h>

void soma(float a, float b);
void subtracao(float a, float b);
void multiplicacao(float a, float b);
void divisao(float a, float b);
void potencia(float a, float b);
void mod(float a, float b);
void div(float a, float b);
void mmc(float num3, float num4);
void mdc(float num3, float num4);



int main(){
  
 	int opc = 0;
 	float num1 = 0;
 	float num2 = 0;
 	float res = 0;
 	
 	
 	do {
      printf("\n0- Sair\n");
 		  printf("1- Soma\n");
 		  printf("2- Subtração\n");
 		  printf("3- Multiplicação\n");
 		  printf("4- Divisão\n");
 		  printf("5- Potência\n");
 		  printf("6- Mod\n");
 		  printf("7- Div\n");
 		  printf("8- MMC\n");
 		  printf("9- MDC\n \n");
 		  scanf("%d", &opc);

      if(opc == 0){
          break;

      } else if(opc < 0 || opc > 9){
          printf("\nOpção inválida. Tente novamente.\n");
        
      } else { 
          printf("\nInforme um número: ");
          scanf("%f", &num1);

          printf("\nAgora, informe outro número: ");
          scanf("%f", &num2);
        
 		      switch(opc){
            case 1:
 				      soma(num1, num2);
 				      break;
 			
 			      case 2:
              subtracao(num1, num2);
              break;
 			
 			      case 3:
              multiplicacao(num1, num2);
              break; 
 			
 			      case 4:
              divisao(num1, num2);
              break; 
 			
 			      case 5:
              potencia(num1, num2);
              break; 
 			
 			      case 6:
              mod(num1, num2);
              break;
 			
 			      case 7:
              div(num1, num2);
              break;
 			
 			      case 8:
              mmc(num1, num2);
              break;
 			
 			      case 9:
              mdc(num1, num2);
              break;
          }
        }
    
    } while(opc != 0);

    printf("\nPrograma encerrado com sucesso!"); 	
  
    return 0;
}



void soma(float a, float b){
  
    float result = 0;

    result = a + b;

    printf("\n%.f + %.f = %.f\n", a, b, result);
}


void subtracao(float a, float b){
  
    float result = 0;

    result = a - b;

    printf("\n%.f - %.f = %.f\n", a, b, result);
}


void multiplicacao(float a, float b){
  
    float result = 0;

    result = a * b;

    printf("\n%.f * %.f = %.f\n", a, b, result);
}


void divisao(float a, float b){
  
    float result = 0;

    result = a / b;

    printf("\n%.f / %.f = %.f\n", a, b, result);
}


void potencia(float a, float b){
  
    float result = 0;

    result = pow(a, b);

    printf("\n%.f^%.f = %.f\n", a, b, result);
}


void mod(float a, float b){
  
    int result = 0;
    int x = a;
    int y = b;

    result = x % y;

    printf("\n%d mod %d = %d\n", x, y, result);
}


void div(float a, float b){
  
    int result = 0;
    int x = a;
    int y = b;

    result = a / b;

    printf("\n%d div %d = %d\n", x, y, result);
}


void mmc(float num3, float num4){
  
    int resto = 0; 
    int a = num3; 
    int b = num4;

    do {
        resto = a % b;

        a = b;
        b = resto;

    } while(resto != 0);

    printf("\nO MMC de %.f e %.f = %d\n", num3, num4, (a * b) / a);
}


void mdc(float num3, float num4){
  
    int resto = 0;
    int a = num3;
    int b = num4;

    do {
        resto = a % b;

        a = b;
        b = resto;

    } while(resto != 0);

    printf("\nO MDC de %.f e %.f = %d\n", num3, num4, a);
}
