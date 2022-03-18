#include <iostream>

using namespace std;

int main () {
  int A, N, sum = 0;
  cin >> A;
  while (true){
      cin >> N;
      if (N <= 0) {
	     cin >> N;
	  } else {
	     break;
	    }
  }
  for(int i = 0; i < N; i++){
        sum += (A + i);
    }
    cout << sum << endl;

  return 0;
}
