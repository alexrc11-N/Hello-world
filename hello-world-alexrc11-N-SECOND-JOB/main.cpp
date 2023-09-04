/*********************
* My command line analyzer
**********************/

#include <iostream>
#include "functions.h"
#include "main.h"

int main(int argc, char** argv) {
    std::cout << "My command line analyzer" <<std::endl;
    std::cout<<"The number of command line parameters are: "<<argc<<std::endl;

if(argc >1){
    std::cout<< "The length of the first parameter is " << string_length(argv[1])<< std::endl;
}
int x=1;
    while(argc > x){
   std::cout << "The length of the parameter " << x << " is " << string_length(argv[x]) << std::endl;
 x++;
}

    return 0;
}
