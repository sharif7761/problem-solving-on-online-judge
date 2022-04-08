#include <iostream>

using namespace std;

int main()
{
    int k, n, w, total = 0, borrowed = 0;
    cin >> k >> n >> w;
    for(int i = 1; i <= w; i++){
        total += i * k;
    }
    if(n < total){
        borrowed = total - n;
    }
    
    cout<<borrowed<<endl;

    return 0;
}