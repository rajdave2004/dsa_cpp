#include <iostream>
using namespace std;
void pattern19(int num){
    for(int i = 1; i<=num*2; i++){
        int star = i - num;
        int space = (num*2%i)*2;     
        if(i<=num){
            star = num-i+1;
            space = i*2-2;

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
    pattern19(num);
    return 0;
}