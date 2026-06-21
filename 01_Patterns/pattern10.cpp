#include <iostream>
using namespace std;

void pattern10(int num){
for(int i = 1; i<=num*2-1; i++){
     if(i<num){
        for(int j = 1; j<=i; j++){
            cout << "*" << " ";
        }
     }
     else{
        for(int j = 1; j<=num*2-i; j++){
            cout << "*" << " ";
        }
     }
    cout << endl;
    }
}

int main(){
    int num = 5;
    pattern10(num);
    return 0;
}