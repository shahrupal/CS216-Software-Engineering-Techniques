// Course: CS216-001
// Project: Lab Assignment 3
// Date: 02/01/2017
// Purpose: Given a string, reverse the order of the letters.
// Author: Rupal Shah

//add appropriate headers
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    
    //initialize string variables
    string phrase;
    string reversed=""; 

    //until the user clicks ctrl-d, continue with the loop
    while(!cin.eof()){
        //ask user to input a string
        cout<<"Please input a string to be reversed: "<<endl;
        //store user's string into variable
        getline(cin,phrase);
        //output the string the user provided
        cout<<"The original string is: "<<phrase<<endl;
        //output the user's string reversed
        cout<<"The reversed string is: ";
        //output each letter of the string starting from the last character to the first
        for(int i=phrase.size()-1; i>=0; i--){
            cout<<phrase[i];
        }   
        cout<<endl;
    }      
    return 0;
}    
