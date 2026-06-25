#include <iostream>
using namespace std;

void pattern17(int num){
    for(int i = 1; i<=num; i++){
        for(int j = 1; j<=num - i; j++){
            cout << " " << " ";
        }
        char ch = 'A';
        for(int j = 1; j<=(i*2) - 1; j++){
            if(j>=i){
                cout << ch << " ";
                ch--;
            }
            else{
                cout << ch << " ";
                ch++;
            }
            
        }
        cout << endl;
    }
}

int main(){
    int num = 4;
    pattern17(num);
    return 0;

}