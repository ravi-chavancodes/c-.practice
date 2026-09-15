#include <iostream>
using namespace std;

int sum(int a, int b){
    cout << a + b << endl;
    return a + b;
}

float sum(float a, float b){
    cout << a + b << endl;
    return a + b;
}

int main(){
    sum(2, 3);
    sum(1.5f, 2.5f);

    return 0;
}