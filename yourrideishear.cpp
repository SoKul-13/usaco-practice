/*
ID: stemsok1
TASK: ride
LANG: C++                 
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    string cn, un;
    fin >> cn;
    fin >> un;

    int uon= 1;
    int con= 1;

    for( int i = 0; i <= 5; i++) {
      char c = cn[i];
      char u = un[i];
      if (c>64) {
        c=c-64;
        con = c*con;
      }
      if (u>64) {        
        u=u-64;
        uon = u*uon;
      }
    }

    if (uon%47 != con%47) {
      fout << ("STAY\n");
    }
    else {
      fout << ("GO\n");
    }
  }