#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//Bu oyunun kodlarýnda derste görülmeyip kullanýlan iki fonksiyon bulunmaktadýr.Bunlardan biri while(getchar()) olup tampon temizlemesi için kullanýlmýþtýr,diðer bir fonksiyon olan exit(0) fonksiyonu ise oyundan çýkmak veya oyunu bitirmek için kullanýlmýþtýr.

//Burada oyuncunun temel nitelikleri ve becerileri yer alýyor.
char isim[50];
char calgi[50];
int para = 10;
int seviye = 1;
int	tecrube = 0;
int	can = 100;
int	tokluk = 100;//temel nitelik.
int su_seviyesi = 100;//temel nitelik.
int	uyku = 100;//temel nitelik.
int mutluluk = 100;//temel nitelik.
int yorgunluk = 100;//temel nitelik.
int	hijyen = 100;
int	guc = 3;
int	ceviklik = 3;
int karizma = 3;
int	dayaniklilik = 3;
int toplayicilik = 3;
int buyulu_bitki = 0;

//karakter bilgileri.
void karakter_olustur(){
    printf("--- MAGICIAN'S MELODY'YE HOSGELDINIZ ---\n\n");
	printf("Kahramaninizin adini girin :");
	scanf("%s",&isim);
	printf("Kahramaninizin kullanacagi calgi aletininin adini girin :");
	scanf("%s",&calgi);
}
//Özellikler hakkýnda bilgiler burada yer alýyor.
void durum_goster(){
    printf("\nKahramanin Adi : %s\n",isim);
    printf("Kahramanin Kullandigi Calgi : %s\n\n",calgi);
    printf("Para: %d Dolar\n",para);
	printf("Seviye: %d\n",seviye);
	printf("Tecrube: %d\n",tecrube);
	printf("Can: %d\n",can);
	printf("Tokluk: %d\n",tokluk);
	printf("Su Seviyesi: %d\n",su_seviyesi);
	printf("Uyku: %d\n",uyku);
	printf("Hijyen: %d\n",hijyen);
	printf("Mutluluk: %d\n",mutluluk);
	printf("Yorgunluk: %d\n",yorgunluk);
	printf("Guc: %d\n",guc);
	printf("Ceviklik: %d\n",ceviklik);
	printf("Karizma: %d\n",karizma);
	printf("Dayaniklilik: %d\n",dayaniklilik);
	printf("Toplayicilik: %d\n",toplayicilik);
}

//Büyücü okulu menüsü...her turda bazý özelliklerin deðeri azaldý.
void buyucu_okulu(){
    int devam = 1;

    while(devam){
    printf("\n--- BUYUCU OKULU ---\n\n");

    int secim;
    printf("1. Calginla buyu yapmayi ogrenmek icin antrenman yap.\n");
    printf("2. Okulun ortak dusunu kullan.\n");
    printf("3. Okulun ogrencilerine ozel olan yatakhanede uyu.\n");
    printf("4. Evine geri don.\n");
    printf("\nSeciminizi yapiniz: ");
    scanf("%d",&secim);

    switch(secim){

        case 1:
            printf("\nCalginizi buyulemek icin antrenman yaptiniz !\n");

            tecrube+=10;
            if(tecrube>100)
                tecrube=100;

            tokluk-=20;
            if(tokluk<0)
                tokluk=0;

            su_seviyesi-=20;
            if(su_seviyesi<0)
                su_seviyesi=0;

            uyku-=10;
            if(uyku<0)
                uyku=0;

            hijyen-=5;
            if(hijyen<0)
                hijyen=0;

            yorgunluk-=10;
            if(yorgunluk<0)
                yorgunluk=0;

            mutluluk+=10;
            if(mutluluk>100)
                mutluluk=100;

            break;

        case 2:
            printf("\nOkulun ortak dusunu kullandiniz ve hafiflemis hissediyorsunuz...\n");
            tokluk-=5;
            if(tokluk<0)
                tokluk=0;

            su_seviyesi-=5;
            if(su_seviyesi<0)
                su_seviyesi=0;

            uyku-=10;
            if(uyku<0)
                uyku=0;

            yorgunluk-=10;
            if(yorgunluk<0)
                yorgunluk=0;

            hijyen+=70;
            if(hijyen>100)
                hijyen=100;

            mutluluk+=5;
            if(mutluluk>100)
                mutluluk=100;

            break;

        case 3:
            printf("\nOkulun yatakhanesinde kestirdiniz, az da olsa kendinize geldiniz...\n");
            tokluk-=20;
            if(tokluk<0)
                tokluk=0;

            su_seviyesi-=20;
            if(su_seviyesi<0)
                su_seviyesi=0;

            uyku+=55;
            if(uyku>100)
                uyku=100;

            hijyen-=5;
            if(hijyen<0)
                hijyen=0;

            yorgunluk+=70;
            if(yorgunluk>100)
                yorgunluk=100;

            mutluluk+=15;
            if(mutluluk>100)
                mutluluk=100;

            break;



        case 4:
            printf("\nEvinize geri donme karari aldiniz.\n");
            devam=0;
            break;

        default:
            printf("\nGecersiz secim !\n");
            while(getchar()!='\n');
        }
        kritik_kontrol();//Geri bildirim.
    }
}

