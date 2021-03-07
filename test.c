#include <stdio.h>

int main(){

    int angka;            // deklarasi variabel angka
    scanf("%d", &angka);  // menerima input angka dan menyimpan dalam variabel angka
    
    if (angka % 4 == 0){                     // logika if else untuk mencari tahun kabisat
        if (angka % 100 != 0){
            printf("Tahun Kabisat");
        }
        else if (angka % 400 == 0){
            printf("Tahun Kabisat");
        }
        else {
            printf("Bukan Tahun Kabisat");
        }
    }
    else {
        printf("Bukan Tahun Kabisat");
    }

    return 0;

}
