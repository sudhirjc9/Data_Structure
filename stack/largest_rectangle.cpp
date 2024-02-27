#include<bits/stdc++.h>
using namespace std;
int getMaxArea(int arr[], int num){
    stack<int>st;
    int curr = 0, res = 0;
    for(int i=0; i<num; i++){
        while(!st.empty() && st.top()>=arr[i]){
            int tp = st.top();
            st.pop();
            if(st.empty()==true){
                curr = arr[tp]*i;
            }
            else
                curr = arr[tp]*(i-st.top()-1);
                res = max(res, curr);
            }
        st.push(i);
    }
    while(st.empty()==false){
        int tp = st.top();
        st.pop();
            if(st.empty()==true){
                curr = arr[tp]*i;
            }
            else
                curr = arr[tp]*(i-st.top()-1);
                res = max(res, curr);
            }
    }
}

int main(){
    int arr[] = {60, 20, 50, 40, 10, 50, 60};
    int num = sizeof(arr)/sizeof(arr[0]);

    cout<<getMaxArea(arr, num);
}