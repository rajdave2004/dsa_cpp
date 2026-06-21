#include <iostream>
using namespace std;

void pattern01(int num){
    for(int i = 1; i<=num; i++){
        for(int j = 1; j<=num; j++){
            cout << "*"<< " ";
        }
        cout << endl;
    }
}

int main(){
    int num = 5;
    pattern01(num); 
    return 0;
}
