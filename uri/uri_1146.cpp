#include <iostream>

using namespace std;

int main () {
  int X;
  while (true){
      cin >> X;
      if (X == 0) {
	     break;
	  } else {
	     for (int i = 1; i <= X; i++) {
	      if (i == X) {
		     cout << i << endl;
	       }
	      else {
		     cout << i << " ";
		   }
	    }
	  }
    }

  return 0;
}
