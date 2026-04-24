    #include <cmath>
    #include <cstdio>
    #include <vector>
    #include <iostream>
    #include <stdexcept> // for using runtimeerror 
    using namespace std;

    int largest_proper_divisor(int n){
        if (n<=1) throw runtime_error("largest proper divisor is not defined for n="+to_string(n)); 
        for (int i=n/2; i>=1; i--){
            if(n%i==0){
                return i;
            }
        }
        return -1; 
    }

    void process_input(int n){
        try{
            int ans = largest_proper_divisor(n);
            cout << "result="<<ans<<endl;
            cout <<"returning control flow to caller";  
        } catch(const exception &e){
            cout << e.what() << endl; 
            cout <<"returning control flow to caller";
        }
        
    }

    int main() {
        int n; 
        cin >> n; 
        process_input(n);   
        return 0;
    }
