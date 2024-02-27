#include<bits/stdc++.h>
using namespace std;

void stockSpan(int *arr, int num){
    stack<int>st;

    for(int i = 0; i < num; i++){
        //cout<<st.top()<<endl;
        while(st.empty()==false && arr[i] >= arr[st.top()]){
            st.pop();
        }
        if(st.empty()==true){
            cout<<i+1<<" ";
        }else{
            cout<<i-st.top()<<" ";
        }
        st.push(i);
    }
}

int main(){
    int arr[] = {18,12,13,14,11,16};
    //{13, 15, 14, 16, 8,  6, 4, 10, 30};

    stockSpan(arr,6);

}