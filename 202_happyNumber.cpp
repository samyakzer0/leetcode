#include <vector>
#include <iostream>
using namespace std;


// bool isHappy(int n)
// int sum = 0;

//  if(n==1 or n==7){
// return true;
// }
// else if(n<10){
//     return false;
// }
// else {
//     while(n!=0){
//         int k = n%10;
//         sum = sum+k*k;
//         n = n/10
//     }
// }
// return isHappy(sum)
// }

    int getNew(int n) {
        int sum = 0;
        while (n != 0) {
            int k = n % 10;
            sum = sum + k * k;
            n = n / 10;
        }
        return sum;
    }

    bool isHappy(int n) {
        vector<int> list;
        
        while (n != 1) {
            for (int i = 0; i < list.size(); i++) {
                if (list[i] == n) {
                    return false;
                }
            }
            list.push_back(n);
            n = getNew(n);
        }
        
        return true;
    }

    int main(){
        int n;
        cin>>n;
        if (isHappy(n)){
            cout <<"true"<<endl;
        } else {
            cout <<"false"<<endl;
        }
    }