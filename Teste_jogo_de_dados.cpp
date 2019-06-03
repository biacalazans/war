#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <stdlib.h>

int main(){
	
	int PDA=4, SDA=4, TDA=6, PDB=3, SDB=5, TDB=3;
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
	printf("A: %d, %d, %d\n", MaxA, MA, MnA);
	
	//SDA
	if (SDA>PDA){
		if(SDA>TDA){MaxA=SDA;}
		if(SDA<TDA){MA=SDA;}
	}
	if (SDA<PDA){
		if(SDA>TDA){MA=SDA;}
		if(SDA<TDA){MnA=SDA;}
	}
	printf("A: %d, %d, %d\n", MaxA, MA, MnA);
	
	//TDA
	if (TDA>PDA){
		if(TDA>SDA){MaxA=TDA;}
		if(TDA<SDA){MA=TDA;}
	}
	if (TDA<PDA){
		if(TDA>SDA){MA=TDA;}
		if(TDA<SDA){MnA=TDA;}
	}
	printf("A: %d, %d, %d\n", MaxA, MA, MnA);
	
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
	printf("A: %d, %d, %d\n", MaxA, MA, MnA);

	//PDB
	if (PDB>SDB){
		if(PDB>TDB){MaxB=PDB;}
		if(PDB<TDB){MB=PDB;}
	}
	if (PDB<SDB){
		if(PDB>TDB){MB=PDB;}
		if(PDB<TDB){MnB=PDB;}
	}
	printf("B: %d, %d, %d\n", MaxB, MB, MnB);

	//SDB
	if (SDB>PDB){
		if(SDB>TDB){MaxB=SDB;}
		if(SDB<TDB){MB=SDB;}
	}
	if (SDB<PDB){
		if(SDB>TDB){MB=SDB;}
		if(SDB<TDB){MnB=SDB;}
	}
	printf("B: %d, %d, %d\n", MaxB, MB, MnB);

	//TDB
	if (TDB>PDB){
		if(TDB>SDB){MaxB=TDB;}
		if(TDB<SDB){MB=TDB;}
	}
	if (TDB<PDB){
		if(TDB>SDB){MB=TDB;}
		if(TDB<SDB){MnB=TDB;}
	}
	printf("B: %d, %d, %d\n", MaxB, MB, MnB);
	
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
	printf("B: %d, %d, %d\n", MaxB, MB, MnB);
	
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
		
	return 0;
}










