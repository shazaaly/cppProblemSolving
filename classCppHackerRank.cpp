/*
https://www.hackerrank.com/challenges/c-tutorial-class/problem?isFullScreen=true
It's a common practice to make all variables private, and set/get them using public methods. For example:
class SampleClass {
    private:
        int val;
    public:
        void set(int a) {
            val = a;
        }
        int get() {
            return val;
        }
};
*/

#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/

class Student{
    public:
    void set_age(int input){
        age = input;
        
    }
    void set_first_name(string input ){
        first_name = input;
        
    }
     void set_last_name(string input ){
        last_name = input;
        
    }
       
    
     void set_standard(int input ){
        standard = input;
        
    }
    
     int get_age(){
       return age;
   }
    
     string  get_first_name(){
       return first_name;
   }
    string get_last_name(){
       return last_name;
   }
    int get_standard(){
       return standard;
   }
   
   void to_string(){
    cout<< age << "," << first_name << "," << last_name << ","<< standard;
       
   };



        
    private: 
    int age, standard;
    string first_name, last_name;
    
    
    
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    st.to_string();
    
    return 0;
}
