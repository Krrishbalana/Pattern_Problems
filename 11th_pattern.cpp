// 1111
//  222 
//   33
//    4
#include<iostream>
using namespace std;
int main(){
    int n = 4;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < i; j++){
            cout << " ";
        }
        for(int k = 1; k <= n-i; k++){
            cout << (i+1) ;
        }
        cout << endl;
    }
}