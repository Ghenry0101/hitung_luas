#include<stdio.h>
#include<conio.h>
    float luasPersegi(float s){
        float hasil;
        hasil = s*s;
        return hasil;
    }

    float luasSegitiga(float a, float t){
        return 0.5*a*t;
    }

    float luasLingkaran(float r){
        return 3.14*r*r; 
    }
    float luasPersegipanjang(float p, float l){
        return p*l;
    }
    float luasJajargenjang(float a, float t){
        return a*t;
    }
    float luasBelahketupat(float d1, float d2){
        return 0.5*d1*d2;
    }
    float luasLayanglayang(float d1, float d2){
        return 0.5*d1*d2;
    }
    float luasTrapesium(float a, float b, float h){
        return 0.5 * (a + b) * h;
    }

int main(){
    //float s;
    //printf("masukkan nilai sisi \t:");
    //scanf("%f",&s);
    //printf("luas persegi \t\t: %02.0f",luasPersegi(s));

    //float a, t;
    //printf("nilai alas:");
    //scanf("%f", &a);
    //printf("nilai tinggi :");
    //scanf("%f", &t);
    //printf("luas Segitiga : %.2f", luasSegitiga(a,t));

    int pilihan;
    printf("Pilih bentuk yang ingin dihitung luasnya:\n");
    printf("1. Segitiga\n");
    printf("2. Persegi\n");
    printf("3. Lingkaran\n");
    printf("4. Persegipanjang\n");
    printf("5. Jajargenjang\n");
    printf("6. Belahketupat\n");
    printf("7. Layanglayang\n");
    printf("8. Trapesium\n");
    printf("Masukkan pilihan Anda [1/2/3/4/5/6/7/8]: ");
    scanf("%d", &pilihan);

     if (pilihan == 1) {
        float a,t;
        printf("Masukkan panjang alas segitiga: ");
        scanf("%f", &a);
        printf("Masukkan tinggi segitiga: ");
        scanf("%f", &t);
        printf("Luas segitiga adalah: %.2f\n", luasSegitiga(a,t));
    } else if (pilihan == 2) {
        float s;
        printf("Masukkan panjang sisi persegi: ");
        scanf("%f", &s);
        printf("Luas persegi adalah: %.2f\n", luasPersegi(s));
    } else if (pilihan == 3) {
        float r;
        printf("Masukkan panjang jari-jari lingkaran: ");
        scanf("%f", &r);
        printf("Luas lingkaran adalah: %.2f\n", luasLingkaran(r));
    } 
    else if (pilihan == 4) {
        float p,l;
        printf("Masukkan panjang persegipanjang: ");
        scanf("%f", &p);
        printf("Masukkan panjang persegipanjang: ");
        scanf("%f", &l);
        printf("Luas Persegipanjang adalah: %.2f\n", luasPersegipanjang(p,l));
    }
    else if (pilihan == 5) {
        float a,t;
        printf("Masukkan alas Jajargenjang: ");
        scanf("%f", &a);
        printf("Masukkan tinggi Jajargenjang: ");
        scanf("%f", &t);
        printf("Luas Jajargenjang adalah: %.2f\n", luasJajargenjang(a,t));
    }
    else if (pilihan == 6) {
        float d1,d2;
        printf("Masukkan diameter1 Belahketupat: ");
        scanf("%f", &d1);
        printf("Masukkan diameter2 Belahketupat: ");
        scanf("%f", &d2);
        printf("Luas Belahketupat adalah: %.2f\n", luasBelahketupat(d1,d2));
    }
    else if (pilihan == 7) {
        float d1,d2;
        printf("Masukkan diameter1 Layanglayang: ");
        scanf("%f", &d1);
        printf("Masukkan diameter2 Layanglayang: ");
        scanf("%f", &d2);
        printf("Luas Layanglayang adalah: %.2f\n", luasLayanglayang(d1,d2));
    }
    else if (pilihan == 8) {
        float a,b,h;
        printf("Masukkan sisi1 Trapesium: ");
        scanf("%f", &a);
        printf("Masukkan sisi2 Trapesium: ");
        scanf("%f", &b);
        printf("Masukkan tinggi Trapesium: ");
        scanf("%f", &h);
        printf("Luas Trapesium adalah: %.2f\n", luasTrapesium(a,b,h));
    }else {
        printf("Pilihan tidak valid.\n");
    }

    getch();
    return 0;
}
