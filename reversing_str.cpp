#include <iostream> 
#include <cstring> 
#include <stack> 

using namespace std ; 

int main(){

    char s[20]; 
    char c; 
    cout << "Enter a string: \n"; 
    cin >> s; 
    
    stack <char> st; 

    for (int i=0; i<strlen(s); i++)
        st.push(s[i]); 
    for (int i=0; i<strlen(s); i++){
        c=st.top(); 
        cout << c; 
        st.pop(); 
    }

    return 0; 

}