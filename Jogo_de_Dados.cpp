#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <stdlib.h>

 int dados(){
    
	int result;

	result=(rand()%6)+1;

  return result;
}

int main(){
	
	int MaX, MnX, MX, MaY, MnY, MY;
	int PDX, SDX, TDX, PDY, SDY, TDY;
	int uma_tropaX, uma_tropaY, TX, TY;
	dados();
	srand(time(NULL));
	
	PDX = 0;
	SDX = 0;
	TDX = 0;
	PDY = 0;
	SDY = 0;
	TDY = 0;
	MaX = 0;
	MnX = 0;
	MX = 0; 
	MaY = 0;
	MnY = 0;
	MY = 0; 
	
	scanf("%d", &TX);
	scanf("%d", &TY);

//if ((territorios[at].tropas[2] == 1) && (territorios[at].tropas[1] == 0) && (territorios[at].tropas[0] == 0 )){
if(TX==1){
	//printf("Voce so pode atacar com mais de uma tropa no pais!");
	uma_tropaX = 10;
	uma_tropaY = 10;
}

//if((territorios[at].tropas[2] == 2) && (territorios[at].tropas[1] == 0) && (territorios[at].tropas[0] == 0 )){
if(TX==2){
	PDX = dados();
	SDX = 0;
	TDX = 0;
}

//if ((territorios[at].tropas[2] == 3) && (territorios[at].tropas[1] == 0) && (territorios[at].tropas[0] == 0 )) {
if(TX==3){
	PDX = dados();
	SDX = dados();
	TDX = 0;
	
} if(TX>=4){
 	PDX = dados ();
	SDX = dados ();
	TDX = dados ();
}

//if ((territorios[de].tropas[2] == 1) && (territorios[de].tropas[1] == 0) && (territorios[de].tropas[0] == 0 )){
if(TY==1){
	PDY= dados();
	SDX = 0;
	TDX = 0; 
} 

//if((territorios[de].tropas[2] == 2) && (territorios[de].tropas[1] == 0) && (territorios[de].tropas[0] == 0 )){
if(TY==2){
	PDY = dados();
	SDY = dados();
	TDX = 0;
}

if(TY>=3){
	PDY = dados();
	SDY = dados();
	TDY = dados();
	
} 

	//PDX
	if (PDX>SDX){
		if(PDX>TDX){MaX=PDX;}
		if (PDX<TDX){MX=PDX;}
	}
	if (PDX<SDX){
		if (PDX>TDX){MX=PDX;}
		if(PDX<TDX){MnX=PDX;}
	}
	
	//SDX
	if (SDX>PDX){
		if(SDX>TDX){MaX=SDX;}
		if(SDX<TDX){MX=SDX;}
	}
	if (SDX<PDX){
		if(SDX>TDX){MX=SDX;}
		if(SDX<TDX){MnX=SDX;}
	}
	
	//TDX
	if (TDX>PDX){
		if(TDX>SDX){MaX=TDX;}
		if(TDX<SDX){MX=TDX;}
	}
	if (TDX<PDX){
		if(TDX>SDX){MX=TDX;}
		if(TDX<SDX){MnX=TDX;}
	}
	
	//Igualdades no Dado A
	if(PDX==SDX){
		if(PDX>TDX){
			MaX=PDX;
			MX=SDX;
			MnX=TDX;
		}
		if(PDX<TDX){
			MaX=TDX;
			MX=SDX;
			MnX=PDX;
		}
	}
	if(SDX==TDX){
		if(SDX>PDX){
			MaX=TDX;
			MX=SDX;
			MnX=PDX;
		}
		if(SDX<PDX){
			MaX=PDX;
			MX=SDX;
			MnX=TDX;
		}
	}
	if(TDX==PDX){
		if(TDX>SDX){
			MaX=TDX;
			MX=PDX;
			MnX=SDX;
		}
		if(TDX<SDX){
			MaX=SDX;
			MX=PDX;
			MnX=TDX;
		}
	}

	//PDY
	if (PDY>SDY){
		if(PDY>TDY){MaY=PDY;}
		if(PDY<TDY){MY=PDY;}
	}
	if (PDY<SDY){
		if(PDY>TDY){MY=PDY;}
		if(PDY<TDY){MnY=PDY;}
	}

	//SDY
	if (SDY>PDY){
		if(SDY>TDY){MaY=SDY;}
		if(SDY<TDY){MY=SDY;}
	}
	if (SDY<PDY){
		if(SDY>TDY){MY=SDY;}
		if(SDY<TDY){MnY=SDY;}
	}

	//TDY
	if (TDY>PDY){
		if(TDY>SDY){MaY=TDY;}
		if(TDY<SDY){MY=TDY;}
	}
	if (TDY<PDY){
		if(TDY>SDY){MY=TDY;}
		if(TDY<SDY){MnY=TDY;}
	}
	
	//Igualdades no Dado B
	if(PDY==SDY){
		if(PDY>TDY){
			MaY=PDY;
			MY=SDY;
			MnY=TDY;
		}
		if(PDY<TDY){
			MaY=TDY;
			MY=SDY;
			MnY=PDY;
		}
	}
	if(SDY==TDY){
		if(SDY>PDY){
			MaY=TDY;
			MY=SDY;
			MnY=PDY;
		}
		if(SDY<PDY){
			MaY=PDY;
			MY=SDY;
			MnY=TDY;
		}
	}
	if(TDY==PDY){
		if(TDY>SDY){
			MaY=TDY;
			MY=PDY;
			MnY=SDY;
		}
		if(TDY<SDY){
			MaY=SDY;
			MY=PDY;
			MnY=TDY;
		}
	}
	
	//Ataque X Defesa
	
	if (uma_tropaX == 10 && uma_tropaY == 10){
		printf("Voce so pode atacar com mais de uma tropa no pais!\nDigite qualquer tecla para continuar...\n");
		getch();
		system("cls");
		
	} 
	

	// MaX Vs MaY
	
	if(MaX != 0 && MaY != 0){
		if (MaX>MaY) { 
			printf("%d VS %d: Ataque vence o primeiro dado!\n", MaX, MaY);
			
			/*a = territorios[de].tropas[0] * 100;
			b = territorios[de].tropas[1]  * 10;
			c= territorios[de].tropas[2] + a +b  -1;
			
			if (c<0){
				c = 0;
			}
			
			territorios[de].tropas[0] = c/100;
			territorios[de].tropas[1] = (c - territorios[de].tropas[0] * 100) / 10;
			territorios[de].tropas[2] = (c - territorios[de].tropas[0] * 100 ) - territorios[de].tropas[1] * 10;
		  	
		  	*(territorios[de].coord1) = (territorios[de].tropas[0] + '0');
		  	*(territorios[de].coord2) = (territorios[de].tropas[1] + '0');
		  	*(territorios[de].coord3) = (territorios[de].tropas[2] + '0');*/
	  		
		}
		
		if ( (MaX<MaY) || (MaX==MaY) ) {
			printf("%d VS %d: Defesa vence o primeiro dado!\n", MaX, MaY);	
		
			/*a = territorios[at].tropas[0] * 100;
			b = territorios[at].tropas[1]  * 10;
			c = territorios[at].tropas[2] + a + b -1;
			
			if (c<0){
				c = 0;
			}
			
			territorios[at].tropas[0] = c/100;
			territorios[at].tropas[1] = (c - territorios[at].tropas[0] * 100) / 10;
			territorios[at].tropas[2] = (c - territorios[at].tropas[0] * 100 ) - territorios[at].tropas[1] * 10;
		  	
		  	*(territorios[at].coord1) = (territorios[at].tropas[0] + '0');
		  	*(territorios[at].coord2) = (territorios[at].tropas[1] + '0');
		  	*(territorios[at].coord3) = (territorios[at].tropas[2] + '0');*/
	  	
		 }
	}
	
	// MX Vs MY
	
	if(MX != 0 && MY != 0){
		if (MX>MY) {
			printf("%d VS %d: Ataque vence o segundo dado!\n", MX, MY);
			
			/*a = territorios[de].tropas[0] * 100;
			b = territorios[de].tropas[1]  * 10;
			c = territorios[de].tropas[2] + a + b -1;
			
			if (c<0){
				c = 0;
			}
			
			territorios[de].tropas[0] = c/100;
			territorios[de].tropas[1] = (c - territorios[de].tropas[0] * 100) / 10;
			territorios[de].tropas[2] = (c - territorios[de].tropas[0] * 100 ) - territorios[de].tropas[1] * 10;
		  	
		  	*(territorios[de].coord1) = (territorios[de].tropas[0] + '0');
		  	*(territorios[de].coord2) = (territorios[de].tropas[1] + '0');
		  	*(territorios[de].coord3) = (territorios[de].tropas[2] + '0');*/
	
		}
		if ((MX<MY) || (MX==MY) ){
			printf("%d VS %d: Defesa vence o segundo dado!\n", MX, MY);	
			
			/*a = territorios[at].tropas[0] * 100;
			b = territorios[at].tropas[1]  * 10;
			c = territorios[at].tropas[2] + a + b -1;
			
			if (c<0){
				c = 0;
			}
			
			territorios[at].tropas[0] = c/100;
			territorios[at].tropas[1] = (c - territorios[at].tropas[0] * 100) / 10;
			territorios[at].tropas[2] = (c - territorios[at].tropas[0] * 100 ) - territorios[at].tropas[1] * 10;
		  	
		  	*(territorios[at].coord1) = (territorios[at].tropas[0] + '0');
		  	*(territorios[at].coord2) = (territorios[at].tropas[1] + '0');
		  	*(territorios[at].coord3) = (territorios[at].tropas[2] + '0');*/
	  	
		}
	}
	
	// MnX Vs MnY
	
	if(MnX != 0 && MnY != 0){
		if (MnX>MnY) {
			printf("%d VS %d: Ataque vence o terceiro dado!\n", MnX, MnY);
			
			/*a = territorios[de].tropas[0] * 100;
			b = territorios[de].tropas[1]  * 10;
			c = territorios[de].tropas[2] + a + b -1;
			
				if (c<0){
				c = 0;
			}
			
			territorios[de].tropas[0] = c/100;
			territorios[de].tropas[1] = (c - territorios[de].tropas[0] * 100) / 10;
			territorios[de].tropas[2] = (c - territorios[de].tropas[0] * 100 ) - territorios[de].tropas[1] * 10;
		  	
		  	*(territorios[de].coord1) = (territorios[de].tropas[0] + '0');
		  	*(territorios[de].coord2) = (territorios[de].tropas[1] + '0');
		  	*(territorios[de].coord3) = (territorios[de].tropas[2] + '0');*/
		
		}
		if ((MnX<MnY) || (MnX==MnY)) {
			printf("%d VS %d: Defesa vence o terceiro dado!\n", MnX, MnY);	
			
			/*a = territorios[at].tropas[0] * 100;
			b = territorios[at].tropas[1]  * 10;
			c = territorios[at].tropas[2] + a + b -1;
			
				if (c<0){
				c = 0;
			}
			
			territorios[at].tropas[0] = c/100;
			territorios[at].tropas[1] = (c - territorios[at].tropas[0] * 100) / 10;
			territorios[at].tropas[2] = (c - territorios[at].tropas[0] * 100 ) - territorios[at].tropas[1] * 10;
		  	
		  	*(territorios[at].coord1) = (territorios[at].tropas[0] + '0');
		  	*(territorios[at].coord2) = (territorios[at].tropas[1] + '0');
		  	*(territorios[at].coord3) = (territorios[at].tropas[2] + '0');*/
	  	
		} 
	}

	
	return 0;
}
