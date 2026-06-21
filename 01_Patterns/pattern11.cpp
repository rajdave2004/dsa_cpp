#include <iostream>
using namespace std;
void pattern11(int num){
    for(int i = 1; i<=num; i++){
        for(int j = 1; j<=i; j++){
            if((i%2!=0 && j%2!=0) || (i%2==0  && j%2==0)){
                cout << 1 << " ";
            }
            else{
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
}

int main(){
    int num = 5;
    pattern11(num);
    return 0;
}