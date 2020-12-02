// AD SOYAD: Mustafa Türker
// OGRENCI NO: 05160000586
// EPOSTA: muh.mustafa.turker@gmail.com

#include "CustomerCounter.h"
#include<iostream>
using namespace std;

 int CustomerCounter :: getCustomerCount(int x)
 {

 if(x<0){
       if((CustomerCount -= x)<0){
        cout << x - CustomerCount << "kisi içeri giremez."  << endl;
       }
       else{
        CustomerCount -= x;
        cout << CustomerCount << "içerdeki kisi sayisi : %d "  << endl;
       }
    }

    if(x>0){
        if((CustomerCount+x)>30){
            cout << "giriþ sýnýrý aþýlmýþtýr.";
        }
        else{
         CustomerCount+x;
         cout << CustomerCount << "içerdeki kisi sayisi : %d "  << endl;
        }
    }

}

