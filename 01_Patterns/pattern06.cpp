#include <iostream>
using namespace std;

void pattern06(int num){
    for(int i = 1; i<=num; i++){
        for(int j = 1; j<=num-i+1; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
int main(){
    int num = 5;
    pattern06(num);
    return 0;
}