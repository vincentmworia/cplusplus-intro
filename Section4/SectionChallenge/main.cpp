#include <iostream>

int main(){
    int favorite_number; // Where my favorite number is stored
    /*
     Multiple line comment in c++ 
     */
    
    std::cout<< "Enter your favorite number between 1 and 100: ";
    std::cin>> favorite_number; 
    std::cout<< "No really, "<< favorite_number << " is my favorite number"<< std::endl;   
    return 0;
}
