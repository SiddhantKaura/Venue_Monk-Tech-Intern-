#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    a = b = c = 0;
    long long product = 0;
    for(a = 1;a < 1000/3;a++){
        for(b = 1;b < 500;b++){
            c = 1000-a-b;
            if((a*a + b*b) == c*c){
               product = a*b*c;
            }
        }
    }
    cout<<product<<endl;
}
