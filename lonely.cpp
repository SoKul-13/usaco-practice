#include <iostream>
using namespace std;

int main () {
    long long int length;
    string letter;
    cin >> length;
    cin >> letter;

    int charcounter = 0;
    char b;
    int counter;
    int arr[length-1];
    for (char a : letter) {
        b  = int(a);
        arr[charcounter] = b;
        charcounter += 1;
    }

    for (int i = 0; i <= length; i++) {
        for (int j = i+2; j <= length; j++) {
            int sum = 0;
            for (int k = 0; k <= j; k++) {
            sum += arr[k];
            } 
            if ((sum - 48)/47 == 0) {
                counter += 1;
            }
            else if ((sum - 47)/48 == 0) {
                counter += 1;
            }
            else {
                counter += 0;
            }
        }
    }
    cout << counter;
}
