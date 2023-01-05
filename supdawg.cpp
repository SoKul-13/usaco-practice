#include <iostream>
#include <cmath> 

using namespace std;
int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    int locations [n] [2];

    for (int i = 0; i<n; i++ ) {
        cin >> locations [i] [0];
        cin >> locations [i] [1] >> endl;
    }
    cout << locations;
}