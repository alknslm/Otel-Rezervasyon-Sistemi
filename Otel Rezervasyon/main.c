#include <stdio.h>
#include <stdlib.h>

/* SELÝM ALKAN 152802003 */

int main()
{
   char secim,secim1,odeme,devam;
   int hft,i,odano,j,kisi,sayac=1,x,z,c,kisi1,q;
   float ucret;
   int so[100][12];
    int deoda[100][12];
    int ldo[100][12];
    for (hft=1; hft<=12; hft++)
    {
        for (i=0; i<100; i++)
        {
            if (i%6==0)
            {
                ldo[i][hft]=i;
            }
            else if (i%2==1)
            {
                so[i][hft]=i;
            }
            else
            {
                deoda[i][hft]=i;
            }
        }
    }
    do
   {printf("Hangi mevsimde konaklama yapmak istersiniz:\n");
   printf("Sonbahar icin 'S', Bahar icin 'B',Yaz icin 'Y' tusuna basiniz:"); scanf("%c",&secim);
   switch(secim)
   {
   case 's':
   {
       do{
            printf("Sonbahar ayinin kacinci haftasinda konaklama yapilacagini giriniz:"); scanf("%d",&hft);
        sayac++;
        if((hft>=1)&&(hft<=12))
        break;
        if(sayac==4)
        {

      exit(0);
        }
       }while((hft>=12||hft<=1)&&sayac<4);

         printf("Lutfen oda tipini seciniz:\n");
           printf("Standart Oda icin 'S', Deluxe oda icin 'D', Large Deluxe oda icin 'L' kodunu giriniz:");
           scanf(" %c",&secim1);
           switch(secim1)
          {
           case 's':
           {
               for(i=1;i<=100;i+=2)
               {
                   printf("%d--",so[i][hft]);
               }
               printf("nolu odalar Standart Odalara dahildir, birini seciniz:");scanf("%d",&odano);

               printf("Lutfen kac kisi kalacaginizi giriniz:"); scanf("%d",&kisi);
               if(kisi>=1 && kisi<=4)
               {
                 printf("Odemeyi nasil yapmak istersiniz? On odemeli islem icin O, Havale islem icin H,  Standart odeme icin S harfini giriniz:");
                   scanf(" %c",&odeme);

                   switch(odeme)
                   {
                       case 'o':
                       {
                           ucret=kisi*25-(15*kisi*25)/100;
                           printf("UCRET=%.2f$",ucret);
                      break; }
                     case 'h':

                     {
                         if(kisi>=1 && kisi<=3)
                         {
                             ucret=kisi*25;
                             printf("UCRET=%.2f$",ucret);
                         }

                         else if(kisi==4)
                         {
                             ucret=3*25+25*0.5;
                             printf("UCRET=%.2f$",ucret);
                         }
                     break;}
                     case 's':

                     {
                         ucret=kisi*25;
                         printf("UCRET=%.2f$",ucret);
                     break;}

                   break;}

               }
               else if(kisi>4)
               {
                 if((kisi-4)>=4)
                 {
                 c=kisi/4;
                 c++;
                 }
                 kisi1=kisi;
                 for(z=0;z<=c;z++)
                 {

                     kisi=kisi-4;
                     printf("Geriye kalan %d kisi icin lutfen oda numarasi seciniz:",kisi);
                     scanf("%d",&odano);
                     if(kisi%4==kisi)
                     break;
                 }
                 printf("Odemeyi nasil yapmak istersiniz? On odemeli islem icin O, Havale islem icin H,  Standart odeme icin S harfini giriniz:");
                   scanf(" %c",&odeme);

                   switch(odeme)
                   {
                       case 'o':

                       {
                           ucret=kisi1*25-(15*kisi1*25)/100;
                           printf("UCRET=%.2f$",ucret);
                      break; }

                     case 'h':

                     {
                         if(kisi1==5)
                         {
                             ucret=4*25+25*0.5;
                             printf("UCRET=%.2f$",ucret);
                         }

                         else if(kisi1>5)
                         {
                             ucret=kisi1*25-(25*75)/100;
                             printf("UCRET=%.2f$",ucret);
                         }
                     break;}
                     case 's':

                     {
                         ucret=kisi1*25;
                         printf("UCRET=%.2f$",ucret);
                     break;}

                   break;}
                }


               break;}
               case 'L':
               case 'l':

            {

               for(i=6;i<=100;i+=6)
               {
                   printf("%d--",ldo[i][hft]);
               }
               printf("nolu odalar Large_Deluxe Odalara dahildir, birisini seciniz:");scanf("%d",&odano);

               printf("Lutfen kac kisi kalacaginizi giriniz:"); scanf("%d",&kisi);
               if(kisi>=1 && kisi<=7)
               {

                   printf("Odemeyi nasil yapmak istersiniz? On odemeli islem icin O, Havale islem icin H,  Standart odeme icin S harfini giriniz:");
                   scanf(" %c",&odeme);

                   switch(odeme)
                   {
                       case 'o':

                       {
                           ucret=kisi*250-(15*kisi*250)/100;
                           printf("UCRET=%.2f$",ucret);
                      break; }

                     case 'h':

                     {
                         if(kisi>=1 && kisi<=3)
                         {
                             ucret=kisi*250;
                             printf("UCRET=%.2f$",ucret);
                         }

                         else if(kisi>3 && kisi<=5)
                         {
                             ucret=kisi*250-(250*0.5);
                             printf("UCRET=%.2f$",ucret);
                         }
                         else if(kisi>5)
                         {
                             ucret=kisi*250-(250*75)/100;
                             printf("UCRET=%.2f$",ucret);
                         }
                     break;}
                     case 's':

                     {
                         ucret=kisi*250;
                         printf("UCRET=%.2f$",ucret);
                     break;
                     }

                   break;}

               }
               else if(kisi>7)
               {
                 if((kisi-7)>=7)
                 {
                 c=kisi/7;
                 c++;
                 }
                 kisi1=kisi;
                 for(z=0;z<=c;z++)
                 {

                     kisi=kisi-7;
                     printf("Geriye kalan %d kisi icin lutfen oda numarasi seciniz:",kisi);
                     scanf("%d",&odano);
                     if(kisi%7==kisi)
                     break;
                 }
                 printf("Odemeyi nasil yapmak istersiniz? On odemeli islem icin O, Havale islem icin H,  Standart odeme icin S harfini giriniz:");
                   scanf(" %c",&odeme);

                   switch(odeme)
                   {
                       case 'o':
                       {
                           ucret=kisi1*250-(15*kisi1*250)/100;
                           printf("UCRET=%.2f$",ucret);
                      break;
                      }

                     case 'h':

                     {
                        ucret=kisi1*250-(250*75)/100;
                        printf("UCRET=%.2f",ucret);

                     break;
                     }
                     case 's':

                     {
                         ucret=kisi1*250;
                         printf("UCRET=%.2f$",ucret);
                     break;
                     }
                   break;}
                }
               break;}
               case 'd':
           {
               for(i=2;i<=100;i+=2)
               {if(i%6==0)
               {
                   continue;
               }
               printf("%d--",deoda[i][hft]);
               }
               printf("nolu odalar Deluxe Odalara dahildir, birini seciniz:");scanf("%d",&odano);
               printf("Lutfen kac kisi kalacaginizi giriniz:"); scanf("%d",&kisi);
               if(kisi>=1 && kisi<=4)
               {

                   printf("Odemeyi nasil yapmak istersiniz? On odemeli islem icin O, Havale islem icin H,  Standart odeme icin S harfini giriniz:");
                   scanf(" %c",&odeme);

                   switch(odeme)
                   {
                       case 'o':

                       {
                           ucret=kisi*50-(15*kisi*50)/100;
                           printf("UCRET=%.2f$",ucret);
                      break; }

                     case 'h':

                     {
                         if(kisi>=1 && kisi<=3)
                         {
                             ucret=kisi*50;
                             printf("UCRET=%.2f$",ucret);
                         }

                         else if(kisi==4)
                         {
                             ucret=3*50+50*0.5;
                             printf("UCRET=%.2f$",ucret);
                         }
                     break;}
                     case 's':
                     {
                         ucret=kisi*50;
                         printf("UCRET=%.2f$",ucret);
                     break;}

                   break;}

               }
               else if(kisi>4)
               {
                 if((kisi-4)>=4)
                 {
                 c=kisi/4;
                 c++;
                 }
                 kisi1=kisi;
                 for(z=0;z<=c;z++)
                 {

                     kisi=kisi-4;
                     printf("Geriye kalan %d kisi icin lutfen oda numarasi seciniz:",kisi);
                     scanf("%d",&odano);
                     if(kisi%4==kisi)
                     break;
                 }
                 printf("Odemeyi nasil yapmak istersiniz? On odemeli islem icin O, Havale islem icin H,  Standart odeme icin S harfini giriniz:");
                   scanf(" %c",&odeme);

                   switch(odeme)
                   {
                       case 'o':

                       {
                           ucret=kisi1*50-(15*kisi1*50)/100;
                           printf("UCRET=%.2f$",ucret);
                      break; }

                     case 'h':

                     {
                         if(kisi1==5)
                         {
                             ucret=4*50+50*0.5;
                             printf("UCRET=%.2f$",ucret);
                         }

                         else if(kisi1>5)
                         {
                             ucret=kisi1*50-(50*75)/100;
                             printf("UCRET=%.2f$",ucret);
                         }
                     break;}
                     case 's':

                     {
                         ucret=kisi1*50;
                         printf("UCRET=%.2f$",ucret);
                     break;}

                   break;}
                }
               break;}
          }
            printf("Rezervasyona devam edecek misiniz?\n Devam etmek icin E ye Kapatmak icin H ye basin.");scanf(" %c",&devam);
           break;}
           case 'b':
        {
       do{
            printf("Bahar ayinin kacinci haftasinda konaklama yapilacagini giriniz:"); scanf("%d",&hft);
        sayac++;
        if((hft>=1)&&(hft<=12))
        break;
        if(sayac==4)
        {

      exit(0);
        }
       }while((hft>=12||hft<=1)&&sayac<4);

         printf("Lutfen oda tipini seciniz:\n");
           printf("Standart Oda icin 'S', Deluxe oda icin 'D', Large Deluxe oda icin 'L' kodunu giriniz:");
           scanf(" %c",&secim1);

           switch(secim1)
          {

           case 's':
           {
               for(i=1;i<=100;i+=2)
               {
                   printf("%d--",so[i][hft]);
               }
               printf("nolu odalar Standart Odalara dahildir, birini seciniz:");scanf("%d",&odano);

               printf("Lutfen kac kisi kalacaginizi giriniz:"); scanf("%d",&kisi);
               if(kisi>=1 && kisi<=4)
               {

                 printf("Odemeyi nasil yapmak istersiniz? On odemeli islem icin O, Havale islem icin H,  Standart odeme icin S harfini giriniz:");
                   scanf(" %c",&odeme);

                   switch(odeme)
                   {
                       case 'o':

                       {
                           ucret=kisi*40-(15*kisi*40)/100;
                           printf("UCRET=%.2f$",ucret);
                      break; }

                     case 'h':

                     {
                         if(kisi>=1 && kisi<=3)
                         {
                             ucret=kisi*40;
                             printf("UCRET=%.2f$",ucret);
                         }

                         else if(kisi==4)
                         {
                             ucret=3*40+40*0.5;
                             printf("UCRET=%.2f$",ucret);
                         }
                     break;}
                     case 's':

                     {
                         ucret=kisi*40;
                         printf("UCRET=%.2f$",ucret);
                     break;}

                   break;}

               }
               else if(kisi>4)
               {
                 if((kisi-4)>=4)
                 {
                 c=kisi/4;
                 c++;
                 }
                 kisi1=kisi;
                 for(z=0;z<=c;z++)
                 {

                     kisi=kisi-4;
                     printf("Geriye kalan %d kisi icin lutfen oda numarasi seciniz:",kisi);
                     scanf("%d",&odano);
                     if(kisi%4==kisi)
                     break;
                 }
                 printf("Odemeyi nasil yapmak istersiniz? On odemeli islem icin O, Havale islem icin H,  Standart odeme icin S harfini giriniz:");
                   scanf(" %c",&odeme);

                   switch(odeme)
                   {
                       case 'o':

                       {
                           ucret=kisi1*40-(15*kisi1*40)/100;
                           printf("UCRET=%.2f$",ucret);
                      break; }

                     case 'h':

                     {
                         if(kisi1==5)
                         {
                             ucret=4*40+40*0.5;
                             printf("UCRET=%.2f$",ucret);
                         }

                         else if(kisi1>5)
                         {
                             ucret=kisi1*40-(40*75)/100;
                             printf("UCRET=%.2f$",ucret);
                         }
                     break;}
                     case 's':

                     {
                         ucret=kisi1*40;
                         printf("UCRET=%.2f$",ucret);
                     break;}

                   break;}
                }


               break;}
               case 'L':
               case 'l':

            {

               for(i=6;i<=100;i+=6)
               {
                   printf("%d--",ldo[i][hft]);
               }
               printf("nolu odalar Large_Deluxe Odalara dahildir, birisini seciniz:");scanf("%d",&odano);

               printf("Lutfen kac kisi kalacaginizi giriniz:"); scanf("%d",&kisi);
               if(kisi>=1 && kisi<=7)
               {

                   printf("Odemeyi nasil yapmak istersiniz? On odemeli islem icin O, Havale islem icin H,  Standart odeme icin S harfini giriniz:");
                   scanf(" %c",&odeme);

                   switch(odeme)
                   {
                       case 'o':

                       {
                           ucret=kisi*300-(15*kisi*300)/100;
                           printf("UCRET=%.2f$",ucret);
                      break; }

                     case 'h':

                     {
                         if(kisi>=1 && kisi<=3)
                         {
                             ucret=kisi*300;
                             printf("UCRET=%.2f$",ucret);
                         }

                         else if(kisi>3 && kisi<=5)
                         {
                             ucret=kisi*300-(300*0.5);
                             printf("UCRET=%.2f$",ucret);
                         }
                         else if(kisi>5)
                         {
                             ucret=kisi*300-(300*75)/100;
                             printf("UCRET=%.2f$",ucret);
                         }
                     break;}
                     case 's':

                     {
                         ucret=kisi*300;
                         printf("UCRET=%.2f$",ucret);
                     break;
                     }

                   break;}

               }
               else if(kisi>7)
               {
                 if((kisi-7)>=7)
                 {
                 c=kisi/7;
                 c++;
                 }
                 kisi1=kisi;
                 for(z=0;z<=c;z++)
                 {

                     kisi=kisi-7;
                     printf("Geriye kalan %d kisi icin lutfen oda numarasi seciniz:",kisi);
                     scanf("%d",&odano);
                     if(kisi%7==kisi)
                     break;
                 }
                 printf("Odemeyi nasil yapmak istersiniz? On odemeli islem icin O, Havale islem icin H,  Standart odeme icin S harfini giriniz:");
                   scanf(" %c",&odeme);

                   switch(odeme)
                   {
                       case 'o':
                       {
                           ucret=kisi1*300-(15*kisi1*300)/100;
                           printf("UCRET=%.2f$",ucret);
                      break;
                      }

                     case 'h':

                     {
                        ucret=kisi1*300-(300*75)/100;
                        printf("UCRET=%.2f",ucret);

                     break;
                     }
                     case 's':

                     {
                         ucret=kisi1*300;
                         printf("UCRET=%.2f$",ucret);
                     break;
                     }
                   break;}
                }
               break;}
               case 'd':
           {
               for(i=2;i<=100;i+=2)
               {if(i%6==0)
               {
                   continue;
               }
               printf("%d--",deoda[i][hft]);
               }
               printf("nolu odalar Deluxe Odalara dahildir, birini seciniz:");scanf("%d",&odano);
               printf("Lutfen kac kisi kalacaginizi giriniz:"); scanf("%d",&kisi);
               if(kisi>=1 && kisi<=4)
               {

                   printf("Odemeyi nasil yapmak istersiniz? On odemeli islem icin O, Havale islem icin H,  Standart odeme icin S harfini giriniz:");
                   scanf(" %c",&odeme);

                   switch(odeme)
                   {
                       case 'o':

                       {
                           ucret=kisi*75-(15*kisi*75)/100;
                           printf("UCRET=%.2f$",ucret);
                      break; }

                     case 'h':

                     {
                         if(kisi>=1 && kisi<=3)
                         {
                             ucret=kisi*75;
                             printf("UCRET=%.2f$",ucret);
                         }

                         else if(kisi==4)
                         {
                             ucret=3*75+75*0.5;
                             printf("UCRET=%.2f$",ucret);
                         }
                     break;}
                     case 's':
                     {
                         ucret=kisi*75;
                         printf("UCRET=%.2f$",ucret);
                     break;}

                   break;}

               }
               else if(kisi>4)
               {
                 if((kisi-4)>=4)
                 {
                 c=kisi/4;
                 c++;
                 }
                 kisi1=kisi;
                 for(z=0;z<=c;z++)
                 {

                     kisi=kisi-4;
                     printf("Geriye kalan %d kisi icin lutfen oda numarasi seciniz:",kisi);
                     scanf("%d",&odano);
                     if(kisi%4==kisi)
                     break;
                 }
                 printf("Odemeyi nasil yapmak istersiniz? On odemeli islem icin O, Havale islem icin H,  Standart odeme icin S harfini giriniz:");
                   scanf(" %c",&odeme);

                   switch(odeme)
                   {
                       case 'o':

                       {
                           ucret=kisi1*75-(15*kisi1*75)/100;
                           printf("UCRET=%.2f$",ucret);
                      break; }

                     case 'h':

                     {
                         if(kisi1==5)
                         {
                             ucret=4*75+75*0.5;
                             printf("UCRET=%.2f$",ucret);
                         }

                         else if(kisi1>5)
                         {
                             ucret=kisi1*75-(75*75)/100;
                             printf("UCRET=%.2f$",ucret);
                         }
                     break;}
                     case 's':

                     {
                         ucret=kisi1*75;
                         printf("UCRET=%.2f$",ucret);
                     break;}

                   break;}
                }
               break;}
          }
            printf("Rezervasyona devam edecek misiniz?\n Devam etmek icin E ye Kapatmak icin H ye basin.");scanf(" %c",&devam);
           break;}
           case 'y':
   {
       do{
            printf("Yaz ayinin kacinci haftasinda konaklama yapilacagini giriniz:"); scanf("%d",&hft);
        sayac++;
        if((hft>=1)&&(hft<=12))
        break;
        if(sayac==4)
        {

      exit(0);
        }
       }while((hft>=12||hft<=1)&&sayac<4);

         printf("Lutfen oda tipini seciniz:\n");
           printf("Standart Oda icin 'S', Deluxe oda icin 'D', Large Deluxe oda icin 'L' kodunu giriniz:");
           scanf(" %c",&secim1);

           switch(secim1)
          {

           case 's':

           {

               for(i=1;i<=100;i+=2)
               {
                   printf("%d--",so[i][hft]);
               }
               printf("nolu odalar Standart Odalara dahildir, birini seciniz:");scanf("%d",&odano);

               printf("Lutfen kac kisi kalacaginizi giriniz:"); scanf("%d",&kisi);
               if(kisi>=1 && kisi<=4)
               {

                 printf("Odemeyi nasil yapmak istersiniz? On odemeli islem icin O, Havale islem icin H,  Standart odeme icin S harfini giriniz:");
                   scanf(" %c",&odeme);

                   switch(odeme)
                   {
                       case 'o':

                       {
                           ucret=kisi*60-(15*kisi*60)/100;
                           printf("UCRET=%.2f$",ucret);
                      break; }

                     case 'h':

                     {
                         if(kisi>=1 && kisi<=3)
                         {
                             ucret=kisi*60;
                             printf("UCRET=%.2f$",ucret);
                         }

                         else if(kisi==4)
                         {
                             ucret=3*60+60*0.5;
                             printf("UCRET=%.2f$",ucret);
                         }
                     break;}
                     case 's':

                     {
                         ucret=kisi*60;
                         printf("UCRET=%.2f$",ucret);
                     break;}

                   break;}

               }
               else if(kisi>4)
               {
                 if((kisi-4)>=4)
                 {
                 c=kisi/4;
                 c++;
                 }
                 kisi1=kisi;
                 for(z=0;z<=c;z++)
                 {

                     kisi=kisi-4;
                     printf("Geriye kalan %d kisi icin lutfen oda numarasi seciniz:",kisi);
                     scanf("%d",&odano);
                     if(kisi%4==kisi)
                     break;
                 }
                 printf("Odemeyi nasil yapmak istersiniz? On odemeli islem icin O, Havale islem icin H,  Standart odeme icin S harfini giriniz:");
                   scanf(" %c",&odeme);

                   switch(odeme)
                   {
                       case 'o':

                       {
                           ucret=kisi1*60-(15*kisi1*60)/100;
                           printf("UCRET=%.2f$",ucret);
                      break; }

                     case 'h':

                     {
                         if(kisi1==5)
                         {
                             ucret=4*60+60*0.5;
                             printf("UCRET=%.2f$",ucret);
                         }

                         else if(kisi1>5)
                         {
                             ucret=kisi1*60-(60*75)/100;
                             printf("UCRET=%.2f$",ucret);
                         }
                     break;}
                     case 's':

                     {
                         ucret=kisi1*60;
                         printf("UCRET=%.2f$",ucret);
                     break;}

                   break;}
                }


               break;}
               case 'L':
               case 'l':

            {

               for(i=6;i<=100;i+=6)
               {
                   printf("%d--",ldo[i][hft]);
               }
               printf("nolu odalar Large_Deluxe Odalara dahildir, birisini seciniz:");scanf("%d",&odano);

               printf("Lutfen kac kisi kalacaginizi giriniz:"); scanf("%d",&kisi);
               if(kisi>=1 && kisi<=7)
               {

                   printf("Odemeyi nasil yapmak istersiniz? On odemeli islem icin O, Havale islem icin H,  Standart odeme icin S harfini giriniz:");
                   scanf(" %c",&odeme);

                   switch(odeme)
                   {
                       case 'o':

                       {
                           ucret=kisi*400-(15*kisi*400)/100;
                           printf("UCRET=%.2f$",ucret);
                      break; }

                     case 'h':

                     {
                         if(kisi>=1 && kisi<=3)
                         {
                             ucret=kisi*400;
                             printf("UCRET=%.2f$",ucret);
                         }

                         else if(kisi>3 && kisi<=5)
                         {
                             ucret=kisi*400-(400*0.5);
                             printf("UCRET=%.2f$",ucret);
                         }
                         else if(kisi>5)
                         {
                             ucret=kisi*400-(400*75)/100;
                             printf("UCRET=%.2f$",ucret);
                         }
                     break;}
                     case 's':
                     {
                         ucret=kisi*400;
                         printf("UCRET=%.2f$",ucret);
                     break;
                     }
                   break;}
               }
               else if(kisi>7)
               {
                 if((kisi-7)>=7)
                 {
                 c=kisi/7;
                 c++;
                 }
                 kisi1=kisi;
                 for(z=0;z<=c;z++)
                 {

                     kisi=kisi-7;
                     printf("Geriye kalan %d kisi icin lutfen oda numarasi seciniz:",kisi);
                     scanf("%d",&odano);
                     if(kisi%7==kisi)
                     break;
                 }
                 printf("Odemeyi nasil yapmak istersiniz? On odemeli islem icin O, Havale islem icin H,  Standart odeme icin S harfini giriniz:");
                   scanf(" %c",&odeme);
                   switch(odeme)
                   {
                       case 'o':
                       {
                           ucret=kisi1*400-(15*kisi1*400)/100;
                           printf("UCRET=%.2f$",ucret);
                      break;
                      }
                     case 'h':
                     {
                        ucret=kisi1*400-(400*75)/100;
                        printf("UCRET=%.2f",ucret);
                     break;
                     }
                     case 's':
                     {
                         ucret=kisi1*400;
                         printf("UCRET=%.2f$",ucret);
                     break;
                     }
                   break;}
                }
               break;}
               case 'd':
           {
               for(i=2;i<=100;i+=2)
               {if(i%6==0)
               {
                   continue;
               }
               printf("%d--",deoda[i][hft]);
               }
               printf("nolu odalar Deluxe Odalara dahildir, birini seciniz:");scanf("%d",&odano);
               printf("Lutfen kac kisi kalacaginizi giriniz:"); scanf("%d",&kisi);
               if(kisi>=1 && kisi<=4)
               {
                   printf("Odemeyi nasil yapmak istersiniz? On odemeli islem icin O, Havale islem icin H,  Standart odeme icin S harfini giriniz:");
                   scanf(" %c",&odeme);
                   switch(odeme)
                   {
                       case 'o':
                       {
                           ucret=kisi*90-(15*kisi*90)/100;
                           printf("UCRET=%.2f$",ucret);
                      break; }
                     case 'h':
                     {
                         if(kisi>=1 && kisi<=3)
                         {
                             ucret=kisi*90;
                             printf("UCRET=%.2f$",ucret);
                         }
                         else if(kisi==4)
                         {
                             ucret=3*90+90*0.5;
                             printf("UCRET=%.2f$",ucret);
                         }
                     break;}
                     case 's':
                     {
                         ucret=kisi*90;
                         printf("UCRET=%.2f$",ucret);
                     break;}
                   break;}
               }
               else if(kisi>4)
               {
                 if((kisi-4)>=4)
                 {
                 c=kisi/4;
                 c++;
                 }
                 kisi1=kisi;
                 for(z=0;z<=c;z++)
                 {
                     kisi=kisi-4;
                     printf("Geriye kalan %d kisi icin lutfen oda numarasi seciniz:",kisi);
                     scanf("%d",&odano);
                     if(kisi%4==kisi)
                     break;
                 }
                 printf("Odemeyi nasil yapmak istersiniz? On odemeli islem icin O, Havale islem icin H,  Standart odeme icin S harfini giriniz:");
                   scanf(" %c",&odeme);
                   switch(odeme)
                   {
                       case 'o':
                       {
                           ucret=kisi1*90-(15*kisi1*90)/100;
                           printf("UCRET=%.2f$",ucret);
                      break; }
                     case 'h':
                     {
                         if(kisi1==5)
                         {
                             ucret=4*90+90*0.5;
                             printf("UCRET=%.2f$",ucret);
                         }
                         else if(kisi1>5)
                         {
                             ucret=kisi1*90-(90*75)/100;
                             printf("UCRET=%.2f$",ucret);
                         }
                     break;}
                     case 's':
                     {
                         ucret=kisi1*90;
                         printf("UCRET=%.2f$",ucret);
                     break;}
                   break;}
                }
               break;}
          }
            printf("Rezervasyona devam edecek misiniz?\n Devam etmek icin E ye Kapatmak icin H ye basin.");scanf(" %c",&devam);
           break;
           }
   break;}
   }
   while(devam=='E'||devam=='e');
    return 0;
}
