#include <iostream>
using namespace std;

void pattern18(int num){
    for(int i = 1; i<=num; i++){
       char ch = 'A' + num - i;
       for(int j = 1; j<=i; j++){
        cout << ch << " ";
        ch++;
       }
       cout << endl;
    }
}
int main(){
    int num = 7;
    pattern18(num);
    return 0;
}