#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <stdlib.h>

int dados(){

	int result;
	srand(time(NULL));

	result=(rand()%6)+1;

  return result;
}

int main(){
	
	int x;
	
	x=dados();
	printf("%d",x);
	
	return 0;
}
