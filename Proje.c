#include <stdio.h>
#include <stdlib.h>


//C BÝLGÝ YARIÞMASI
/*
1.Baþla
2.kullanýcý adý ve þifre var mý?
	1.evet ise 3.adýma git
	2.hayýr ise 4.adýma git
3.giriþ yap adým 5e git.
4.kayýt ol
5. kayýt oldun mu?
	1.evet ise adým 3 git
	2.hayýr ise adým 4e git.	
5.Yarýþma kurallarýný ekrana getir.Adým 7e git.
6.Yarýþma puan sistemlidir.Puan tablosu ekrana gelecektir.
  Yarýþma 10 sorudan oluþmaktadýr.
  3 yanlýþ hakkýnýz vardýr...
7.Yarýþmaya baþla.
8.SORU 1 cevap dðru mu?
	1.evet ise yeni soru
	2.hayýr ise hak=hak-1, 9.adýma git
9.hak<=0?
	1.Evet ise Yarýþma bitti.
	2.hayýr ise devam et yeni soru...

*/

void hosgeldiniz()
{
	
	char isim[20];
	printf("Isminizi giriniz :\n");
	scanf("%s",isim);
	printf("Merhaba %s.Basarilarr... \n\n\n", isim);
	

	FILE *dosya;
	int c=0;
	dosya=fopen("yarýsmakurallarý.txt","r");

	if(dosya==NULL)

		printf("bu dosya yok\n");

	else

		{

			do

			{
				c=getc(dosya);

				putchar(c);
			}

			while(c!=EOF);

		}

	fclose(dosya);	
	
	printf("{...Puan tablosu...}\n");
	int puan_tablosu[2][10];
		int i, j;
		for( i =0;i<10;i++ )
		 {
			for( j = 0; j < 1; j++ ) 
			{
				printf( "%d. sorunun puani ", ( i+1 ) );
				printf( ":10  \n", ( j + 1 ) );	
			}
		}
 		printf( "\n\n\n" );
 		

}

int secimfonk()
{
    int secim;
    printf("Lutfen asagidaki seceneklerden birini seciniz...\n");
    printf("1-Giris Yap\n");
    printf("2-Kayit Ol\n");
    scanf("%d",&secim);
    return secim;
}

int girisYapfonks(char isim[20],char sifre[20])
{
    char alinanisim[20];
    char alinansifre[20];

    int kontrol=0;
    while(kontrol==0)
    {
    printf("Lutfen Adinizi Giriniz : \n");
    scanf("%s",&alinanisim);
    printf("Lutfen Sifrenizi Giriniz : \n");
    scanf("%s",&alinansifre);
    if(strcmp(isim,alinanisim)==0 &&strcmp(sifre,alinansifre)==0)
    	{
        printf("Yarismaya Hosgeldiniz\n\n");
        kontrol=1;
    	}
    else
    	{
        printf("Hatali Giris!\n\n");
   		}
    }
}

int kayitOlfonks()
{
    char isim[20];
    char sifre[20];
    printf("Lutfen Bir Isim Giriniz : \n");
    scanf("%s",&isim);
    printf("Lutfen Bir Sifre Giriniz : \n");
    scanf("%s",&sifre);
    printf("Kaydiniz Basarili Bir Sekilde Gerceklestirilmistir...\n");
    printf("Giris Ekranina Yonlendiriliyorsunuz...\n");
    girisYapfonks(isim,sifre);
}



