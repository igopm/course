//
// Created by Igor Maschikevich on 9/06/2017.
//
#include <iostream>
#include <vector>
#include <bitset>

using namespace std;


/* 1.2 Ввести 8-байтовое целое число без знака (unsigned long long). Внести каждый из его 8
 * байтов в вектор байтов vector<uint8_t>. Затем распечатать каждый байт в
 * шестнадцатиричном виде. Подсказка: удобно использовать операцию битового сдвига >>
 */


int main()
{
    unsigned short short11 = 1024;
    bitset<16> bitset11{short11};
    cout << bitset11 << endl;     // 0000010000000000

    unsigned short short12 = short11 >> 1;  // 512
    bitset<16> bitset12{short12};
    cout << bitset12 << endl;     // 0000001000000000

    unsigned short short13 = short11 >> 10;  // 1
    bitset<16> bitset13{short13};
    cout << bitset13 << endl;     // 0000000000000001

    unsigned short short14 = short11 >> 11;  // 0
    bitset<16> bitset14{short14};
    cout << bitset14 << endl;     // 0000000000000000}
    //    vector<uint8_t> vb(8);
    //    unsigned long long number;
    //    number = 1024;
    //    //    cin >> number;


    //    for(int i = 0; i < vb.capacity(); ++i){
    //        cout << i<<" = "<<vb[i]<< endl;
    //    }

    //    cout << "number = " << number << endl;
    return 0;
}
//unsigned char x = 0xff;
//cout << "Value of x  " << hex << int(x) <<"  hexadecimal"<<endl;
//printf("Value of x %x by printf", x);
