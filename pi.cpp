// pi.cpp
// Benjamin Fogiel
// 6825962

#include <cmath>
#include <iostream>

using namespace std;

int main(){

  double pi;
  int n;
  string t;
  int term;

  while(n != -1){
    pi = 0.0;
    cout << "Enter the value of the parameter 'n' in the Leibniz formula (or -1 to quit): " << endl;
    cin >> n;
    if (n == -1) return 0;
    term = n + 1;
    for (int i = 0; i < term; i++){
      pi = pi + (pow(-1.0, i)/(2.0*i+1.0));
    }
    pi = pi * 4.0;
    if (n == 0){
      t = "term";
    }else{
      t = "terms";
    }
    cout << "The approximate value of pi using " << term << " " << t << " is:" << pi << endl;
  }
  return 0;
}
