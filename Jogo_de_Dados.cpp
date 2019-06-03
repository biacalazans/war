#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <stdlib.h>

void jogo_de_dados(int PDA, int SDA, int TDA, int PDB, int SDB, int TDB){

	int MaxA, MnA, MA, MaxB, MnB, MB;

	MaxA=0;
	MnA=0;
	MA=0; 
	MaxB=0;
	MnB=0;
	MB=0; 

	//PDA
	if (PDA>SDA){
		if(PDA>TDA){MaxA=PDA;}
		if (PDA<TDA){MA=PDA;}
	}
	if (PDA<SDA){
		if (PDA>TDA){MA=PDA;}
		if(PDA<TDA){MnA=PDA;}
	}
	
	//SDA
	if (SDA>PDA){
		if(SDA>TDA){MaxA=SDA;}
		if(SDA<TDA){MA=SDA;}
	}
	if (SDA<PDA){
		if(SDA>TDA){MA=SDA;}
		if(SDA<TDA){MnA=SDA;}
	}
	
	//TDA
	if (TDA>PDA){
		if(TDA>SDA){MaxA=TDA;}
		if(TDA<SDA){MA=TDA;}
	}
	if (TDA<PDA){
		if(TDA>SDA){MA=TDA;}
		if(TDA<SDA){MnA=TDA;}
	}
	
	//Igualdades no Dado A
	if(PDA==SDA){
		if(PDA>TDA){
			MaxA=PDA;
			MA=SDA;
			MnA=TDA;
		}
		if(PDA<TDA){
			MaxA=TDA;
			MA=SDA;
			MnA=PDA;
		}
	}
	if(SDA==TDA){
		if(SDA>PDA){
			MaxA=TDA;
			MA=SDA;
			MnA=PDA;
		}
		if(SDA<PDA){
			MaxA=PDA;
			MA=SDA;
			MnA=TDA;
		}
	}
	if(TDA==PDA){
		if(TDA>SDA){
			MaxA=TDA;
			MA=PDA;
			MnA=SDA;
		}
		if(TDA<SDA){
			MaxA=SDA;
			MA=PDA;
			MnA=TDA;
		}
	}

	//PDB
	if (PDB>SDB){
		if(PDB>TDB){MaxB=PDB;}
		if(PDB<TDB){MB=PDB;}
	}
	if (PDB<SDB){
		if(PDB>TDB){MB=PDB;}
		if(PDB<TDB){MnB=PDB;}
	}

	//SDB
	if (SDB>PDB){
		if(SDB>TDB){MaxB=SDB;}
		if(SDB<TDB){MB=SDB;}
	}
	if (SDB<PDB){
		if(SDB>TDB){MB=SDB;}
		if(SDB<TDB){MnB=SDB;}
	}

	//TDB
	if (TDB>PDB){
		if(TDB>SDB){MaxB=TDB;}
		if(TDB<SDB){MB=TDB;}
	}
	if (TDB<PDB){
		if(TDB>SDB){MB=TDB;}
		if(TDB<SDB){MnB=TDB;}
	}
	
	//Igualdades no Dado B
	if(PDB==SDB){
		if(PDB>TDB){
			MaxB=PDB;
			MB=SDB;
			MnB=TDB;
		}
		if(PDB<TDB){
			MaxB=TDB;
			MB=SDB;
			MnB=PDB;
		}
	}
	if(SDB==TDB){
		if(SDB>PDB){
			MaxB=TDB;
			MB=SDB;
			MnB=PDB;
		}
		if(SDB<PDB){
			MaxB=PDB;
			MB=SDB;
			MnB=TDB;
		}
	}
	if(TDB==PDB){
		if(TDB>SDB){
			MaxB=TDB;
			MB=PDB;
			MnB=SDB;
		}
		if(TDB<SDB){
			MaxB=SDB;
			MB=PDB;
			MnB=TDB;
		}
	}
	
	//Ataque X Defesa

	// MaxA Vs MaxB
	if (MaxA>MaxB) {printf("%d VS %d: Ataque vence!\n", MaxA, MaxB);}
	if (MaxA<MaxB) {printf("%d VS %d: Defesa vence!\n", MaxA, MaxB);}
	if (MaxA==MaxB) {printf("%d VS %d: Defesa vence!\n", MaxA, MaxB);}
	
	// MA Vs MB
	if(MA != 0 && MB != 0){
	if (MA>MB) {printf("%d VS %d: Ataque vence!\n", MA, MB);}
	if (MA<MB) {printf("%d VS %d: Defesa vence!\n", MA, MB);}
	if (MA==MB) {printf("%d VS %d: Defesa vence!\n", MA, MB);}
	}
	
	// MnA Vs MnB
	if(MnA != 0 && MnB != 0){
	if (MnA>MnB) {printf("%d VS %d: Ataque vence!\n", MnA, MnB);}
	if (MnA<MnB) {printf("%d VS %d: Defesa vence!\n", MnA, MnB);}
	if (MnA==MnB) {printf("%d VS %d: Defesa vence!\n", MnA, MnB);}
	}

	
	return;
}

int main(){
	
	int PDA, SDA, TDA, PDB, SDB, TDB;
	
	scanf("%d %d %d %d %d %d", &PDA, &SDA, &TDA, &PDB, &SDB, &TDB);
	
	jogo_de_dados(PDA, SDA, TDA, PDB, SDB, TDB);
	
	return 0;
}
