#include <iostream>
using namespace std;

void pattern3(int num){
    for(int i = 1; i<=num; i++){
        for(int j = 1; j<=i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}

int main(){
    int num = 5;
    pattern3(num);
    return 0;
}