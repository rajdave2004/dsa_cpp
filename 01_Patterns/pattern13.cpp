#include <iostream>
using namespace std;

void pattern13(int num){
    int counter = 1;
    for(int i = 1; i<=num; i++){
        for(int j = 1; j<=i; j++){
            cout << counter << " ";
            counter++;
        }
        cout << endl;
    }
}
int main(){
    int num = 5;
    pattern13(num);
    return 0;
}