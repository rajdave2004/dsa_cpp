#include <iostream>
using namespace std;

void pattern16(int num){
    char ch = 'A';
    for(int i = 1; i<=num; i++){
        for(int j = 1; j<=i; j++){
            cout << ch << " ";
          
        }
         ch++;
        cout << endl;
    }
}
int main(){
    int num = 5;
    pattern16(num);
    return 0;
}