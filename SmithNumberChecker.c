#include <stdio.h>

void smith(int sayi);

int main(void){
	
	smith(121);
	
	return 0;
}

void smith(int sayi){
	
	int asallik, sayac, carpan, sumc=0, sumsayi=0, tempc, temps=sayi;
	
	for(carpan=2;carpan<sayi;carpan++){
		
		asallik=1;		//Asall�k s�f�rlay�c�
		
		if(carpan!=2){	//�arpan Asal M�?
			for(sayac=2;sayac<carpan;sayac++){
				if(carpan%sayac==0){
					asallik=0;
					break;
				}
			}
		}
		
		if(carpan==2 || asallik==1){	//Asal de�ilse 
				while(temps%carpan==0){		//�arpanl�k korundu�u s�rece tekrarla
					tempc=carpan;
					while(tempc>0){			//�arpan�n rakamlar�n� topla.
						sumc+=tempc%10;
						tempc/=10;
					}
					temps/=carpan;
				}
			
		}
	}
	
	
	while(sayi>0){			//Say�n�n rakamlar�n� topla
		sumsayi+=sayi%10;
		sayi=sayi/10;
	}
	
	if(sumc==sumsayi){		//E�itli�i kar��la�t�r
		printf("Smith Sayisidir.");
	}
	else{
		printf("Smith Sayisi Degildir.");
	}
}
