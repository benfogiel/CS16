#include <iostream>

using namespace std;

int main() {

  int r;
  int c;

  while (r != 0 && c != 0){
    cout << "Enter number of rows and columns:" << endl;
    cin >> r >> c;
    for (int i = 0; i < r; i++){
      for (int j = 0; j < c; j++){
	cout << "X.";
      }
      cout << "\n";
    }
  }
  
  return 0;
}
