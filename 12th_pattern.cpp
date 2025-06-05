//    1
//   121
//  12321
// 1234321
#include<iostream>
using namespace std;
int main(){
    int n = 4;
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < (n-i); j++){
            cout << " ";
        }
        for(int j = 0; j < i; j++){
            cout << j+1;
        }
        for (int j = i - 1; j >= 1; j--) {
            cout << j;
        }
        cout << endl;
    }
}
