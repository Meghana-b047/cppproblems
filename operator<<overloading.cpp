#include <iostream> 
#include <string> 
using namespace std;

class Person{
    
    string first_name; 
    string last_name, eve;
    
    public: 
    
        Person(string first, string last, string e): 
        first_name(first), last_name(last), eve(e){}
        
        friend ostream& operator<<(ostream& os, const Person& p); 
}; 

ostream& operator<<(ostream& os, const Person& p){
    os << "first_name="<<p.first_name<<","<<
    "last_name="<<p.last_name<<" "<<p.eve; 
    return os; 
}

int main(){
    string f, l, e; 
    cin >> f >> l >> e; 
     Person p(f, l, e); 
     cout << p<< endl; 
    return 0; 
}
