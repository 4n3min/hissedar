#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int maxi,mini,hissedar,rnd,hisse=100;
        //ilk etapta kullanıcıdan bilgileri alınır.
        srand(time(NULL));
        printf("maksimum hisse oranini girin:\n");
        scanf("%d",&maxi);
        printf("minimum hisse oranini girin:\n");
        scanf("%d",&mini);
        printf("hissedar sayisini girin:\n");
        scanf("%d",&hissedar);

        //Dongude kontrol edilir, degerler matematiksel olarak tuttugu surece
            while(maxi*hissedar<hisse||mini*hissedar>hisse){
                printf("hatali giriş yaptınız, girilen degerler matematiksel olarak\n");
                printf("hisse sayisini saglamıyor...\n");
                printf("------TEKRAR GIRIS YAPIN-------\n");
                printf("maksimum hisse oranini girin:\n");
                scanf("%d",&maxi);
                printf("minimum hisse oranini girin:\n");
                scanf("%d",&mini);
                printf("hissedar sayisini girin:\n");
                scanf("%d",&hissedar);
    }
    int i=0;
        //son hissedar kalıncaya kadar rastgele hisse oranı uretilir

            while(hissedar>=2){
            rnd=random()%(maxi-mini+1)+mini;
            hisse-=rnd;
            hissedar--;

                if(maxi*hissedar<hisse){
                    hisse+=rnd;
                    hissedar++;
                }
                else if(mini*hissedar>hisse){
                    hisse+=rnd;
                    hissedar++;
                }
                else{
                    i++;
                    printf("%d.hissedarın orani:%d.\n",i,rnd);
                    printf("kalan hisse:%d\n",hisse);
                }


        }
                   //kalan hisse son hissedara atanır ve program sonlanır
                    i++;
                    printf("%d.(son)hissedarın orani:%d.\n",i,hisse);
                    printf("son durunda kalan hisse :%d\n",hisse-hisse);
                    printf("\n\n\n");



return 0;
}
