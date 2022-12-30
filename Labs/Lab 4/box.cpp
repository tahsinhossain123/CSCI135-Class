#include <iostream>
using namespace std; 

//write a program that ask the user for a width and height and prints a 
//regtable of that size and height 


int main(){

int width, height; 

cout<<"Enter the width: ";
cin>>width; 

cout<<"Enter the height: ";
cin>>height; 

cout<<endl;


for (int i= 0; i<height; i++){

    for(int j=0; j<width; j++){
        cout<<"*"; 
    }
    cout<<endl; //after the endl you go back to the first loop(the i loop)
}

    return 0; 

}