//Büyücüler Özel Hastanesi menüsü burada yer alýyor...her turda bazý özelliklerin degeri azaldý.
void buyuculer_hastanesi(){
    int devam=1;

    while(devam){
    printf("\n--- BUYUCULER OZEL HASTANESI ---\n\n");

    int secim;
    printf("1. Doktordan vucudunuzdaki ufak yaralari sarmasini isteyin. (5 Dolar)\n");
    printf("2. Doktordan vucudunuzdaki ciddi yaralanmalari iyilestirmesini isteyin. (10 Dolar)\n");
    printf("3. Doktordan cok gizli olan iksirle sizi yenilemesini isteyin. (??? Dolar)\n");
    printf("4. Buraya niye geldim ? Evime geri donuyorum...\n");
    printf("\nSeciminizi yapiniz: ");
    scanf("%d",&secim);

    switch(secim){

        case 1:
            if(para<5){
                printf("\nParaniz yetersiz, muayene olamazsiniz !");
                continue;
            }
            printf("\nDoktor cok zorlanmadan vucudunuzdaki ufak tefek yaralari sardi.\n");
            para-=5;

            tokluk-=5;
            if(tokluk<0)
                tokluk=0;

            su_seviyesi-=5;
            if(su_seviyesi<0)
                su_seviyesi=0;

            uyku-=5;
            if(uyku<0)
                uyku=0;

            hijyen-=5;
            if(hijyen<0)
                hijyen=0;

            yorgunluk-=5;
            if(yorgunluk<0)
                yorgunluk=0;

            if(can<=80)
                can+=20;

            else
                can=100;
                break;

            mutluluk+=5;
            if(mutluluk>100)
                mutluluk=100;

        case 2:
            if(para<10){
                printf("\nParaniz yetersiz, muayene olamazsiniz !");
                continue;
            }

            printf("\nCalgisiyla sifa buyulerini yapabilen doktor vucudunuzdaki derin yaralari kapatti. (Cok daha iyi hissediyorsunuz)\n");
            para-=10;

            tokluk-=5;
            if(tokluk<0)
                tokluk=0;

            su_seviyesi-=5;
            if(su_seviyesi<0)
                su_seviyesi=0;

            uyku-=5;
            if(uyku<0)
                uyku=0;

            hijyen-=5;
            if(hijyen<0)
                hijyen=0;

            yorgunluk-=5;
            if(yorgunluk<0)
                yorgunluk=0;

            if(can<=60)
                can+=40;

            else
                can=100;
                break;

            mutluluk+=15;
            if(mutluluk>100)
                mutluluk=100;

        case 3:
            if(para<15){
                printf("\nParaniz yetersiz, muayene olamazsiniz !");
                continue;
            }

            if(buyulu_bitki<3){
                printf("\nElinizdeki bitki sayisi yetersiz oldugu icin doktor tedaviyi reddetti.\n");
                continue;
            }

            printf("\nDoktor gizli iksiri kullanabilmek icin sizden buyulu olan ozel bitkileri istedi...");
            para-=15;

            tokluk-=5;
            if(tokluk<0)
                tokluk=0;

            su_seviyesi-=5;
            if(su_seviyesi<0)
                su_seviyesi=0;

            mutluluk+=30;
            if(mutluluk>100)
                mutluluk=100;

            printf("Elinizde olan buyulu bitkilerden uc tanesini doktora verdiniz...\n");
            buyulu_bitki-=3;
            printf("Doktor buyulu bikilerden yapilmis iksiri size icirdi. (Tadi cok iyi degil fakat tamamen yenilenmis hissettiniz...)\n");

            if(can<=20)
                can+=80;

            else
                can=100;
                break;

        case 4:
            printf("\nEvinize geri donme karari aldiniz.\n");
            devam=0;
            break;

        default:
            printf("\nGecersiz secim !\n");
            while(getchar()!='\n');
        }
        kritik_kontrol();//Geri bildirim.
    }
}

