// 1
// 2 2
// 3 3 3
// 4 4 4 4
#include<iostream>
using namespace std;
int main(){
    int n = 4;
    int a = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << a << " ";
        }
            cout << endl;
            a++;
    }
}
