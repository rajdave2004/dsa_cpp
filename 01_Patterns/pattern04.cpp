#include <iostream>
using namespace std;

void patter04(int num){
    for(int i = 1; i<=num; i++){
        for(int j = 1; j<=i; j++){
            cout << i << " ";
        }
        cout << endl;
    }
}

int main(){
    int num = 5;
    patter04(num);
    return 0;
}