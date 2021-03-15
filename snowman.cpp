#include "snowman.hpp"
#include <iostream>
#include <string>
#include <exception>
#include <vector> 
using namespace std;
//  HHHHH
//  HHHHH
// X(LNR)Y
// X(TTT)Y
//  (BBB)

namespace ariel{
const int H = 0;
const int N = 1;
const int L = 2;
const int R = 3;
const int X = 4;
const int Y = 5;
const int T = 6;
const int B = 7;
const int ten = 10;
const int max_digit = 4;
const int min_digit = 1;
const int valid_input = 8;
//snowman parts catalog
const std::vector<std::string> hats = {"     \n _===_"," ___ \n .....  ","  _\n  /_\\ "," ___\n (_*_)"};
const std::vector<std::string> nose = {",",".","_"," "};
const std::vector<std::string> eyes = {".","o","O","-"};
const std::vector<std::string> lefthand_up = {" ","\\"," "," "};
const std::vector<std::string> lefthand_down = {"<"," ","/"," "};
const std::vector<std::string> righthand_up  = {" ","/"," "," "};
const std::vector<std::string> righthand_down = {">"," ","\\"," "};
const std::vector<std::string> torso  = {" : ","] [","> <","   "};
const std::vector<std::string> base = {" : ","\" \"","___","   "};
 
    string snowman (int num){
        std::string input = to_string(num);//put input to string
        std::string snow_guy = " ";
        if (input.length() == valid_input){//checking string length for valid input
            std::vector<int> instruction = {0,0,0,0,0,0,0,0};


            for (int i =valid_input-1; i>=0 ; i-- ){//insert the digits to the vectoer with range check
                if (num%ten < min_digit || num%ten > max_digit){ 
                    throw std::out_of_range("Invalid Input");
                }

                    instruction.at(i) =  (num%ten);
                    num = num / ten;
            }
            //building a snowman    
            snow_guy += hats[instruction[H]-1]+"\n";
            snow_guy += lefthand_up[instruction[X]-1]+ "(" ;
            snow_guy += eyes[instruction[L]-1];
            snow_guy += nose[instruction[N]-1];
            snow_guy += eyes[instruction[R]-1]+")";
            snow_guy += righthand_up[instruction[Y]-1]+"\n";
            snow_guy += lefthand_down[instruction[X]-1]+"(";
            snow_guy += torso[instruction[T]-1]+")";
            snow_guy += righthand_down[instruction[Y]-1]+"\n (";
            snow_guy += base[instruction[B]-1]+")\n";
            }
        
        else{
        throw std::out_of_range("Invalid Input");;
    }
    return snow_guy;
}
}





    