#include<bits/stdc++.h>
using namespace std;

void largest_element_in_window(int *arr, int num, int k){
    deque<int>dq;

    for(int i = 0; i < k; i++){
        while(dq.empty()==false && arr[dq.back()]<=arr[i])
            dq.pop_back();

        dq.push_back(i);
    }
    cout<<arr[dq.front()]<<" ";

    for(int i = k; i < num; i++){
        
        if(dq.front() <= i-k){
            dq.pop_front();
            // dq.push_back(i);
        }
        while(dq.empty()==false && arr[dq.back()]<=arr[i])
            dq.pop_back();
        
        dq.push_back(i);
        cout<<arr[dq.front()]<<" ";
    }
}

int main(){
    int arr[] = {10, 38, 25, 12, 15, 77, 86};
    int size = sizeof(arr)/sizeof(arr[0]);

    largest_element_in_window(arr, size, 3);
}