#include <iostream>
using namespace std;

void pattern20(int num){
 for(int i = 1; i<=num; i++){
    for(int j = 1; j<=num; j++){

        if((i==1 || i==num || j==1 || j==num)){
            cout << "*" << " ";
        }
        else{
            cout << " " << " ";
        }

    }
    cout << endl;
 }   
}
int main(){
    int num = 5;
    pattern20(num);
    return 0;
}