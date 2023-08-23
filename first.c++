#include<iostream>
using namespace std;

namespace first{
    int a; //variable
    int add(int x , int y){ //function
        return x+y;
    }
}

namespace second{
    int a;
    int add(int x,int y){
        return x-y;
    }
}

int main(){
    // Now even though the name of the two variables and the functions is the same , after using the respective namespace 
    // attribute infront would lead to it being a different variable and a different function altogether.
    cout << "Enter the value of a and b: "<<endl;
    cin >> first :: a >> second :: a ;
    cout << "The sum of a and b is : " << endl << second :: add(first::a,second::a) << endl;
}