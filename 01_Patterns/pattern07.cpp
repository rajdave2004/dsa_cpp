#include <iostream>
using namespace std;

void pattern07(int num){
    for(int i = 1; i<=num; i++){
        for(int j = 1; j<=num-i; j++){
            cout << " " << " ";
        }
        for(int k = 1; k<=i*2-1; k++){
            cout << "*" << " ";
        }
        cout  << endl;
    }

}
int main(){
    int num = 5;
    pattern07(num);
    return 0;
}