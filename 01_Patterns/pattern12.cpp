#include <iostream>
using namespace std;

void pattern12(int num){
    for(int i = 1; i<=num; i++){
      for(int j = 1; j<=i; j++){
        cout << j << " ";
      }
      for(int j = 1; j<=(num*2) -(i*2);j++){
        cout << " " << " ";
      }
      for(int j = i; j>=1; j--){
        cout << j << " ";
      }

      cout << endl;
    }
}

int main(){ 
    int num = 4;
    pattern12(num);
    return 0;
}