#include <iostream>

int main(){
   int var1{123};//declare and intialization
   std::cout << "var1 : " << var1 << std::endl;
var1=55;//assign
std::cout << "var1 : " << var1 << std::endl;
std::cout << std::endl;
std::cout << "------------------------" << std::endl;
std::cout << std::endl;
bool state {false};
std::cout << std::boolalpha;
std::cout << "state : " << state << std::endl;
state =true;//assign
std::cout << "state : " << state << std::endl;

// auto typereturn 0;
auto var3 {333u};
 
var3 =-22;
std::cout << "var3 : " << var3 << std::endl;

return 0;
}