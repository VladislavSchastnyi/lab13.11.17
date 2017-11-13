#include <iostream>
using namespace std;

int main(){
  int n, m;
  cout << "Vvedite razmer massiva" <<  endl;
  cin >> n;
  if (n <= 0) {
        cout << "error" << endl;
        return 1;
  }
  cout << "" << endl;
  int *a = new int [n];
  for (m = 0; m < n; m++) {
        cin >> a[m];
  }
  for (m = 0; m <  n / 2 ; m++) {
        swap(a[m], a[n - m -1]);
  }

  for (m = 0; m < n; m++) {
       cout << a[m]  << endl;
  }
}

