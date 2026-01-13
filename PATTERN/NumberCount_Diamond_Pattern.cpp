// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

/*

    1
   222
  33333
 4444444
  55555
   666
    7

*/

int main() {
    int count = 1;
    for(int i=0;i<4;i++){
        for(int j=0; j<4-i;j++){
            cout << " ";
        }
        for(int j=0;j<=i;j++){
            cout << count;
        }
        for(int j=0; j<i;j++){
            cout << count;
        }
        cout << endl;
        count++;
        
    }
    for(int k=0;k<3;k++){
        for(int l=0;l<k+2;l++){
            cout << " ";
        }
        for(int l=0; l<3-k;l++){
            cout << count;
        }
        for(int l=0; l<3-k-1;l++){
            cout << count;
        }
        count++;
        cout << endl;
    }
    
    
    return 0;
}
