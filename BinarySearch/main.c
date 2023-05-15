#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int dizi[],int n){
	int i, j;
	int gecici;
	
	for(i=0;i<n;i++){
		for(j=1;j<n-i;j++){
			if(dizi[j-1]>dizi[j]){
				gecici = dizi[j];
				dizi[j] = dizi[j-1];
				dizi[j-1] = gecici;
			}
		}
	}
	
}

int binarySearch(int dizi[], int ilk, int son, int hedef){
	if(ilk <= son){
		int orta = ilk + (son-ilk)/2;
		
		if(dizi[orta] == hedef){
			return orta;
		}
		else if(dizi[orta] < hedef){
			return binarySearch(dizi, orta+1, son, hedef);
		}
		else{
			return binarySearch(dizi, ilk, orta-1, hedef);
		}
		
	}
	return -1;	
}



int main(int argc, char *argv[]) {
	// Ornek bir dizi tanimlanir ve eleman sayisi hesaplanir.
	int dizi[] = {4, 8, 3, 84, 47, 76, 9, 24, 68};
	int n = sizeof(dizi) / sizeof(dizi[0]);
	int hedef;
	
	//Kullanicidan ornek dizide aramak istedigi eleman istenir.
	printf("Dizide aramak istediginiz elemani giriniz:");
	scanf("%d", &hedef);
	
	//Dizi siralanir.
	bubbleSort(dizi, n);
	
	//Binary Search metoduyla arama yapilir.
	int sonuc = binarySearch(dizi, 0, n-1, hedef);
	
	//Fonksiyon ciktisina gore kullanici bilgilendirilir.
	if(sonuc == -1){
		printf("Aradiginiz eleman dizide bulunmamaktadir.");
	}
	else{
		printf("Aradiginiz eleman siralanmis dizinin %d. elemanidir.", sonuc+1);
	}
	return 0;
}