#include<iostream>
using namespace std;

/*
using namespace std - this omits the use of the std:: from the code and makes all the other variables from the standard library be used
                        without having to use the std::
cout - console out 
cin - console in
>> - Extraction operation, it is used to get the input from the user using the cin function
<< - insertion operation, it is used to get the output on the terminal using the cout function
:: - scope resolution operator , it is used to make the namespace and keyword we called be linked so the the compiler knows that 
    word is from that namespace and executes that.
namespace - It is a declaration under which whatever is there has a specific uniqueness with regards to that declaration and the same 
            variable , function , class etc names under the declaration can be used outside as well
*/


namespace first{
    int a; //variable
    int add(int x , int y){ //function
        return x+y;
    }
}

namespace second{
    int a; // automatically assigned to 0 as outside the main function
    int add(int x,int y){
        return x-y;
    }
}

namespace third{

    class demo{ //class
        public: // access specifier , public- to be able to access it out of the class, private- disable access outside the class
        void display(){
            cout << "hello" << endl;
        }
    }; // should end with a semicolon
}

int main(){
    // Now even though the name of the two variables and the functions is the same , after using the respective namespace 
    // attribute infront would lead to it being a different variable and a different function altogether.
    // if we use ::a without any namespace name infront of the :: then it will lok for the variable in the global scope i.e 
    // outside all the functions

    third::demo o1;
    o1.display();
    cout << "Enter the value of a and b: "<<endl;
    cin >> first :: a >> second :: a ;
    cout << "The sum of a and b is : " << endl << second :: add(first::a,second::a) << endl;
}