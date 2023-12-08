#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	printf("Tas Kagit Makas oyununa hos geldiniz!! ");
	
	srand(time(NULL));
	int i=0;
	int kullaniciskor=0,bilgisayarskor=0,tahmin;
	
	while(i < 10) {
		
		printf("Lutfen tahmininizi giriniz (1.Tas 2.Kagit 3.Makas): \n");
		scanf("%d",&tahmin);
		
		int bilgisayartahmini= (rand()%3)+1;
		
		if(tahmin == 1) {
			 if(bilgisayartahmini == 3) {
				kullaniciskor++;
				printf("Tebrikler!! \n"); 
			}
			else if(bilgisayartahmini == 1){
				bilgisayarskor++;
				printf("Bilgisayar kazandi. \n");
			}
			else if(bilgisayartahmini == 2){
				printf("Berabere! \n");
			}
		}
		else if(tahmin == 2){
			if(bilgisayartahmini == 1) {	
			    bilgisayarskor++;
				printf("Bilgisayar kazandi. \n"); 
			}
			else if(bilgisayartahmini == 3){
				kullaniciskor++;
				printf("Kazandiniz. \n");
			}
			else if(bilgisayartahmini == 2){
				printf("Berabere! \n"); }
		}
		else if(tahmin == 3){
			if(bilgisayartahmini == 2) 	{
			    bilgisayarskor++;
				printf("Bilgisayar kazandi. \n"); 
			}
			else if(bilgisayartahmini == 1){
				kullaniciskor++;
				printf("Kazandiniz. \n");
			}
			else if(bilgisayartahmini == 3){
				printf("Berabere! \n"); }
		}
		else {
			printf("Tanimli olmayan bir tahmin girisi yaptiniz.");
		}
		
		i++;
	}
	
	printf("Kullanici %d - %d Bilgisayar",kullaniciskor,bilgisayarskor);

 return 0;
  
}
