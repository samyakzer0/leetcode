#include <vector>
using namespace std;
#include <iostream>

    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int start = 0;
        int tank = 0;
        int diff = 0;

        for (int i = 0 ; i<n ; i++){
            diff = diff + gas[i] - cost[i];
            tank =  tank + gas[i]-cost[i];

            if (tank < 0){
                tank = 0;
                start = i+1;
            }
        }
        if (diff<0){
            return -1;
        }

        return start;
    }

    int main(){
        int n;
        cin>>n;
        vector<int> gas(n);
        vector<int> cost(n);
        for (int i = 0; i < n; i++){
            cin>>gas[i];
        }
        for (int i = 0; i < n; i++){
            cin>>cost[i];
        }
        cout<<canCompleteCircuit(gas,cost)<<endl;
    }