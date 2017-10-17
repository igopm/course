//
// Created by Igor Maschikevich on 9/04/2017.
//
#include <iostream>

using namespace std;

//1.1
int main()
{
    int number;
    cin >> number;
    bool f;
    for (int i = 2; i <= number; i++){
        f = true;
        for (int j = 2; j < i; j++){
            if ((i % j) == 0){
                f = false;
                break;
            }
        }
        if (f == true)
            cout <<i<<" ";
    }
    return 0;
}
