#include <iostream>
using namespace std;
void pattern20(int num){
    for(int i = 1; i<=num*2-1; i++){
        int star = num*2-i;
        int space = i - (num*2 - i);
        if(i<=num){
            star = i;
            space = (num*2) - (i*2);
        } 
        for(int j = 1; j<=star; j++){
            cout << "*" << " ";
        }
        for(int j = 1; j<=space; j++){
            cout << " " << " ";
        }
        for(int j = 1; j<=star; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }
}
int main(){
    int num = 5;
    pattern20(num);
    return 0;
}