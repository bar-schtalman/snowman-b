#include "snowman.hpp"
#include <iostream>
#include <exception>
using namespace std; 
using namespace ariel;
int main () {
    const int yes = 1;
    const int no = 0;
    int input = 1;
    while(input == 1){
        int temp = 0;
    int snow_guy = 0;
    cout <<"\nHello, lets build a snowman!!\n";
    cout <<"\nplease choose a hat\n\n"<< "1:\n\n _===_\n\n2:\n  ___ \n ..... \n\n3:\n   _\n  /_\\ \n\n4: \n  ___\n (_*_)\n";
    cin >>temp;
    snow_guy = temp;
    cout <<"\nplease choose a nose\n\n"<< "1: ,  2:  .  3:  _  4:  \n";
    cin >>temp;
    snow_guy = snow_guy*10+temp; 
    cout <<"\nplease choose a left eye\n\n"<< "1: .  2: o  3: O  4: - \n";
    cin >>temp;
    snow_guy = snow_guy*10+temp;
    cout <<"\nplease choose a right eye\n\n"<< "1: .  2: o  3: O  4: - \n";
    cin >>temp;
    snow_guy = snow_guy*10+temp;
    cout <<"\nplease choose a left hand\n\n"<< "1: <  2: \\  3: /  4:  \n";
    cin >>temp;
    snow_guy = snow_guy*10+temp;
    cout <<"\nplease choose a right hand\n\n"<< "1: >  2: /  3: \\  4:  \n";
    cin >>temp;
    snow_guy = snow_guy*10+temp;
    cout <<"\nplease choose a torso \n\n"<< "1: :   2: ] [  3: > <  4:   \n";
    cin >>temp;
    snow_guy = snow_guy*10+temp;
    cout <<"\nplease choose a base\n\n"<< "1: :   2: \" \"  3: ___  4:   \n";
    cin >>temp;
    snow_guy = snow_guy*10+temp;
    string str = "";
    try{
        str = snowman(snow_guy);
        cout<<str;
    }
    catch(const std::out_of_range& e){
        cout<<"ERROR!! only nubers in range 1-4!!";
    }
    
    cout <<"\n\nDONE!\nBuild again? PRESS 1  \n"<< "\nExit? press any key...\n";
    cin >> input;
    
    }
    return 0;
}

// void array_print(std::vector<std::string> arr){
//     for (int i=0 ; i<4;i++){
//         cout << i+1 << ":" << arr[i];
//     }
// }