#include <iostream>
using namespace std;

void pattern05(int num){
    for(int i = 1; i<=num; i++){
        for(int j = 1; j<=num-i+1; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }
}

int main(){
    int num = 5;
    pattern05(num);
    return 0;
}