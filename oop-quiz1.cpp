// AD SOYAD: Mustafa Türker
// OGRENCI NO: 05160000586
// EPOSTA: muh.mustafa.turker@gmail.com

#include "CustomerCounter.h"
#include <iostream>
using std::cin; using std::cout; using std::endl;
int main(void)
{
    CustomerCounter a;
    int t;
    cout << "cýkýs veya giris yapan kisi sayisini giriniz :" << endl;
    cin >> t ;
    if (999 == t)
        {return 0;}

        a.getCustomerCount(t);

        return 0;
};

