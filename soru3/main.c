#include <stdlib.h>
#include <stdio.h>


// Ali Akcan-1220505065

int search(int D[], int N, int sayi){

    int i = 0;                                // +1 
    while(i<N){                                // n+1
    if(D[i]==sayi) break;                   // +1 
    i++;                                   // +1 
    }
    if(i<N) return i;                                          // + 1
    else return -1;                                 // +1

    /* 1. = 1
       2. = n+1
       3. = 1
       4. = 1
       5. = 1
       6. = 1
       toplam = n+6 T(n)=O(n) */
}
    // Bir dizide arama yapmak icin dögnünün kaç kez çalýþmasýný hesaplarýz. Bagýntýda önemli olan n in derecesidir T(n/2) gibi bagýntýlar O(n) e dönüþür

 // Bu kod dosyasý verilen bir dizi içinde, aranan elemanýn bulunup bulunmadýðýný kontrol eder ve varsa dizideki elemaný , yoksa -1 deðerini geri döndürür.

 //    a) En iyi durumda, aranacak öðenin dizinin ilk elemaný olarak kabul edilirse . Bu durumda, döngü sadece bir kez çalýþýr ve kod satýrýndan istenen eleman  bulunur. Bu nedenle, en iyi durumda çalýþma zamaný O(1) 'dir.

 //    b) Ortalama durumda, öðe dizi içinde rastgele bir konumda olabilir. Bu nedenle, ortalama olarak, öðenin dizinin yarýsýnda bulunduðu varsayýlýr. 
 //     Bu durumda, ortalama çalýþma zamaný O(n/2) 'dir, yani O(n)'dir.  Önemli olan n'in baskatsayýsý ya da sabit terimler deðil n 'in derecesi oldugundan n/2 = n degerý alýnýr

 //    c) En kötü durumda, aranacak öðenin dizinin son elemaný olduðu durumu ele alalým. Bu durumda, döngü dizinin tüm elemanlarýný kontrol etmek zorunda kalýr ve öðe sonunda bulunur. 
 //    Bu nedenle, en kötü durumda çalýþma zamaný O(n) 'dir.

 //    Sonuç olarak, bu kod parçasýnýn çalýþma zamaný, en iyi durumda O(1), ortalama durumda O(n) ve en kötü durumda O(n) 'dir.
