// A B C D
// A B C D
// A B C D
// A B C D
#include<iostream>
using namespace std;
int main(){
    for(int i = 1; i <= 4; i++){
        char ch = 'A';
        for(int j = 1; j <= 4; j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}