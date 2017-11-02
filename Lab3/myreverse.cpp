#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){

    string phrase;
    string reversed=""; 

    while(!cin.eof()){
        cout<<"Please input a string to be reversed: "<<endl;
        getline(cin,phrase);
        cout<<"The original string is: "<<phrase<<endl;
        cout<<"The reversed string is: ";
        for(int i=phrase.size()-1; i>=0; i--){
            cout<<phrase[i];
        }   
        cout<<endl;
    }      
    return 0;
}    
