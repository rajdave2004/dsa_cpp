#include <iostream>
using namespace std;
int minimum(int a, int b){
    if(a>b) return a;
    return b;
}
void pattern22(int num){
   for(int i = 1; i<=num*2-1; i++){
    for(int j = 1; j<=num*2-1; j++){
        int top = i;
        int left = j;
        int bottom = (num*2) - i;
        int right = (num*2) - j;
        int min = minimum(minimum(top,bottom) , minimum(left,right));
        cout << num - min + 1 << " ";
    }
    cout << endl;
   }
}
int main(){
    int num = 4;
    pattern22(num);
    return 0;
}