#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <locale.h>

// Mucit Yazýlým - Sadýk ÞAHÝN
#define BOY 10

char ad[BOY][20]; 
char soyad[BOY][20]; 
char adres[BOY][20]; 
char meslek[BOY][20]; 

int cnt=0; 


int menu(); 
void kisiEkle(); 
void isimAra(); 
void soyadAra(); 
void adresAra(); 
void yazdir(int , int ); 
void listele(); 
void kayitYap( char *  ) ;  


int main() 
{
	setlocale(LC_ALL, "Turkish") ; 
	int secim= menu(); 
	while( secim != 0 ) 
	{
		switch(secim )
		{
			case 1: kisiEkle(); break; 
			case 2: isimAra (); break; 
			case 3: soyadAra (); break; 
			case 4: adresAra (); break; 
			case 5: listele (); break; 			
		}
		secim = menu(); 
	} 	
	
	return 0; 
}

int menu()
{
	int secim; 
	printf("\n\tKÝÞÝ KAYIT UYGULAMASI  \n") ; 
	printf("\n\t[1]. Kisi kaydet \n") ; 
	printf("\n\t[2]. Ýsimden ara \n") ; 
	printf("\n\t[3]. Soyisimden ara \n") ; 
	printf("\n\t[4]. Adresten ara \n") ; 
	printf("\n\t[5]. Kayitlari listele \n") ; 
	printf("\n\t[0]. ÇIKIÞ \n") ; 
	printf("\n\tSeciminiz [0-5]  : ") ; 
	
	secim= getche() -'0';
	system("cls") ;  
	printf("\n") ; 
	return secim; 
		
	return 0; 
}
void kisiEkle()
{
	printf("Ad        : ") ; kayitYap(ad[cnt]); 
	printf("Soyad     : ") ; kayitYap(soyad[cnt]); 
	printf("Adres     : ") ; kayitYap(adres[cnt]); 
	printf("Meslek    : ") ; kayitYap(meslek[cnt] ); 
	printf("\nKayit yapildi \n") ; 
	cnt++; 
	
}
void isimAra()
{
	char aranan[20]; 
	printf("Aradiginiz isim : "); kayitYap(aranan ); 
	int i=0, j=0; 
	while( i<cnt ) 
	{
		if( !strcmp( aranan, ad[i] ) )
		{
			yazdir(i,j); 
			j++; 
		}
		i++; 
	 } 
	 if( j==0)
	 printf("%s isimli kayit yok !\n", aranan ); 
}
void soyadAra()
{
	char aranan[20]; 
	printf("Aradiginiz soyad  : "); kayitYap(aranan ); 
	int i=0, j=0; 
	while( i<cnt ) 
	{
		if( !strcmp( aranan, soyad[i] ) )
		{
			yazdir(i,j); 
			j++; 
		}
		i++; 
	 } 
	 if( j==0)
	 printf("%s soyisimli kayit yok !\n", aranan ); 
	
}
void adresAra()
{
	char aranan[20]; 
	printf("Aradiginiz sehir  : "); kayitYap(aranan ); 
	int i=0, j=0; 
	while( i<cnt ) 
	{
		if( !strcmp( aranan, adres [i] ) )
		{
			yazdir(i,j); 
			j++; 
		}
		i++; 
	 } 
	 if( j==0)
	 printf("%s þehir kaydý yok !\n", aranan ); 
	
}
void yazdir(int i, int j )
{
	if( j==0 ) 
	printf("%-20s%-20s%-20s%-20s\n","AD","SOYAD", "ADRES", "MESLEK"  ); 
	printf("%-20s%-20s%-20s%-20s\n", ad[i], soyad[i], adres[i], meslek[i]   );  	
}
void listele(  )
{
	int i=0; 
	printf("%-20s%-20s%-20s%-20s\n","AD","SOYAD", "ADRES", "MESLEK"  ); 		
	while( i< cnt  ) 
	{
		printf("%-20s%-20s%-20s%-20s\n", ad[i], soyad[i], adres[i], meslek[i]   );  
		i++; 
	}

	if( i==0)
	{
	system("cls") ; 
	printf("\nKayit yok ! \n") ; 	
	} 	
}
void kayitYap( char * ptr   ) 
{
	fgets(ptr, 20, stdin); 
	int n= strlen(ptr); 
	ptr[n-1]='\0';	
 } 