//Açýk sahneli restoran menüsü...Burada han menüsünü restoran olarak deðiþtirdik ve her turda bazý özelliklerin deðeri azaldý.
void restoran(){
    int devam=1;

    while(devam){
    printf("\n--- ACIK SAHNELI RESTORAN ---\n\n");

    int secim;
    printf("1. Restoranda sectigin bir masaya oturup yemek ye.\n");
    printf("2. Restoranin bar kisminda soguk bir icecek ic.\n");
    printf("3. Restoranin acik sahnesine cik ve her zamanki gibi sovunu yap.\n");
    printf("4. Evine geri don. (Bugun formumda degilim, ya da fakirim)\n");
    printf("\nSeciminizi yapiniz: ");
    scanf("%d",&secim);

    switch(secim){

        case 1:{

            int yemek_secimi;
            while(1){
                printf("\nMenuyu acip yemeklerin fiyatlarina bakiyorsunuz: \n\n");//Yemek menüsü hikayeye göre deðiþtirildi ve eklemeler yapýldý.
                printf("1. Pirana Corbasi: 4 Dolar\n");
                printf("2. Karisik Sebze Yemegi: 8 Dolar\n");
                printf("3. Ejderha Eti: 12 Dolar\n");
                printf("4. Mus Koftesi: 16 Dolar\n");
                printf("5. Geri Don\n");
                printf("\nYiyeceginiz yemegi seciniz: ");
                scanf("%d",&yemek_secimi);

                switch(yemek_secimi){
                    case 1:
                        if(para<4){
                            printf("\nParaniz yetersiz bunu bile mi alamiyorsunuz...\n");
                            continue;
                        }

                        printf("\nPirana corbasini afiyetle ictiniz. (Pirana eti bulyonla birlesince size biraz dokunuyor...)\n");
                        para-=4;

                        tokluk+=30;
                        if(tokluk>100)
                            tokluk=100;

                        su_seviyesi+=15;
                        if(su_seviyesi>100)
                            su_seviyesi=100;

                        uyku-=5;
                        if(uyku<0)
                            uyku=0;

                        hijyen-=5;
                        if(hijyen<0)
                            hijyen=0;

                        yorgunluk-=5;
                        if(yorgunluk<0)
                        yorgunluk=0;

                        mutluluk+=5;
                        if(mutluluk>100)
                            mutluluk=100;

                        break;

                    case 2:
                        if(para<8){
                            printf("\nNe yazik ki paraniz yetersiz...\n");
                            continue;
                        }

                        printf("\nSebze yemegini afiyetle yediniz. (Sebze olmasina ragmen tadi fena degildi !)\n");
                        para-=8;

                        tokluk+=65;
                        if(tokluk>100)
                            tokluk=100;

                        su_seviyesi-=10;
                        if(su_seviyesi<0)
                            su_seviyesi=0;

                        uyku-=5;
                        if(uyku<0)
                            uyku=0;

                        hijyen-=5;
                        if(hijyen<0)
                            hijyen=0;

                        yorgunluk-=5;
                        if(yorgunluk<0)
                        yorgunluk=0;

                        mutluluk+=15;
                        if(mutluluk>100)
                            mutluluk=100;
                        break;

                    case 3:
                        if(para<12){
                            printf("\nNe yazik ki paraniz yetersiz...\n");
                            continue;
                        }

                        printf("\nEjderha etini afiyetle yediniz. (Hayatinizda yediginiz en kaliteli ejderha eti olabilir mi ???)\n");
                        para-=12;

                        tokluk+=85;
                        if(tokluk>100)
                            tokluk=100;

                        su_seviyesi-=25;
                        if(su_seviyesi<0)
                            su_seviyesi=0;

                        uyku-=5;
                        if(uyku<0)
                            uyku=0;

                        hijyen-=5;
                        if(hijyen<0)
                            hijyen=0;

                        yorgunluk-=5;
                        if(yorgunluk<0)
                        yorgunluk=0;

                        mutluluk+=25;
                        if(mutluluk>100)
                            mutluluk=100;
                        break;

                    case 4:
                        if(para<16){
                            printf("\nNe yazik ki paraniz yetersiz...\n");
                            continue;
                        }

                        printf("\nMus koftelerini afiyetle yediniz. (Acaba bu Mus koftelerini kim yapti ???)\n");
                        para-=16;

                        tokluk+=100;
                        if(tokluk>100)
                            tokluk=100;

                        su_seviyesi-=30;
                        if(su_seviyesi<0)
                            su_seviyesi=0;

                        uyku-=5;
                        if(uyku<0)
                            uyku=0;

                        hijyen-=5;
                        if(hijyen<0)
                            hijyen=0;

                        yorgunluk-=5;
                        if(yorgunluk<0)
                        yorgunluk=0;

                        mutluluk+=35;
                        if(mutluluk>100)
                            mutluluk=100;
                        break;

                    case 5:
                        printf("\nAcik sahneli restoran menusune geri donuluyor...\n");
                        break;

                    default:
                        printf("\nMenumuzde sadece 4 yemek secenegi var...\n");
                }
                break;
            }
            break;
        }

        case 2:{
            int icecek_secimi;
            while(1){
                printf("\nIcecek menusunu acip iceceklerin fiyatlarina bakiyorsunuz: \n");//Ýçecek menüsü hikayeye göre deðiþtirildi ve eklemeler yapýldý.
                printf("1. Su: 2 Dolar\n");
                printf("2. Limonata: 4 Dolar\n");
                printf("3. Kokteyl: 6 Dolar\n");
                printf("4. Geri Don\n");
                printf("\nIcmek istediginiz icecegi seciniz: ");
                scanf("%d",&icecek_secimi);

                switch(icecek_secimi){
                    case 1:
                        if(para<2){
                            printf("\nSu alacak kadar bile mi paraniz yok...\n");
                            continue;
                        }

                        printf("\nSuyu bardaga doldurup ictiniz. (Sadece su ekstra bir ozelligi yok...)\n");
                        para-=2;

                        tokluk-=5;
                        if(tokluk<0)
                            tokluk=0;

                        su_seviyesi+=70;
                        if(su_seviyesi>100)
                            su_seviyesi=100;

                        uyku-=5;
                        if(uyku<0)
                            uyku=0;

                        hijyen-=5;
                        if(hijyen<0)
                            hijyen=0;

                        yorgunluk-=5;
                        if(yorgunluk<0)
                        yorgunluk=0;

                        break;

                    case 2:
                        if(para<4){
                            printf("\nNe yazik ki paraniz yetersiz...\n");
                            continue;
                        }

                        printf("\nSoguk bir limonata ictiniz.\n");
                        para-=4;

                        tokluk-=5;
                        if(tokluk<0)
                            tokluk=0;

                        su_seviyesi+=40;
                        if(su_seviyesi>100)
                            su_seviyesi=100;

                        uyku-=5;
                        if(uyku<0)
                            uyku=0;

                        hijyen-=5;
                        if(hijyen<0)
                            hijyen=0;

                        yorgunluk-=5;
                        if(yorgunluk<0)
                        yorgunluk=0;

                        mutluluk+=20;
                        if(mutluluk>100)
                            mutluluk=100;

                        break;

                    case 3:
                        if(para<6){
                            printf("\nNe yazik ki paraniz yetersiz...\n");
                            continue;
                        }

                        printf("\nHavali bir kokteyl ictiniz. (Birazcik basinizi dondurdu...)\n");
                        para-=6;

                        tokluk-=5;
                        if(tokluk<0)
                            tokluk=0;

                        su_seviyesi+=55;
                        if(su_seviyesi>100)
                            su_seviyesi=100;

                        uyku-=5;
                        if(uyku<0)
                            uyku=0;

                        hijyen-=5;
                        if(hijyen<0)
                            hijyen=0;

                        yorgunluk-=5;
                        if(yorgunluk<0)
                        yorgunluk=0;

                        mutluluk+=45;
                        if(mutluluk>100)
                            mutluluk=100;

                        break;

                    case 4:
                        printf("\nAcik sahneli restoran menusune geri donuluyor...\n");
                        break;

                    default:
                       printf("\nIcecek menumuzde sadece 3 secenek var...\n");
                }
                break;
            }
            break;
        }

        case 3:
            if(hijyen<=20){
                printf("\nHijyen seviyeniz cok dusuk sahneye cikmaniza izin verilmedi !\n");
                continue;
            }

            printf("\nRestoranin acik sahnesine ciktiniz ve sovunuzu yapmaya basladiniz !\n");
            printf("Fakat kimsenin bilmedigi sey calginizi calarken hipnoz buyusu kullanabilmeniz...\n");
            printf("Calgi buyusuyle yaptiginiz gosteri sayesinde restorandaki insanlar sizi paraya bogdu !!!\n");
            printf("\nAcik Sahneli Restoran menusune geri donuluyor...\n");

            int kazanilan_para=10+(karizma*hijyen)/100;
            para+=kazanilan_para;

            tecrube+=20;
            if(tecrube>100)
                tecrube=100;

            tokluk-=10;
            if(tokluk<0)
                tokluk=0;

            su_seviyesi-=10;
            if(su_seviyesi<0)
                su_seviyesi=0;

            uyku-=15;
            if(uyku<0)
                uyku=0;

            hijyen-=10;
            if(hijyen<0)
                hijyen=0;

            yorgunluk-=20;
            if(yorgunluk<0)
            yorgunluk=0;

            mutluluk+=50;
            if(mutluluk>100)
                mutluluk=100;

            break;

        case 4:
            printf("\nEvinize geri donme karari aldiniz.\n");
            devam=0;
            break;

        default:
            printf("\nGecersiz secim !\n");
            while(getchar()!='\n');
        }
        kritik_kontrol();//Geri bildirim.
    }
}
//Oyunun macera kýsmý burada geçiyor...
void kesif_yapma(){
    srand(time(NULL));

    int savas_secimi;
    printf("\n--- KESIF MENUSU ---\n\n");
    printf("1. Sifali Bitki Toplama\n");
    printf("2. Ganimet Avina Cikma\n");
    printf("3. Evine geri don.\n");
    printf("\nSeciminizi yapin: ");
    scanf("%d",&savas_secimi);

    switch(savas_secimi){

        case 1:{
            float bitki_bulma_sansi=(float)toplayicilik/25.0;
            float meyve_bulma_sansi=bitki_bulma_sansi;
            float kaz_bulma_sansi=bitki_bulma_sansi/2.0;

            float random_deger=(float)rand()/RAND_MAX;

            if(random_deger<=bitki_bulma_sansi){
                printf("\nSifali bitki buldunuz! Caniniz 10 artti!\n");

                can+=10;
                if(can>100)
                can = 100;

                buyulu_bitki+=1;

                tokluk-=10;
                if(tokluk<0)
                    tokluk=0;

                su_seviyesi-=10;
                if(su_seviyesi<0)
                    su_seviyesi=0;

                uyku-=10;
                if(uyku<0)
                    uyku=0;

                hijyen-=10;
                if(hijyen<0)
                    hijyen=0;

                yorgunluk-=15;
                if(yorgunluk<0)
                yorgunluk=0;

                mutluluk+=20;
                if(mutluluk>100)
                    mutluluk=100;
            }

            else{
                printf("\nSifali bitki bulunamadi.\n");

                tokluk-=10;
                if(tokluk<0)
                    tokluk=0;

                su_seviyesi-=10;
                if(su_seviyesi<0)
                    su_seviyesi=0;

                uyku-=10;
                if(uyku<0)
                    uyku=0;

                hijyen-=10;
                if(hijyen<0)
                    hijyen=0;

                yorgunluk-=15;
                if(yorgunluk<0)
                yorgunluk=0;

                mutluluk-=5;
                if(mutluluk<0)
                    mutluluk=0;
            }

            random_deger=(float)rand()/RAND_MAX;
            if(random_deger<=meyve_bulma_sansi){
                printf("\nMeyve buldunuz! Toklugunuz 10 artti!\n");

                tokluk+=10;
                if(tokluk>100)
                tokluk=100;

                su_seviyesi-=10;
                if(su_seviyesi<0)
                    su_seviyesi=0;

                uyku-=10;
                if(uyku<0)
                    uyku=0;

                hijyen-=10;
                if(hijyen<0)
                    hijyen=0;

                yorgunluk-=15;
                if(yorgunluk<0)
                yorgunluk=0;

                mutluluk+=10;
                if(mutluluk>100)
                    mutluluk=100;

            }

            else{
                printf("\nMeyve bulunamadi.\n");

                tokluk-=10;
                if(tokluk<0)
                    tokluk=0;

                su_seviyesi-=10;
                if(su_seviyesi<0)
                    su_seviyesi=0;

                uyku-=10;
                if(uyku<0)
                    uyku=0;

                hijyen-=10;
                if(hijyen<0)
                    hijyen=0;

                yorgunluk-=15;
                if(yorgunluk<0)
                yorgunluk=0;

                mutluluk-=5;
                if(mutluluk<0)
                    mutluluk=0;
            }

            random_deger=(float)rand()/RAND_MAX;
            if(random_deger<=kaz_bulma_sansi){
                printf("\nGolun yakinlarinda dolasirken buyulu bir kaz avladiniz, kazi kamp atesi esliginde kizartip yediniz. Toklugunuz 50 artti!\n");

                tokluk+=50;
                if(tokluk>100)
                tokluk=100;

                su_seviyesi-=10;
                if(su_seviyesi<0)
                    su_seviyesi=0;

                uyku-=10;
                if(uyku<0)
                    uyku=0;

                hijyen-=10;
                if(hijyen<0)
                    hijyen=0;

                yorgunluk-=20;
                if(yorgunluk<0)
                yorgunluk=0;

                mutluluk+=25;
                if(mutluluk>100)
                    mutluluk=100;
            }

            else{
                printf("\nBuyulu hayvan avlanamadi.\n");

                 tokluk-=10;
                if(tokluk<0)
                    tokluk=0;

                su_seviyesi-=10;
                if(su_seviyesi<0)
                    su_seviyesi=0;

                uyku-=10;
                if(uyku<0)
                    uyku=0;

                hijyen-=10;
                if(hijyen<0)
                    hijyen=0;

                yorgunluk-=15;
                if(yorgunluk<0)
                yorgunluk=0;

                mutluluk-=5;
                if(mutluluk<0)
                    mutluluk=0;
            }
            kritik_kontrol();//Geri bildirim.
            break;
        }
		//Bazý özellikler ve güçler "oyunu kolaylaþtýrmamakla birlikte" daha iyi bir oyun deneyimi yaþatmak için deðiþtirildi...
        case 2:{
            int savas_secimi2;
            printf("\n--- KESIF ZORLUK SECIMI ---\n\n");//Macera kýsmýndaki seçimler hikayeye göre deðiþtirildi.
            printf("1. Buyuculer magarasini kesfe cik. (Kolay)\n");
            printf("2. Terk edilmis kasabayi kesfe cik. (Orta)\n");
            printf("3. Titanlar ormanini kesfe cik. (Zor)\n");
            printf("4. Evine geri don\n");
            printf("\nSeciminizi yapin: ");
            scanf("%d",&savas_secimi2);

			
            switch(savas_secimi2){

                case 1:{
                    int rakip_gucu=rand()%3+1;//Rakiple ilgili özelliklerin hesaplanmasý.
                    int rakip_cevikligi=rand()%3+1;
                    int rakip_dayanikliligi=rand()%3+1;
                    int rakip_cani=60;

                    printf("\nKolay Kesif Basladi!\n\n");
                    printf("Karsiniza %d gucte, %d ceviklikte kara buyu kullanan bir lanet buyucusu cikti!\n",rakip_gucu,rakip_cevikligi);

                    int savas_secimi;
                    printf("Ne yapmak istersiniz ?\n\n");
                    printf("1. Savas\n");
                    printf("2. Kac\n");
                    printf("\nSeciminizi yapin: ");
                    scanf("%d",&savas_secimi);

                    if(savas_secimi==2){
                        float kacis_sansi=(float)ceviklik/25.0;//Kaçýþ þansý hesaplanýr.
                        float random_deger=(float)rand()/RAND_MAX;

                        if(random_deger<=kacis_sansi){//Elimiz boþ çýktýðýmýz için mutluluk azaldý.
                            printf("Basariyla kactiniz!\n");

                            mutluluk-=20;
                            if(mutluluk<0)
                            	mutluluk=0;

                            tokluk-=10;
                            if(tokluk<0)
                            	tokluk=0;

                            su_seviyesi-=10;
							if(su_seviyesi<0)
                            	su_seviyesi=0;

							hijyen-=5;
							if(hijyen<0)
                            	hijyen=0;

                            yorgunluk-=20;
                            if(yorgunluk<0)
                            yorgunluk=0;

							uyku-=5;
							if(uyku<0)
                            	uyku=0;
                            return;
                        }

                        else{
                            printf("\nKacis basarisiz! Savas devam ediyor !\n");//Kaçýþ baþarýsýz olduðu için mutluluk azaldý.

                            mutluluk-=10;
                            if(mutluluk<0)
                            	mutluluk=0;
                        }
                    }

                    int kimin_turu=(ceviklik>rakip_cevikligi) ? 1 :(ceviklik<rakip_cevikligi) ? 0 :(rand()% 2);//Oyuna kimin baþlayacaðý seçilir.

                    while(can>0&&rakip_cani>0){

                        if(kimin_turu==1){

                            int verilen_hasar=4*guc;
                            int rakibin_alacagi_hasar=verilen_hasar;
                            rakip_cani-=rakibin_alacagi_hasar;
                            printf("\n%s Saldiriyor! %s ile dusmana calgi buyusu yapildi ve %d hasar verildi.\n",isim,calgi,rakibin_alacagi_hasar);
                            kimin_turu=0;

                            tokluk-=2;
                            if(tokluk<0)
                            	tokluk=0;

                            su_seviyesi-=2;
							if(su_seviyesi<0)
                            	su_seviyesi=0;

							hijyen-=2;
							if(hijyen<0)
                            	hijyen=0;

							uyku-=2;
							if(uyku<0)
                            	uyku=0;

                            yorgunluk-=3;
                            if(yorgunluk<0)
                            yorgunluk=0;
                        }

                        else{
                            int rakibin_verdigi_hasar=rakip_gucu*3;
                            int alinan_hasar=rakibin_verdigi_hasar-(rakibin_verdigi_hasar*dayaniklilik/25-1);
                            can-=alinan_hasar;
                            printf("\nKara Buyucunun Saldirisi! Eliyle yaptigi guclu kara buyu saldirilari size %d hasar verdi !\n",alinan_hasar);
                            kimin_turu=1;

                            tokluk-=2;
                            if(tokluk<0)
                            	tokluk=0;

                            su_seviyesi-=2;
							if(su_seviyesi<0)
                            	su_seviyesi=0;

							hijyen-=2;
							if(hijyen<0)
                            	hijyen=0;

							uyku-=2;
							if(uyku<0)
                            	uyku=0;

                            yorgunluk-=3;
                            if(yorgunluk<0)
                            yorgunluk=0;
                        }
                    }

                    if(can>0){
                        int ganimet=rand()%11+15;
                        para+=ganimet;
                        tecrube+=35;

                        if(tecrube>100)
                        	tecrube=100;

                        printf("\nKazandiniz! %d dolar ve %d tecrube puani kazandiniz.\n",ganimet,30);
                        mutluluk+=20;

                        if(mutluluk> 100)
                            mutluluk = 100;
                    }
                    else{
                        printf("\nMaalesef yenildiniz...\n");
                        printf("Karakteriniz maceranin sonuna geldi...\n");
                        exit(0);
                    }
                    kritik_kontrol();
                    break;
                }

                case 2:{
                    int rakip_gucu=rand()%6+4;//Rakiple ilgili özelliklerin hesaplanmasý.
                    int rakip_cevikligi=rand()%6+4;
                    int rakip_dayanikliligi=rand()%6+4;
                    int rakip_cani=120;

                    printf("\nOrta Kesif Basladi!\n\n");
                    printf("Karsiniza %d gucte, %d ceviklikte yari-saydam gorunmez bir hayalet cikti!\n",rakip_gucu,rakip_cevikligi);

                    int savas_secimi;
                    printf("Ne yapmak istersiniz ?\n\n");
                    printf("1. Savas\n");
                    printf("2. Kac\n");
                    printf("\nSeciminizi yapin: ");
                    scanf("%d",&savas_secimi);

                    if(savas_secimi==2){
                        float kacis_sansi=(float)ceviklik/25.0;//Kaçýþ þansý hesaplanýr.
                        float random_deger=(float)rand()/RAND_MAX;

                        if(random_deger<=kacis_sansi){
                            printf("\nBasariyla kactiniz!\n");

                            mutluluk-=20;
                            if(mutluluk<0)
                            	mutluluk=0;

                            tokluk-=10;
                            if(tokluk<0)
                            	tokluk=0;

                            su_seviyesi-=10;
							if(su_seviyesi<0)
                            	su_seviyesi=0;

							hijyen-=5;
							if(hijyen<0)
                            	hijyen=0;

							uyku-=5;
							if(uyku<0)
                            	uyku=0;

                            yorgunluk-=25;
                            if(yorgunluk<0)
                            yorgunluk=0;

                            return;
                        }
                        else{
                            printf("\nKacis basarisiz! Savas devam ediyor !\n");

                            mutluluk-=10;
                            if(mutluluk<0)
                            	mutluluk=0;
                        }
                    }

                    int kimin_turu=(ceviklik>rakip_cevikligi) ? 1 :(ceviklik<rakip_cevikligi) ? 0 :(rand()%2);//Oyuna kimin baþlayacaðý seçilir.

                    while(can>0&&rakip_cani>0){

                        if (kimin_turu==1){

                            int verilen_hasar=4*guc;
                            int rakibin_alacagi_hasar=verilen_hasar;
                            rakip_cani-=rakibin_alacagi_hasar;
                            printf("\n%s Saldiriyor! %s ile dusmana calgi buyusu yapildi ve %d hasar verildi.\n",isim,calgi,rakibin_alacagi_hasar);
                            kimin_turu=0;

                            tokluk-=4;
                            if(tokluk<0)
                            	tokluk=0;

                            su_seviyesi-=4;
							if(su_seviyesi<0)
                            	su_seviyesi=0;

							hijyen-=4;
							if(hijyen<0)
                            	hijyen=0;

							uyku-=4;
							if(uyku<0)
                            	uyku=0;

                            yorgunluk-=5;
                            if(yorgunluk<0)
                            yorgunluk=0;
                        }
                        else{
                            int rakibin_verdigi_hasar=rakip_gucu*4;
                            int alinan_hasar=rakibin_verdigi_hasar-(rakibin_verdigi_hasar*dayaniklilik/25-1);
                            can-=alinan_hasar;
                            printf("\nYari-Saydam Gorunmez Hayaletin Saldirisi! Hayalet uzak mesafeden ruhunuzu emmeye calisarak size %d hasar verdi !\n",alinan_hasar);
                            kimin_turu=1;

                            tokluk-=4;
                            if(tokluk<0)
                            	tokluk=0;

                            su_seviyesi-=4;
							if(su_seviyesi<0)
                            	su_seviyesi=0;

							hijyen-=4;
							if(hijyen<0)
                            	hijyen=0;

							uyku-=4;
							if(uyku<0)
                            	uyku=0;

                            yorgunluk-=5;
                            if(yorgunluk<0)
                            yorgunluk=0;
                        }
                    }

                    if(can>0){

                        int ganimet=rand()%21+30;
                        para+=ganimet;
                        tecrube+=45;

                        printf("\nKazandiniz! %d dolar ve %d tecrube puani kazandiniz.\n",ganimet,60);

                        mutluluk+=20;
                        if(mutluluk>100)
                        	mutluluk=100;
                    }
                    else{

                        printf("\nMaalesef yenildiniz...\n");
                        printf("Karakteriniz maceranin sonuna geldi...\n");
                        exit(0);
                    }
                    kritik_kontrol();
                    break;
                }

                case 3:{
                    int rakip_gucu=rand()%8+7;//Rakiple ilgili özelliklerin hesaplanmasý.
                    int rakip_cevikligi=rand()%8+7;
                    int rakip_dayanikliligi=rand()%8+7;
                    int rakip_cani=180;

                    printf("\nZor Kesif Basladi!\n\n");
                    printf("Karsiniza ??? gucte, ??? ceviklikte, devasa buyuklukte, efsanelerde sayisiz kez adi gecen, buyucu katili bir titan cikti!\n");

                    int savas_secimi;
                    printf("Ne yapmak istersiniz ?\n\n");
                    printf("1. Savas\n");
                    printf("2. Kac\n");
                    printf("\nSeciminizi yapin: ");
                    scanf("%d",&savas_secimi);

                    if(savas_secimi==2){
                        float kacis_sansi=(float)ceviklik/25.0;//Kaçýþ þansý hesaplanýr.
                        float random_deger=(float)rand()/RAND_MAX;

                        if(random_deger<=kacis_sansi){
                            printf("\nBasariyla kactiniz!\n");

                            mutluluk-=20;
                            if(mutluluk<0)
                            	mutluluk=0;

                            tokluk-=10;
                            if(tokluk<0)
                            	tokluk=0;

                            su_seviyesi-=10;
							if(su_seviyesi<0)
                            	su_seviyesi=0;

							hijyen-=5;
							if(hijyen<0)
                            	hijyen=0;

							uyku-=5;
							if(uyku<0)
                            	uyku=0;

                            yorgunluk-=30;
                            if(yorgunluk<0)
                            yorgunluk=0;

                            return;
                        }
                        else{
                            printf("\nKacis basarisiz! Savas devam ediyor !\n");

                            mutluluk-=10;
                            if(mutluluk<0)
                            	mutluluk=0;
                        }
                    }

                    int kimin_turu=(ceviklik>rakip_cevikligi) ? 1 :(ceviklik<rakip_cevikligi) ? 0 :(rand()%2);//Oyuna kimin baþlayacaðý seçilir.

                    while(can>0&&rakip_cani>0){
                        if(kimin_turu==1){
                            int verilen_hasar=4*guc;
                            int rakibin_alacagi_hasar=verilen_hasar;
                            rakip_cani-=rakibin_alacagi_hasar;
                            printf("\n%s Saldiriyor! %s ile dusmana calgi buyusu yapildi ve %d hasar verildi.\n",isim,calgi,rakibin_alacagi_hasar);
                            kimin_turu=0;

                            tokluk-=10;
                            if(tokluk<0)
                            	tokluk=0;

                            su_seviyesi-=10;
							if(su_seviyesi<0)
                            	su_seviyesi=0;

							hijyen-=10;
							if(hijyen<0)
                            	hijyen=0;

							uyku-=10;
							if(uyku<0)
                            	uyku=0;

                            yorgunluk-=11;
                            if(yorgunluk<0)
                            yorgunluk=0;
                        }
                        else{
                            int rakibin_verdigi_hasar=rakip_gucu*5;
                            int alinan_hasar=rakibin_verdigi_hasar-(rakibin_verdigi_hasar*dayaniklilik/25-1);
                            can-=alinan_hasar;
                            printf("\nTitanin Saldirisi! Titan devasa yumruguyla yere bir darbe indirerek size %d hasar verdi !\n",alinan_hasar);
                            kimin_turu=1;

                            tokluk-=8;
                            if(tokluk<0)
                            	tokluk=0;

                            su_seviyesi-=8;
							if(su_seviyesi<0)
                            	su_seviyesi=0;

							hijyen-=8;
							if(hijyen<0)
                            	hijyen=0;

							uyku-=8;
							if(uyku<0)
                            	uyku=0;

                            yorgunluk-=9;
                            if(yorgunluk<0)
                            yorgunluk=0;
                        }
                    }

                    if(can>0){
                        int ganimet=rand()%21+55;
                        para+=ganimet;
                        tecrube+=90;

                        if(tecrube>100)
                        	tecrube=100;

                        printf("\nKazandiniz! %d dolar ve %d tecrube puani kazandiniz.\n",ganimet,90);

                        mutluluk+=20;
                        if(mutluluk>100)
                        	mutluluk=100;
                    }
                    else{
                        printf("\nMaalesef yenildiniz...\n");
                        printf("Karakteriniz maceranin sonuna geldi...\n");
                        exit(0);
                    }
                    kritik_kontrol();//Geri bildirim.
                    break;
                }

                case 4:
                    kritik_kontrol();//Geri bildirim.
                    printf("\nEve geri donuluyor...\n");
                    return;

                default:
                    printf("\nGecersiz secim!\n");
            }
            break;
        }

        case 3:
            kritik_kontrol();//Geri bildirim.
            printf("\nEve geri donuluyor...\n");
            return;

        default:
            printf("\nGecersiz secim!\n");
    }
}
//Eklenen yeni menümüz...
void kara_buyu(){
	srand(time(NULL));
    int devam=1;
	
    while(devam){
        printf("\n--- KARA BUYU TARIKATI ---\n\n");

        int secim;
        printf("1. Tarikat uyelerinden birisiyle gorus.\n");
        printf("2. Tarikatin lideri ile ozel bir gorusme yap.\n");
        printf("3. Evine geri don.\n");
        printf("\nSeciminizi yapiniz: ");
        scanf("%d",&secim);

        switch(secim){
            case 1:
                if(seviye<5){
                    printf("\nSeviyeniz yetersiz.\n");
                    break;
                }

                printf("\nTarikat uyelerinden birisi sana kara buyu icin mi buraya geldigini sordu.\n");

                char cevap;
                while(1){
                    printf("\nTarikat uyesinin sorusunu cevaplayin. (E/H): ");
                    getchar();
                    scanf("%c",&cevap);

                    if(cevap=='H'||cevap=='h'){
                        printf("\nTarikat uyesi onunla dalga gectiginiz sanip sizi iceriden kovdu.\n");
                        return;
                    }
                    else if(cevap=='E'||cevap=='e'){

                        if(para>=50&&mutluluk>=50&&tokluk>=40&&uyku>=40&&su_seviyesi>=40&&hijyen>=40&&yorgunluk>=40){
                            printf("\nTarikat uyesi sizi odasina goturdu.\n");
                            printf("Kara Buyuyu uzerine uygulamami kabul ettiysen sunu bilmesin.\n");
                            printf("Kara Buyunun kullanildigi bu dunyada hicbir sey karsiliksiz degildir.\n");
                            printf("Eger Kara Buyunun sana bir odul vermesini istiyorsan, bazi deger verdigin seylerden fedakarlik yapman gerekir...\n");

                            para-=50;
                            mutluluk-=50;
                            tokluk-=40;
                            uyku-=40;
                            su_seviyesi-=40;
                            hijyen-=40;
                            yorgunluk-=40;

                            tecrube=100;
                            buyulu_bitki+=9;

                            printf("\nKara Buyu tamamlandi, kendinizi elinizde buyulu bitkiler ile yatarken evde buldunuz...\n");
                            return;
                        }
                        else{

                           if(para<100||mutluluk<50||tokluk<40||uyku<40||su_seviyesi<40||hijyen<40||yorgunluk<40)

							printf("\nGerekli ozelliklerde eksiklik var, uye ile anlasma saglanamadi...\n");


                            break;
                        }
                    }
                    else{
                        printf("\nTarikat uyesi cevabinizi anlayamadi...\n");
                    }
                }
                break;

            case 2:
                if(seviye<10){
                    printf("\nSeviyeniz yetersiz.\n");
                    break;
                }

                printf("\nTarikatin lideri ile gorusme yapmak icin ozel korumalarla birlikte liderin odasina gidiyorsunuz...\n");
                printf("Liderin odasina vardiniz, korumalar uzerinizdeki calgi aletini alip liderin odasinin kapisini size actilar...\n");

                char lider_cevap;
                while(1){
                    printf("\nTarikat lideri size mutlak Kara Buyunun uzerinizde kullanilmasini gercekten isteyip istemediginizi sordu. (E/H): ");
                    getchar();
                    scanf("%c",&lider_cevap);

                    if(lider_cevap=='H'||lider_cevap=='h'){
                        printf("\nTarikatin liderini ne curretle mesgul edersiniz ? Cezasina katlanacaksiniz...\n");

                        para-=30;
                        if(para<0)
                        para=0;

                        mutluluk-=30;
                        if(mutluluk<0)
                        mutluluk=0;

                        uyku-=30;
                        if(uyku<0)
                        uyku=0;

                        hijyen-=30;
                        if(hijyen<0)
                        hijyen=0;

                        su_seviyesi-=30;
                        if(su_seviyesi<0)
                        su_seviyesi=0;

                        tokluk-=30;
                        if(tokluk<0)
                        tokluk=0;

                        yorgunluk-=30;
                        if(yorgunluk<0)
                        yorgunluk=0;

                        printf("Bir dahaki sefere kiminle gorustugunu bil...\n");
                        return;
                    }
                    else if(lider_cevap=='E'||lider_cevap=='e'){

                        if(para>=200&&mutluluk>=80&&tokluk>=60&&uyku>=60&&su_seviyesi>=60&&hijyen>=60&&yorgunluk>=60){
                            printf("\nDemek oyle... Eger bunu istiyorsan Mutlak Kara Buyu seni kabul etmezse olecegini de biliyorsundur o zaman.\n");
                            printf("Artik bunun geri donusu yok...\n");

                            if(rand()%2==1){
                                printf("\nMutlak Kara Buyu vucudunuzu kabul etti...\n");
                                printf("\nArtik bu dunyada sizden guclu olan bir buyucu yok, Kara Buyuye hukmediyorsunuz...\n");
                                printf("\nOyunu bitirdiniz tebrikler... (KOTU SON)\n");
                                exit(0);
                            }

                            else {
                                printf("\nMaceranizin sonuna geldiniz... Mutlak Kara Buyunun ne kadar tehlikeli oldugunu bilen artik sadece Tarikat uyeleri degil...\n");
                                oyun_sonu();
                            }
                        }

                        else{
                             if(para<200||mutluluk<80||tokluk<60||uyku<60||su_seviyesi<60||hijyen<60||yorgunluk<60)
								 printf("\nGerekli ozelliklerde eksiklik var, lider ile anlasma saglanamadi...\n");


                            break;
                        }
                    }

                    else{
                        printf("\nTarikat lideri ne demek istediginizi anlamadi ve size karsi uyku buyusu kullanarak sizi evinize isinladi...\n");
                        return;
                    }
                }
                break;

            case 3:
                printf("\nEve geri donuluyor...\n");
                return;

            default:
                printf("\nGecersiz secim!\n");
        }
        kritik_kontrol();//Geri bildirim.
    }
}

