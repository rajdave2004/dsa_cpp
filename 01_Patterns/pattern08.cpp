#include <iostream>
using namespace std;

void pattern08(int num){
    for(int i = 1; i<=num; i++){
        for(int j = 1; j<=i-1; j++){
            cout << " " << " ";
        }
        for(int k = 1; k<=num*2 - (i*2-1); k++){
            cout << "*" << " ";
        }
        cout << endl;
    }
}
int main(){
    int num = 5;
    pattern08(num);
    return 0;
}