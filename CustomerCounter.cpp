// AD SOYAD: Mustafa T�rker
// OGRENCI NO: 05160000586
// EPOSTA: muh.mustafa.turker@gmail.com

#include "CustomerCounter.h"
#include<iostream>
using namespace std;

 int CustomerCounter :: getCustomerCount(int x)
 {

 if(x<0){
       if((CustomerCount -= x)<0){
        cout << x - CustomerCount << "kisi i�eri giremez."  << endl;
       }
       else{
        CustomerCount -= x;
        cout << CustomerCount << "i�erdeki kisi sayisi : %d "  << endl;
       }
    }

    if(x>0){
        if((CustomerCount+x)>30){
            cout << "giri� s�n�r� a��lm��t�r.";
        }
        else{
         CustomerCount+x;
         cout << CustomerCount << "i�erdeki kisi sayisi : %d "  << endl;
        }
    }

}

