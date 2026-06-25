#include <iostream>
using namespace std;
void pattern14(int num){
    for(int i = 1; i<=num; i++){
        char ch = 'A';
        for(int j = 1; j<=i; j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}
int main(){
    int num = 5;
    pattern14(num);
    return 0;
}