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
    // Bir dizide arama yapmak icin d�gn�n�n ka� kez �al��mas�n� hesaplar�z. Bag�nt�da �nemli olan n in derecesidir T(n/2) gibi bag�nt�lar O(n) e d�n���r

 // Bu kod dosyas� verilen bir dizi i�inde, aranan eleman�n bulunup bulunmad���n� kontrol eder ve varsa dizideki eleman� , yoksa -1 de�erini geri d�nd�r�r.

 //    a) En iyi durumda, aranacak ��enin dizinin ilk eleman� olarak kabul edilirse . Bu durumda, d�ng� sadece bir kez �al���r ve kod sat�r�ndan istenen eleman  bulunur. Bu nedenle, en iyi durumda �al��ma zaman� O(1) 'dir.

 //    b) Ortalama durumda, ��e dizi i�inde rastgele bir konumda olabilir. Bu nedenle, ortalama olarak, ��enin dizinin yar�s�nda bulundu�u varsay�l�r. 
 //     Bu durumda, ortalama �al��ma zaman� O(n/2) 'dir, yani O(n)'dir.  �nemli olan n'in baskatsay�s� ya da sabit terimler de�il n 'in derecesi oldugundan n/2 = n deger� al�n�r

 //    c) En k�t� durumda, aranacak ��enin dizinin son eleman� oldu�u durumu ele alal�m. Bu durumda, d�ng� dizinin t�m elemanlar�n� kontrol etmek zorunda kal�r ve ��e sonunda bulunur. 
 //    Bu nedenle, en k�t� durumda �al��ma zaman� O(n) 'dir.

 //    Sonu� olarak, bu kod par�as�n�n �al��ma zaman�, en iyi durumda O(1), ortalama durumda O(n) ve en k�t� durumda O(n) 'dir.