int bilgiYarismasi(int hak,int puan)
{
    char cevap[1];
   
   	
    
    printf("Yarisma Basladi...\n");
    printf("Puaniniz : %d\n",puan);
    printf("hakkiniz: %d\n",hak);
    if(hak>0)
    {
    	printf("{Soru-1}-C'de degerlerin ciktisini almak veya metni yazdirmak icin kullanilan fonksiyon nedir?\n");
   		printf("a-scanf b-printf  c-if  d-else  e-while\n");
    	scanf("%s",&cevap);
    if(strcmp(cevap,"b")==0)
    	{
    		
		printf("Dogru Cevap...\n");
        puan+=10;
        printf("Puaniniz : %d \n",puan);
        
    	}
    else
    	{
    	printf("Yanlis Cevap...\n");
    	printf("Puaniniz : %d \n",puan);
    	hak--;
    	printf("hakkiniz: %d\n",hak);
    	}
    }
    if(hak>0)
    {
    	printf("{Soru-2}-Klavyeden bir degeri okumak icin kullanilan fonksiyon nedir?.\n");
    	printf("a-scanf  b-char  c-printf  d-if  e-float\n");
    	scanf("%s",&cevap);
    if(strcmp(cevap,"a")==0)
    	{

        printf("Dogru Cevap...\n");
        puan+=10;
        printf("Puaniniz : %d \n",puan);
    	}
    else
    	{
    	printf("Yanlis Cevap...\n");
    	printf("Puaniniz : %d \n",puan);
        hak--;
        printf("hakkiniz: %d\n",hak);
    	}
    }
    
     if(hak>0)
    {
    	printf("{Soru-3}-Aciklama satiri olusturmak icin hangi sembol kullanilir?\n");
    	printf("a-= b-[] c-^^  d-&  e-/**/\n");
    	scanf("%s",&cevap);
    if(strcmp(cevap,"e")==0)
    	{

        printf("Dogru Cevap...\n");
        puan+=10;
        printf("Puaniniz : %d \n",puan);
        
    	}
    else
    	{
    	printf("Yanlis Cevap...\n");
    	printf("Puaniniz : %d \n",puan);
        hak--;
        printf("hakkiniz: %d\n",hak);
   		}
    }
    
     if(hak>0)
    {
    	printf("{Soru-4} C programinda yazilmasi zorunlu olan fonksiyon nedir?\n");
    	printf("a-scanf  b-char  c-main  d-void e-int\n");
    	scanf("%s",&cevap);
    if(strcmp(cevap,"c")==0)
    	{

        printf("Dogru Cevap...\n");
        puan+=10;
        printf("Puaniniz : %d \n",puan);
        
    	}
    else
    	{
    	printf("Yanlis Cevap...\n");
    	printf("Puaniniz : %d \n",puan);
        hak--;
        printf("hakkiniz: %d\n",hak);
    	}
    }
    
     if(hak>0)
    {
    	printf("{Soru-5}Tamsayilari yazdirmak icin genellikle hangi bicim belirleyicisi kullanilir?\n");
    	printf("a-)d b-)f c-)s  d-)c  e-)k \n");
    	scanf("%s",&cevap);
    if(strcmp(cevap,"a")==0)
    	{

        printf("Dogru Cevap...\n");
        puan+=10;
        printf("Puaniniz : %d \n",puan);
        
    	}
    else
    	{
    	printf("Yanlis Cevap...\n");
    	printf("Puaniniz : %d \n",puan);
        hak--;
        printf("hakkiniz: %d\n",hak);
    	}
    }
    
    
     if(hak>0)
    	{
    	printf("{Soru-6}Dosya acma islemini gerceklestiren fonksiyon nedir?\n");
    	printf("a-fscanf  b-fprintf c-fclose  d-fopen e-fwrite\n");
    	scanf("%s",&cevap);
    if(strcmp(cevap,"d")==0)
   		{

        printf("Dogru Cevap...\n");
        puan+=10;
        printf("Puaniniz : %d \n",puan);
        
    	}
    else
    	{
    	printf("Yanlis Cevap...\n");
    	printf("Puaniniz : %d \n",puan);
        hak--;
        printf("hakkiniz: %d\n",hak);
    	}
    }
    
    
     if(hak>0)
    {
    	printf("{Soru-7}Asagýdakilere ne diyoruz?\n int Numaralarim[] = {25, 50, 75, 100};\n");
    	printf("a-fonksiyon b-dizi c-degisken d-hicbiri\n");
    	scanf("%s",&cevap);
    if(strcmp(cevap,"b")==0)
    	{

        printf("Dogru Cevap...\n");
        puan+=10;
        printf("Puaniniz : %d \n",puan);
        
    	}
    else
    	{
    	printf("Yanlis Cevap...\n");
    	printf("Puaniniz : %d \n",puan);
        hak--;
        printf("hakkiniz: %d\n",hak);
    	}
    }
    
     if(hak>0)
    {
    	printf("{Soru-8}C'de bir for dongusu yazmaya nasil baslarsiniz?\n");
    	printf("a-for(x,y)  b-for(x<y)  c-for(int i=0;i<5;i++) d-for(int i=0;while<5;i++)  e-for(int i=0;switch<5;i++)\n");
    	scanf("%s",&cevap);
    if(strcmp(cevap,"c")==0)
    	{

        printf("Dogru Cevap...\n");
        puan+=10;
        printf("Puaniniz : %d \n",puan);
        
    	}
    else
    	{
    	printf("Yanlis Cevap...\n");
    	printf("Puaniniz : %d \n",puan);
        hak--;
        printf("hakkiniz: %d\n",hak);
    	}
    }
    
     if(hak>0)
    {
    	printf("{Soru-9}-C'de bir while dongusu yazmaya nasil baslarsiniz?\n");
    	printf("a-while (x < y) b-while x<y c-if x>y while  d-while x>=y \n");
    	scanf("%s",&cevap);
    if(strcmp(cevap,"a")==0)
    	{

        printf("Dogru Cevap...\n");
        puan+=10;
        printf("Puaniniz : %d \n",puan);
        
    	}
    else
    	{
    	printf("Yanlis Cevap...\n");
    	printf("Puaniniz : %d \n",puan);
        hak--;
        printf("hakkiniz: %d\n",hak);
    	}
    }
    
    
     if(hak>0)
    {
    	printf("{Soru-10}Bir donguyu durdurmak icin hangi ifade kullanilir?\n");
    	printf("a-break  b-void c-stop  d-exit  e-continue\n");
    	scanf("%s",&cevap);
    if(strcmp(cevap,"a")==0)
    	{

        printf("Dogru Cevap...\n");
        puan+=10;
        printf("Puaniniz : %d \n",puan);
       
    	}
    else
    	{
    	printf("Yanlis Cevap...\n");
    	printf("Puaniniz : %d \n",puan);
        hak--;
        printf("hakkiniz: %d\n",hak);
    	}
    }
    printf("\n\n\n");
    printf("Skorunuz :%d puan",puan);
    
    return puan;
}

	


int main()
{
    char isim[20]="seyma";
    char sifre[20]="2022";

    hosgeldiniz();
    int secim=secimfonk();

        if(secim==1)
    {
        girisYapfonks(isim,sifre);

    }
    else if(secim==2)
    {
        kayitOlfonks();

    }
    	
	
	
    int puan=0;
    int hak=3;
	bilgiYarismasi(hak,puan);

    return 0;
}
