#include <iostream>
#include <string>
int main(){

    std::string full_name;

    //asking user's name and storing it in the variable "full_name"
    std::cout << "Hi there! Enter your name:\n";
    std::getline(std::cin, full_name);

  std::cout << "Hello " << full_name << "." << std::endl;
  return 0;
}
