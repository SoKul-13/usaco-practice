#include <iostream>
#include <string>
using namespace std;

int main () {
    long long int length = 5;
    string letter = "GHGHG";
    cin >> length;
    cin >> letter;

    long long int templetter = 0;
    
    if (letter.size()%2 == 0) {
        cout << "0";
    }
    else {
        templetter = ((letter.size() - 1)/2)+1;
        cout << templetter;
    }
}