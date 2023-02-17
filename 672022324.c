#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
#define PI 3.14

int cont;

void gotoxy(int X, int y)
{
    COORD coord;
    coord.X = X;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void penjumlahan(){
    int a,b,hasil;
        ngulang:
        printf("\n1. Penjumlahan :\n");
        printf("Input bilangan pertama : ");
        scanf("%d", &a);
        printf("Input bilangan kedua   : ");
        scanf("%d", &b);
        hasil = a + b;
        printf("Hasil:\t\t\t   %d\n", hasil);

         printf("Ingin Mengulang Program? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto ngulang;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto *menuporolan();
                }
}
void pengurangan(){
    int a,b,hasil;
        ngulang:
        printf("\n1. Pengurangan :\n");
        printf("Input bilangan pertama : ");
        scanf("%d", &a);
        printf("Input bilangan kedua   : ");
        scanf("%d", &b);
        hasil = a - b;
        printf("Hasil:\t\t\t   %d\n", hasil);

         printf("Ingin Mengulang Program? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto ngulang;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto *menuporolan();
                }
}
void perkalian(){
        int a,b,hasil;
        ngulang:
        printf("\n1. Perkalian :\n");
        printf("Input bilangan pertama : ");
        scanf("%d", &a);
        printf("Input bilangan kedua   : ");
        scanf("%d", &b);
        hasil = a * b;
        printf("Hasil:\t\t\t   %d\n", hasil);

         printf("Ingin Mengulang Program? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto ngulang;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto *menuporolan();
                }
}
void pembagian(){
        float c,d,hasilbagi;
        ngulang:
        printf("\n1. Pembagian :\n");
        printf("Input bilangan pertama : ");
        scanf("%f", &c);
        printf("Input bilangan kedua   : ");
        scanf("%f", &d);
        hasilbagi = c / d;
        printf("Hasil:\t\t\t   %.2f\n", hasilbagi);

        printf("Ingin Mengulang Program? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto ngulang;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto *menuporolan();
                }
}
void Sinus(){
   double inputan, result;
    ngulang:
    printf("\nInput derajat sinus : ");
    scanf("%lf", &inputan);
   // Converting to radian
   inputan = (inputan * PI) / 180;
   result = sin(inputan);

   printf("Hasil sinus adalah = %.2lf\n", result);

                printf("\nIngin Mengulang Program? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto ngulang;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto *menusincostan();
                }
}
void cosinus(){
   double arg, result;
    ngulang:
    printf("\nMengulang derajat cosinus : ");
    scanf("%lf", &arg);
   // Converting to radian
   arg = (arg * PI) / 180;
   result = cos(arg);

   printf("Hasil cosinus adalah = %.2lf\n", result);

                printf("\nIngin Mengulang Program? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto ngulang;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto *menusincostan();
                }
}
void Tangen(){
    double arg, result;
    ngulang:
    printf("\nInput derajat sinus : ");
    scanf("%lf", &arg);
   // Converting to radian
   arg = (arg * PI) / 180;
   result = tan(arg);

   printf("Hasil sinus adalah = %.2lf\n", result);
                printf("\nIngin Mengulang Program? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto ngulang;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto *menusincostan();
                }
}

void kel_Persegi(){
    float a, b, hasil;
        ngulang:
        printf("\n1. Keliling Persegi :\n");
        printf("Input Panjang Persegi : ");
        scanf("%f", &a);
        printf("Input Lebar Persegi   : ");
        scanf("%f", &b);
        hasil = 2*(a+b);
        printf("Keliling Persegi Adalah = %.2f\n", hasil);

        printf("Ingin Mengulang Program? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto ngulang;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto *menukeliling();
                }
}
void kel_Trapesium(){
    float a,b,c,hasil,tinggi=0.5,tampung;
        ngulang:
        printf("\n1. Keliling Trapesium :\n");
        printf("Input Sisi Atas Trapesium Sama Kaki     : ");
        scanf("%f", &a);
        printf("Input Sisi Bawah Trapesium Sama Kaki    : ");
        scanf("%f", &b);
        printf("Input Sisi Miring Trapesium Sama Kaki   : ");
        scanf("%f", &c);
        hasil=tinggi*(a+b);
        tampung=hasil;
        //tinggi=1/2*(a+b);
        //printf("\n%.2f", tinggi);
        printf("Keliling Trapesium Sama Kaki adalah = %.2f\n", tampung+a+b+c);

        printf("Ingin Mengulang Program? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto ngulang;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto *menukeliling();
                }
}
void kel_LayangLayang(){
    float a,b,hasil;
        ngulang:
        printf("\n1. Keliling Layang-Layang :\n");
        printf("Input Panjang Sisi Atas      : ");
        scanf("%f", &a);
        printf("Input Panjang Sisi Bawah     : ");
        scanf("%f", &b);
        hasil =2*(a+b);
        printf("Keliling Layang-Layang adalah = %.2f\n", hasil);

        printf("Ingin Mengulang Program? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto ngulang;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto *menukeliling();
                }
}
void kel_Lingkaran(){
    float c,d,tampung1,tampung2;
    float phi =3.14;
        ngulang:
        printf("\n1. Lingkaran :\n");
        printf("Input Panjang Diameter    : ");
        scanf("%f", &c);
        printf("Input Panjang Jari-jari   : ");
        scanf("%f", &d);
        tampung1=phi*c;
        tampung2=2*(phi*d);
        printf("Keliling Lingkaran berdasar Diameter    = %.2f\n", tampung1);
        printf("Keliling Lingkaran berdasar Jari-Jari   = %.2f\n", tampung2);

        printf("Ingin Mengulang Program? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto ngulang;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto *menukeliling();
                }
}
void Luas_Persegi(){
    float a, b, hasil;
        ngulang:
        printf("\n1. Luas :\n");
        printf("Input Panjang Persegi : ");
        scanf("%f", &a);
        printf("Input Lebar Persegi   : ");
        scanf("%f", &b);
        hasil =a*b;
        printf("Luas Persegi Adalah = %.2f\n", hasil);

        printf("Ingin Mengulang Program? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto ngulang;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto *menuluasbangundtr();
                }
}
void Luas_Trapesium(){
    float a,b,c,hasil,tinggi=0.5,tampung;
        ngulang:
        printf("\n1. Luas Trapesium :\n");
        printf("Input Sisi Atas Trapesium Sama Kaki      : ");
        scanf("%f", &a);
        printf("Input Sisi Bawah Trapesium Sama Kaki     : ");
        scanf("%f", &b);
        printf("Input Sisi Miring Trapesium Sama Kaki    : ");
        scanf("%f", &c);
        hasil=tinggi*(a+b);
        tampung=hasil;
        printf("Luas Trapesium Sama Kaki adalah = %.2f\n", 0.5*(a+b)*tampung);

        printf("Ingin Mengualang Program? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto ngulang;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto *menuluasbangundtr();
                }
}
void Luas_LayangLayang(){
    float a,b,hasil;
        ngulang:
        printf("\n1. Luas Layang-Layang :\n");
        printf("Input Panjang Sisi Atas      : ");
        scanf("%f", &a);
        printf("Input Panjang Sisi Bawah     : ");
        scanf("%f", &b);
        hasil =0.5*(a*b);
        printf("Luas Layang-Layang adalah = %.2f\n", hasil);

        printf("Ingin Mengulang Program? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto ngulang;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto *menuluasbangundtr();
                }
}
void Luas_Lingkaran(){
    float c,d,tampung1,tampung2;
    float phi=3.14;
        ngulang:
        printf("\n1. Luas Lingkaran :\n");
        printf("Input Panjang Diameter    : ");
        scanf("%f", &c);
        printf("Input Panjang Jari-jari   : ");
        scanf("%f", &d);
        tampung1=0.25*phi*(c*c);
        tampung2=phi*(d*d);
        printf("Keliling Lingkaran berdasar Diameter    = %.2f\n", tampung1);
        printf("Keliling Lingkaran berdasar Jari-Jari   = %.2f\n", tampung2);

        printf("Ingin Mengulang Program? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto ngulang;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto *menuluasbangundtr();
                }
}
void Volum_Kubus(){
    float a;
        ngulang:
        printf("\n1. Volume Kubus :\n");
        printf("Input Panjang Sisi Kubus : ");
        scanf("%f", &a);
        printf("Volume Kubus adalah = %.2f\n", a*a*a);

        printf("Ingin Mengulang Program? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto ngulang;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto *menuvolum();
                }
}
void Volum_Prisma(){
    float a,b,c,d,e,f,hasil,tinggi=0.5,tampung,phi=3.14;
        ngulang:
        printf("\n1. Volum Prisma :\n");
        printf("Input Sisi Persegi        : ");
        scanf("%f", &a);
        //kelompok segitiga
        printf("Input Lebar Alas Segitiga : ");
        scanf("%f", &b);
        printf("Input Tinggi Segitiga     : ");
        scanf("%f", &c);
        //kelompok lingkaran
        printf("Input Jari-Jari Lingkaran :");
        scanf("%f", &d);
        printf("Input Diameter Lingkaran  :");
        scanf("%f", &e);
        printf("Input Tinggi Prisma       :");
        scanf("%f", &f);
        printf("Volume Prisma Persegi adalah                = %.2f\n", a*a*a);
        printf("Volume Prisma Segitiga adalah               = %.2f\n", ((b*c)/2)*f);
        printf("Volume Silinder berdasar Jari-Jari adalah   = %.2f\n", phi*(d*d*f));
        printf("Volume Silinder berdasar Diameter adalah    = %.2f\n", 0.25*phi*(e*e)*f);

        printf("Ingin Mengulang Program? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto ngulang;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto *menuvolum();
                }
}
void Volum_Limas(){
    float a,b,c,d,e,f,hasil,tinggi=0.5,tampung,phi=3.14,luas_alas,rdiameter;
        ngulang:
        printf("\n1. Volum Prisma :\n");
        printf("Input Sisi Persegi        : ");
        scanf("%f", &a);
        //kelompok segitiga
        printf("Input Lebar Alas Segitiga : ");
        scanf("%f", &b);
        printf("Input Tinggi Segitiga     : ");
        scanf("%f", &c);
        //kelompok lingkaran
        printf("Input Jari-Jari Lingkaran :");
        scanf("%f", &d);
        printf("Input Diameter Lingkaran  :");
        scanf("%f", &e);
        printf("Input Tinggi Limas        :");
        scanf("%f", &f);
        luas_alas=0.5*b*f;
        rdiameter=e/2;
        printf("Volume Limas Persegi adalah                     = %.2f\n", 0.33*a*a*f);
        printf("Volume Limas Segitiga adalah                    = %.2f\n", 0.33*luas_alas*f);
        printf("Volume Limas Silinder berdasar Jari-Jari adalah = %.2f\n", phi*d*d*f);
        printf("Volume Limas Silinder berdasar Diameter adalah  = %.2f\n", phi*rdiameter*rdiameter*f);

        printf("Ingin Mengulang Program? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto ngulang;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto *menuvolum();
                }
}
void Volum_Lingkaran(){
    float c,d,rdiameter,tampung2;
    float phi=3.14;
        ngulang:
        printf("\n1. Volume Bola :\n");
        printf("Input Jari-Jari Lingkaran : ");
        scanf("%f", &c);
        printf("Input Diameter Lingkaran  : ");
        scanf("%f", &d);
        rdiameter=d/2;
        printf("Keliling Lingkaran berdasar Jari-Jari   = %.2f\n", 1.33*phi*c*c*c);
        printf("Keliling Lingkaran berdasar Diameter    = %.2f\n", 1.33*phi*rdiameter*rdiameter*rdiameter);

        printf("Ingin Mengulang Program? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto ngulang;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto *menuvolum();
                }

}
void akar(){
    float inputan;
    double tampung;
        ngulang:
        printf ("Masukkan bilangan yang akan diakar : ");
        scanf (" %f", &inputan);
        // sqrt(squareroot
        tampung = sqrt(inputan);
        printf (" \nHasil akar dari %.2f adalah %.2f\n", inputan, tampung);

        printf("Ingin Mengulang Program? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto ngulang;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto*main();
                }



}
void menuporolan(){
                //Menu penjumlahan

        int input,inMenu,y=1;
        int up=24,down=25;
        int menuplus;
        char pil;

            system("mode con: cols=120 lines=30");
            system("cls");
        do{
        if(y==0){
         y++;
         continue;
        }
        if(y==6){
            y--;
            continue;
        }
        gotoxy(0,2);
        printf("   ");
        for(int a=0;a<41;a++){printf("=");}
        printf("\n   ->>             Kalkulator            <<-\n   ");
        for(int a=0;a<41;a++){printf("=");}
        printf("\n   +                                       +\n");
        printf("   +         1. Perkalian                  +\n");
        printf("   +         2. Pembagian                  +\n");
        printf("   +         3. Penjumlahan                +\n");
        printf("   +         4. Pengurangan                +\n");
        printf("   +         5. Kembali ke Menu utama      +\n");
        printf("   +                                       +\n   ");
        for(int a=0;a<41;a++){printf("=");}
        gotoxy(8,5+y);printf("=>"); //printf("masuk poro");
            pil=getch();
            switch(pil){
            case 72:
                y--;
                break;
            case 80:
                y++;
                break;
            default:
                break;
            }
        }while((int)pil!=13);
        inMenu=y;
        system("cls");
        switch (inMenu){
            case 1:
                perkalian();
                break;
            case 2 :
                pembagian();
                break;
            case 3 :
                penjumlahan();
                break;
            case 4 :
                pengurangan();
                break;
            case 5 :
                system("cls");
                goto*main();


        }
}

void menusincostan(){

        //Menu SinCostan

        int input,inMenu,y=1;
        int up=24,down=25;
        int menuplus;
        char pil;

            system("mode con: cols=120 lines=30");
            system("cls");
        do{
        if(y==0){
         y++;
         continue;
        }
        if(y==5){
            y--;
            continue;
        }
        gotoxy(0,2);
        printf("   ");
        for(int a=0;a<41;a++){printf("=");}
        printf("\n   ->>             Sincostan             <<-\n   ");
        for(int a=0;a<41;a++){printf("=");}
        printf("\n   +                                       +\n");
        printf("   +         1. Sinus                      +\n");
        printf("   +         2. Cosinus                    +\n");
        printf("   +         3. Tangen                     +\n");
        printf("   +         4. Kembali ke Menu utama      +\n");
        printf("   +                                       +\n   ");
        for(int a=0;a<41;a++){printf("=");}
        gotoxy(8,5+y);printf("=>"); //printf("masuk poro");
            pil=getch();
            switch(pil){
            case 72:
                y--;
                break;
            case 80:
                y++;
                break;
            default:
                break;
            }
        }while((int)pil!=13);
        inMenu=y;
        system("cls");
        switch (inMenu){
            case 1:
                Sinus();
                break;
            case 2:
                cosinus();
                break;
            case 3:
                Tangen();
                break;
            case 4:
                system("cls");
                goto*main();


        }

}

void menukeliling(){


        //Menu Keliling Luas Volume

        int input,inMenu,y=1;
        int up=24,down=25;
        int menuplus;
        char pil;

            system("mode con: cols=120 lines=30");
            system("cls");
        do{
        if(y==0){
         y++;
         continue;
        }
        if(y==5){
            y--;
            continue;
        }
        gotoxy(0,2);
        printf("   ");
        for(int a=0;a<55;a++){printf("=");}
        printf("\n   ->>          Menghitung Keliling Luas Volume        <<-\n   ");
        for(int a=0;a<55;a++){printf("=");}
        printf("\n   +                                                    +\n");
        printf("   +             1. Keliling Bangun Datar               +\n");
        printf("   +             2. Luas Bangun Datar                   +\n");
        printf("   +             3. Volume Bangun Ruang                 +\n");
        printf("   +             4. Kembali ke Menu utama               +\n");
        printf("   +                                                    +\n");
        for(int a=0;a<55;a++){printf("=");}
        gotoxy(8,5+y);printf("=>"); //printf("masuk poro");
            pil=getch();
            switch(pil){
            case 72:
                y--;
                break;
            case 80:
                y++;
                break;
            default:
                break;
            }
        }while((int)pil!=13);
        inMenu=y;
        system("cls");
        switch (inMenu){
            case 1:
                menukelilingbangundtr();
                break;
            case 2:
                menuluasbangundtr();
                break;
            case 3:
                menuvolum();
                break;
            case 4:
                system("cls");
                goto*main();


        }
}

void menukelilingbangundtr(){

    //Menu Keliling Bangun Datar

        int input,inMenu,y=1;
        int up=24,down=25;
        int menuplus;
        char pil;

            system("mode con: cols=120 lines=30");
            system("cls");
        do{
        if(y==0){
         y++;
         continue;
        }
        if(y==6){
            y--;
            continue;
        }
        gotoxy(0,2);
        printf("   ");
        for(int a=0;a<50;a++){printf("=");}
        printf("\n   ->>            Keliling Bangun Datar           <<-\n   ");
        for(int a=0;a<50;a++){printf("=");}
        printf("\n   +                                                +\n");
        printf("   +         1. Keliling Persegi                    +\n");
        printf("   +         2. Keliling Trapesium                  +\n");
        printf("   +         3. Keliling Layang-Layang              +\n");
        printf("   +         4. Keliling Lingkaran                  +\n");
        printf("   +         5. Kembali ke Menu Sebelumnya          +\n");
        printf("   +                                                +\n   ");
        for(int a=0;a<50;a++){printf("=");}
        gotoxy(8,5+y);printf("=>"); //printf("masuk poro");
            pil=getch();
            switch(pil){
            case 72:
                y--;
                break;
            case 80:
                y++;
                break;
            default:
                break;
            }
        }while((int)pil!=13);
        inMenu=y;
        system("cls");
        switch (inMenu){
             case 1:
                    kel_Persegi();
                break;
             case 2 :
                    kel_Trapesium();
                break;
             case 3 :
                    kel_LayangLayang();
                break;
             case 4 :
                    kel_Lingkaran();
                break;
             case 5 :
                system("cls");
                menukeliling();


        }
}

void menuluasbangundtr(){

    //Menu Luas Bangun Datar

        int input,inMenu,y=1;
        int up=24,down=25;
        int menuplus;
        char pil;

            system("mode con: cols=120 lines=30");
            system("cls");
        do{
        if(y==0){
         y++;
         continue;
        }
        if(y==6){
            y--;
            continue;
        }
        gotoxy(0,2);
        printf("   ");
        for(int a=0;a<50;a++){printf("=");}
        printf("\n   ->>              Luas Bangun Datar             <<-\n   ");
        for(int a=0;a<50;a++){printf("=");}
        printf("\n   +                                                +\n");
        printf("   +         1. Luas Persegi                        +\n");
        printf("   +         2. Luas Trapesium                      +\n");
        printf("   +         3. Luas Layang-Layang                  +\n");
        printf("   +         4. Luas Lingkaran                      +\n");
        printf("   +         5. Kembali ke Menu Sebelumnya          +\n");
        printf("   +                                                +\n");
        for(int a=0;a<50;a++){printf("=");}
        gotoxy(8,5+y);printf("=>"); //printf("masuk poro");
            pil=getch();
            switch(pil){
            case 72:
                y--;
                break;
            case 80:
                y++;
                break;
            default:
                break;
            }
        }while((int)pil!=13);
        inMenu=y;
        system("cls");
        switch (inMenu){
             case 1:
                    Luas_Persegi();
                break;
             case 2 :
                    Luas_Trapesium();
                break;
             case 3 :
                    Luas_LayangLayang();
                break;
             case 4 :
                    Luas_Lingkaran();
                break;
             case 5 :
                system("cls");
                menukeliling();


        }

}

void menuvolum(){

    //Menu Volum Bangun Ruang

        int input,inMenu,y=1;
        int up=24,down=25;
        int menuplus;
        char pil;

            system("mode con: cols=120 lines=30");
            system("cls");
        do{
        if(y==0){
         y++;
         continue;
        }
        if(y==6){
            y--;
            continue;
        }
        gotoxy(0,2);
        printf("   ");
        for(int a=0;a<50;a++){printf("=");}
        printf("\n   ->>             Volume Bangun Ruang            <<-\n");
        for(int a=0;a<50;a++){printf("=");}
        printf("\n   +                                                +\n");
        printf("   +         1. Volume Kubus                        +\n");
        printf("   +         2. Volume Prisma                       +\n");
        printf("   +         3. Volume Limas                        +\n");
        printf("   +         4. Volume Bola                         +\n");
        printf("   +         5. Kembali ke Menu Utama               +\n");
        printf("   +                                                +\n");
        for(int a=0;a<50;a++){printf("=");}
        gotoxy(8,5+y);printf("=>"); //printf("masuk poro");
            pil=getch();
            switch(pil){
            case 72:
                y--;
                break;
            case 80:
                y++;
                break;
            default:
                break;
            }
        }while((int)pil!=13);
        inMenu=y;
        system("cls");
        switch (inMenu){
             case 1:
                    Volum_Kubus();
                break;
             case 2 :
                    Volum_Prisma();
                break;
             case 3 :
                    Volum_Limas();
                break;
             case 4 :
                    Volum_Lingkaran();
                break;
             case 5 :
                system("cls");
                menukeliling();


        }

}

main(){
    int input,inMenu,y=1;
    int up=24,down=25;
    int menuplus;
    char pil;

    system("mode con: cols=120 lines=30");
    system("cls");
    do{
    if(y==0){
         y++;
         continue;
    }
        if(y==6){
            y--;
            continue;
        }
    gotoxy(0,2);
    printf("   ");
    for(int a=0;a<41;a++){printf("=");}
    printf("\n   ->>            Kalkulator             <<- \n   ");
    for(int a=0;a<41;a++){printf("=");}
    printf("\n   +                                       +\n");
    printf("   +         1. Matematika Dasar           +\n");
    printf("   +         2. SinCosTan                  +\n");
    printf("   +         3. Hitung Keliling dan Luas   +\n");
    printf("   +         4. Hitung Akar Kuadrat        +\n");
    printf("   +         5. Exit                       +\n");
    printf("   +                                       +\n   ");
    for(int a=0;a<41;a++){printf("=");}
    gotoxy(8,5+y);printf("=>");
            pil=getch();
            switch(pil){
            case 72:
                y--;
                break;
            case 80:
                y++;
                break;
            default:
                break;
    }
    }while((int)pil!=13);
    inMenu=y;
    system("cls");

    switch (inMenu){
    case 1:{
            menuporolan();
        break;
    }
    case 2:{
            menusincostan();
        break;
    }
    case 3:{
            menukeliling();
        break;
    }
    case 4:{
            akar();
        break;
     }
    default : printf("\t\t\t\t\t\t=================\n");
              printf("\t\t\t\t\t\t=  Terimakasih  =\n");
              printf("\t\t\t\t\t\t=================\n");exit(0);
    }
}
