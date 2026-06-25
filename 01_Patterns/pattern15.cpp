#include <iostream>
using namespace std;
    void pattern15(int num){
        for(int i = 1; i<=num; i++){
            char ch = 'A';
            for(int j = 1; j<=num - i + 1; j++){
                cout << ch << " ";
                ch++;
            }
            cout << endl;
        }
    }
int main(){
    int num = 5;
    pattern15(num);
    return 0;
}