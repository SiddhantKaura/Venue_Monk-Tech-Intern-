#include <iostream>
using namespace std;
int main() {
    int cost = 2000;
    int denominations[8] = {10,20,50,100,200,500,1000,2000};
    long long moneydp[cost+1];
    for(int i = 1;i <= 2000;i++){
        moneydp[i] = 0;
    }
    moneydp[0] = 1;
    for(int i = 0;i < 8;i++){
      for(int j = 0;j <= cost;j++){
          if(j >= denominations[i]){
              moneydp[j] = moneydp[j] + moneydp[j-denominations[i]];  
          }
      }
    }
    cout<<moneydp[cost]<<" ";
}
