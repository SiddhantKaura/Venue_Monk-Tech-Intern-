#include <iostream>
using namespace std;
int main() {
    int days = 2;
    int numSundays = 0;
    for(int i = 1901;i <= 2000;i++){
        int month = 0;
        for(int j = 1;j <= 12;j++){
          month = 31;
          if(j == 2){
              month = 28;  
              if(i%400 == 0 || (i%4 == 0 && i%100 != 0))
                month = 29;
           }
           else if(j == 4 || j == 6 || j == 9 || j == 11){
               month = 30;
           }
          if(days%7 == 0){
              numSundays++;
          }
          days += month;
        }
    }
    cout<<numSundays<<endl;
}
