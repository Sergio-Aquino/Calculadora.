#include <stdio.h>
#include <math.h>

int mmc(int num5, int num6){

    int resto = 0; 
    int a = 0; 
    int b = 0;

    a = num5;
    b = num6;

    do{
        resto = a % b;

        a = b;
        b = resto;

    }while(resto != 0);

    return(num5 * num6) / a;
}


int mdc(int num5, int num6) {

    int resto = 0;

    do{
        resto = num5 % num6;

        num5 = num6;
        num6 = resto;

    }while(resto != 0);

    return num5;
}

int main(){
 
 	int opc = 0;
 	float num1 = 0;
 	float num2 = 0;
  int num3 = 0;
  int num4 = 0;
 	float res = 0;
 	
 	
 	do{
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
        
      }else if(opc > 9 || opc < 0){
          printf("\nOpção inválida.\n");
        
      }else{ 
        printf("\nInforme um número: ");
        scanf("%f", &num1);

        printf("\nAgora, informe outro número: ");
        scanf("%f", &num2);
        
 		    switch(opc){
          case 1:
 				    res = num1 + num2;
 				    break;
 			
 			    case 2:
            res = num1 - num2;
            break;
 			
 			    case 3:
            res = num1 * num2;
            break; 
 			
 			    case 4:
            res = num1 / num2;
            break; 
 			
 			    case 5:
            res = pow(num1, num2);
            break; 
 			
 			    case 6:
            num3 = num1;
            num4 = num2;
          
            res = num3 % num4;
            break;
 			
 			    case 7:
            num3 = num1;
            num4 = num2;
          
            res = num3 / num4;
            break;
 			
 			    case 8:
            res = mmc(num1, num2);
            break;
 			
 			    case 9:
            res = mdc(num1, num2);
            break;
        }
        
        printf("\nO resultado é %.2f\n", res);
      }
    
  }while(opc != 0);

  printf("Programa encerrado"); 	
  
  return 0;
}