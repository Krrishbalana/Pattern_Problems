// 1111
//  222 
//   33
//    4
#include<iostream>
using namespace std;
int main(){
    int n = 4;
    int a = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i-1; j++){
            cout << " ";
        }
        for(int k = 1; k <= 5-i; k++){
            cout << a ;
        }
        cout << endl;
        a++;
    }
}