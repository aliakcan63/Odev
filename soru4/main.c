#include <stdio.h>
#include <stdlib.h>

struct ogrenci {
	
    char ad[50];
    char soyad[50];
    int no;
    char adres[100];
};

int main() {
	
    int i;
    
    struct ogrenci ogrenciler[5] = {
        {"Fatih", "Cicek", 3444, "Malatya"},
        {"Seyma", "altun", 3449, "Ýstanbul"},
        {"Mehmet Hakan", "Girisgen", 2102, "Adiyaman"},
        {"Ali", "Akcan", 6346, "Sanliurfa"},
        {"EmineNur", "ZENGÝN", 2134, "manisa"}
    };

    for (i = 0; i < 5; i++) {
        printf("Ogrenci:%d\n", i+1);
        printf("Ad: %s\n", ogrenciler[i].ad);
        printf("Soyad: %s\n", ogrenciler[i].soyad);
        printf("No: %d\n", ogrenciler[i].no);
        printf("Adres: %s\n", ogrenciler[i].adres);
        printf("----------------------\n");
    }

    return 0;
}


