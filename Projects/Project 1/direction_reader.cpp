//Tahsin Hossain 
//C135
//Genady Maryash
//Project 1 Task 4
//Read in the text file using and over R to right, L to left, U to up, D to down 

#include <iostream>
#include <string>
using namespace std;
int main() 
{

	//use char b/c we are reading in letters
	//save it in a varable named letter b/c we are reading in one letter at a time
	//using the while(cin >> letter) line
    char letter;
    while(cin >> letter) 
    {
	//if the letter you read in is the charter R then cout right 
        if(letter == 'R'){
            cout<<"Right"<<endl;
        }
        else if (letter == 'L'){
            cout<<"Left"<<endl;
        }
        else if(letter =='D'){
            cout<< "Down"<<endl;
        }
         else if(letter =='U'){
            cout<< "Up"<<endl;
        }

    }   
    return 0;
}

