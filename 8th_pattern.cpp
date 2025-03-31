// 1 
// 1 2 
// 1 2 3
// 1 2 3 4
#include<iostream>
using namespace std;
int main(){
    int n;
    n = 4;
    for(int i = 1; i <= n; i++){
        int a = 1;
        for(int j = 1; j <= i; j++){
            cout << a << " ";
            a++;
        }
        cout << endl;
    }
    return 0;
}