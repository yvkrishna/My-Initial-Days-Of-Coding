#include <iostream>
using namespace std;

// https://www.hackerrank.com/challenges/c-tutorial-class/problem

class Student
{
    private:
    int sage,sstandard;
    string firstname,lastname;
    public:
    int set_age(int x)
    {
        sage=x;
        return sage;
    }
    int set_standard(int y)
    {
        sstandard=y;
        return sstandard;      
    }
    string set_first_name(string m)
    {
        firstname=m;
        return firstname;
    }
    string set_last_name(string k)
    {
        lastname=k;
        return lastname;
    }
     int get_age();
    
     int get_standard();

     string get_first_name();
    
     string get_last_name();
     
    void to_string()
    {
        cout<<sage<<","<<firstname<<","<<lastname<<","<<sstandard;
    }
    
    };
    int Student :: get_age()
    {
       return sage;
    }
    int Student:: get_standard()
    {
         return sstandard;
    }
    string Student::get_first_name()
    {
        return firstname;
    }
    string Student::get_last_name()
    {
        return lastname;
    }

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
