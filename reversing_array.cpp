#include <iostream> 
#include <stack> 
using namespace std; 

void reverseArr(int arr[], int n){
    stack<int> st ; 

    for (int i=0; i<n; i++)
        st.push(arr[i]); 

    for (int i=0; i<n; i++){
        arr[i] = st.top(); 
        cout << arr[i] << "\n"; 
        st.pop(); 
    }
}

int main(){
    int arr[]= {1,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]); 
    reverseArr(arr,n); 

    for (int i=0; i<n; i++)
        cout << arr[i]; 

    return 0; 
}