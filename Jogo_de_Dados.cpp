#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <stdlib.h>

void jogo_de_dados(int PDX, int SDX, int TDX, int PDY, int SDY, int TDY){

	int MaX, MnX, MX, MaY, MnY, MY;

	MaX=0;
	MnX=0;
	MX=0; 
	MaY=0;
	MnY=0;
	MY=0; 

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

	// MaX Vs MaY
	if (MaX>MaY) {printf("%d VS %d: Ataque vence!\n", MaX, MaY);}
	if (MaX<MaY) {printf("%d VS %d: Defesa vence!\n", MaX, MaY);}
	if (MaX==MaY) {printf("%d VS %d: Defesa vence!\n", MaX, MaY);}
	
	// MX Vs MY
	if(MX != 0 && MY != 0){
	if (MX>MY) {printf("%d VS %d: Ataque vence!\n", MX, MY);}
	if (MX<MY) {printf("%d VS %d: Defesa vence!\n", MX, MY);}
	if (MX==MY) {printf("%d VS %d: Defesa vence!\n", MX, MY);}
	}
	
	// MnX Vs MnY
	if(MnX != 0 && MnY != 0){
	if (MnX>MnY) {printf("%d VS %d: Ataque vence!\n", MnX, MnY);}
	if (MnX<MnY) {printf("%d VS %d: Defesa vence!\n", MnX, MnY);}
	if (MnX==MnY) {printf("%d VS %d: Defesa vence!\n", MnX, MnY);}
	}

	
	return;
}

int main(){
	
	int PDX, SDX, TDX, PDY, SDY, TDY;
	
	scanf("%d %d %d %d %d %d", &PDX, &SDX, &TDX, &PDY, &SDY, &TDY);
	
	jogo_de_dados(PDX, SDX, TDX, PDY, SDY, TDY);
	
	return 0;
}