void seviye_atla(){
	

    if(tecrube>=100){

        seviye+=1;
        tecrube=0;

        int puan=5;

        printf("\n--- SEVIYE ATLAMA ---\n\n");
        printf("Seviye Atladiniz! Toplam %d beceri puani kazandiniz.\n",puan);

        while(puan>0){

            int secim;
            printf("\nKalan Puan: %d\n",puan);
            printf("Hangi becerinizi gelistirmek istersiniz?\n");
            printf("1. Guc (%d/25)\n",guc);
            printf("2. Ceviklik (%d/25)\n",ceviklik);
            printf("3. Karizma (%d/25)\n",karizma);
            printf("4. Dayaniklilik (%d/25)\n",dayaniklilik);
            printf("5. Toplayicilik (%d/25)\n",toplayicilik);
            printf("\nSeciminizi yapiniz: ");
            scanf("%d",&secim);

            switch(secim){

                case 1:
                    if(guc<25){
                        guc+=1;
                        puan-=1;
                    }
                    else{
                        printf("\nBu beceri zaten maksimum seviyede!\n");
                        continue;
                    }
                    break;

                case 2:
                    if(ceviklik<25){
                        ceviklik+=1;
                        puan-=1;
                    }
                    else{
                        printf("\nBu beceri zaten maksimum seviyede!\n");
                        continue;
                    }
                    break;

                case 3:
                    if(karizma<25){
                        karizma+=1;
                        puan-=1;
                    }
                    else{
                        printf("\nBu beceri zaten maksimum seviyede!\n");
                        continue;
                    }
                    break;

                case 4:
                    if(dayaniklilik<25){
                        dayaniklilik+=1;
                        puan-=1;
                    }
                    else{
                        printf("\nBu beceri zaten maksimum seviyede!\n");
                        continue;
                    }
                    break;

                case 5:
                    if(toplayicilik<25){
                        toplayicilik+=1;
                        puan-=1;
                    }
                    else{
                        printf("\nBu beceri zaten maksimum seviyede!\n");
                        continue;
                    }
                    break;

                default:
                    printf("\nGecersiz secim!\n");
                    continue;
            }
        }
        printf("\n");
        printf("1. Guc (%d/25)\n",guc);
        printf("2. Ceviklik (%d/25)\n",ceviklik);
        printf("3. Karizma (%d/25)\n",karizma);
        printf("4. Dayaniklilik (%d/25)\n",dayaniklilik);
        printf("5. Toplayicilik (%d/25)\n",toplayicilik);
        printf("\nBecerileriniz basariyla guncellendi!\n");
        
        if(guc==25&&ceviklik==25&&karizma==25&&dayaniklilik==25&&toplayicilik==25){//Oyunun iyi sonu...
        
    	printf("\nTEBRIKLER,BU OYUNU EN IYI SEKILDE BITIRDINIZ !!!\n");
    	printf("Oynadiginiz icin tesekkurler... (IYI SON)\n");
    	exit(0);
	}
	
    }
    else{
        printf("\nYetersiz tecrube! Seviye atlayamazsiniz.\n");
        }

}
//Karakterin bazý özellikleri belli bir seviyenin altýna düþtüðünde oyuncuya geri dönüt vermek için kritik_kontrol fonksiyonu tanýmlandý.
void kritik_kontrol(){

    if(tokluk<=0||su_seviyesi<=0||mutluluk<=0||uyku<=0||hijyen<=0||yorgunluk<=0){
        printf("\nHayati niteliklerden biri kritik seviyede (0 veya daha az) oldugu icin caniniz azaliyor...\n");
        can-=15;
        if(can<0)
            can = 0;
    }

    if(tokluk<=20)
        printf("\nKritik aclik seviyesi! Acilen yemek yemeniz gerekiyor!!\n");

    if(su_seviyesi<=20)
        printf("\nKritik su seviyesi! Acilen sivi tuketmeniz gerekiyor!!\n");

    if(uyku<=20)
        printf("\nKritik uyku seviyesi! Acilen uyumaniz gerekiyor!!\n");

    if(hijyen<=20)
        printf("\nKritik hijyen seviyesi! Acilen temizlenmeniz gerekiyor!!\n");

    if(mutluluk<=20)
        printf("\nKritik mutluluk seviyesi! Birazcik yüzün gulsun be adam!!\n");

    if(yorgunluk<=20)
        printf("\nKritik yorgunluk seviyesi! Acilen dinlenmeniz gerekiyor!!\n");

    if(can<=20)
        printf("\nKritik can seviyesi! Acilen iyilesmeniz gerekiyor!!\n");

    if(can<=0){
    	printf("\nKarakteriniz hayatta kalamadi...\n");
        oyun_sonu();
    }
}

