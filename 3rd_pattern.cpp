// 1 2 3
// 4 5 6
// 7 8 9
#include<iostream>
using namespace std;
int main(){
    int n;                           // n=3 for above pattern
    cout << "enter the value of-";
    cin >> n;
    int a = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << a << " ";
            a++;
        }
        cout << endl;
    }
}