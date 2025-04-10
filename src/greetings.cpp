//-----This is the main source file in this project------//
// Description:						 //
// Prints a custom message when passed as an argument    //
// else prints default message defined in utility        //
// date: 08.04.25					 //
// author: Tamasi Kar					 //
#include <string> 
#include <utils/tools.h>

int main(int argc, char *argv[]) {
  // define arguments to be passed here:
  std::string input;

  if(argc > 2) {
    // if there are arguments passed, use the first one
    input = std::string(argv[1]) + " " + std::string(argv[2]);
  } else {
    // if no arguments are passed, use the default message
    
    input = "this is a different default message by Selina";
  }  

  print_utility_message(input);
  return 42;
}

/*
  / \
 /   \    <----House
/     \
°______°
|     |            //\\    <----Tree
|     |           /||\\
|     |          //||\\
|     |            ||
_______°°°°°°°°°°°°°°°°°°°°°°°°°°°
*/