//Oyuncunun oyuna baþlamadan önce oyun hakkýnda bilgi sahibi olmasý için oyun kurallarý menüsü eklendi...
void oyun_kurallari(){

    printf("\n--- OYUN KURALLARI (MAGICIAN'S MELODY) ---\n\n");
    printf(" 1 - MAGICIAN'S MELODY oyununda amaciniz menu kismindaki seceneklerden faydalanarak oyunda ilerleyebilmek.\n");
    printf(" 2 - Bu secenekler arasinda bir secim yaparken taktiksel zekanizi konusturmaniz bekleniyor.\n");
    printf(" 3 - Oyun birden fazla son secenegi ile oyuncuya farkli sekilde oynayis secenekleri sunuyor.\n");
    printf(" 4 - Oyunda farkli mekanlarda, farkli secimler yaparak tecrube puanlari kazanmaniz gerekiyor.\n");
    printf(" 5 - Oyunda seviyenizi artirmak icin tecrubenizin 100 olmasi gerekmektedir.\n");
    printf(" 6 - Tecrubeniz 100 olunca oyunun ana menusunde seviye atlamayi secerek size verilecek 5 beceri puani ile istediginiz becerinizi gelistirebilirsiniz.\n");
    printf(" 7 - Burada yapacaginiz gelistirmeler oyun boyunca kullanacaginiz taktikleri etkileyecektir.\n");
    printf(" 8 - Bu oyunu kazanmanin ilk yolu (IYI SON) karakterinizin tum becerilerini (25/25) yapmak.\n");
    printf(" 9 - Bu oyunu kazanmanin diger yolu (KOTU SON) seviyenizi yeterince arttirdiktan sonra mutlak kara buyunun vucudunuza islemesini saglamak.\n");
    printf("10 - Bu oyunu oynarken size bol sans dileriz !\n");
    printf("\nYapimcilar: Kaan KARAKAN , Recep DORUK\n");
}
//Oyuncunun oyundan çýkmak istemesi durumunda...
int oyun_sonu_tercihi(){
    char cevap;
    printf("\nOyundan cikmak istediginize emin misiniz? (E/H): ");

    while(getchar()!='\n');
    scanf("%c",&cevap);

    if(cevap=='E'||cevap=='e'){
        printf("\nOyun bitti. Oynadiginiz icin tesekkurler!\n");
        exit(0);
    }

    else if(cevap=='H'||cevap=='h')
    menu();

    else
        printf("\nYanlis karakter girisi yaptiniz...\n");
        menu();
}
//Oyuncunun oyunu kötü sonda bitirmesi veya ölmesi durumunda...
void oyun_sonu(){
    printf("\nOyun bitti. Oynadiginiz icin tesekkurler!\n");
    exit(0);
}
//Oyun menüsü ayrý bir fonksiyon olarak tanýmlandý...
void menu(){
    int secim;

    while(1){

        printf("\n--- Oyun Menusu (EV) ---\n\n");
        printf("1. Buyucu Okuluna Git.\n");
        printf("2. Buyucu Ozel Hastanesine Git.\n");
        printf("3. Acik Sahneli Restorana Git.\n");
        printf("4. Maceraya Atil.\n");
        printf("5. Kara Buyu Tarikatina Git.\n");
        printf("6. Durumumu Goster.\n");
        printf("7. Seviye Atla.\n");
        printf("8. Oyunun Kurallarini Oku.\n");
        printf("9. Oyundan Cik.\n");
        printf("\nSeciminizi yapin: ");
        scanf("%d",&secim);

        switch(secim){

            case 1:
                buyucu_okulu();
                break;

            case 2:
                buyuculer_hastanesi();
                break;

            case 3:
                restoran();
                break;

            case 4:
                kesif_yapma();
                break;

            case 5:
                kara_buyu();
                break;

            case 6:
                durum_goster();
                break;

            case 7:
                seviye_atla();
                break;

            case 8:
                oyun_kurallari();
                break;

            case 9:
                oyun_sonu_tercihi();
                return;

            default:
                printf("\nGecersiz secim! Lutfen tekrar deneyin.\n");
                while(getchar() != '\n'); 
            	continue; 
        }
    }
}
//Oyunun calýsma zamaný...
int main(){

    karakter_olustur();
    menu();

return 0;
}
