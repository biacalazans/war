#include <stdio.h>

int main()
{
	int valor;
	
	printf("1-Atacar.\n");
	printf("2-Realocar exercito.\n");
	printf("3-Finalizar turno.\n");
	scanf("%d", &valor);
	switch ( valor )
  {
    case 1 :
    	printf("Ataque.");
    break;
    
    case 2 :
    	printf("Realocar.");
    break;
    
    case 3 :
    	printf("Fim de turno.");
    break;
    
    default :
    printf ("Valor invalido!\n");
  }
 
 return 0; 
}
