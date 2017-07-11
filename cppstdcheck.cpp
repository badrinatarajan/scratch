#include <iostream>
using namespace std;

int main() {

  /*
  //__cplusplus
  This macro is defined when the C++ compiler is in use. You can use __cplusplus to test whether a header is compiled by a C compiler or a C++ compiler. 
  This macro is similar to __STDC_VERSION__, in that it expands to a version number. 
  Depending on the language standard selected, the value of the macro is 
  
  199711L for the 1998 C++ standard, 
  201103L for the 2011 C++ standard, 
  201402L for the 2014 C++ standard, 
  or an unspecified value strictly larger than 201402L for the experimental languages enabled by -std=c++1z and -std=gnu++1z.
  */

  cout<<"__cplusplus is "<<__cplusplus<<endl;

  switch (__cplusplus){
  
    case 199711L: cout <<"C++ 1998 Standard"<<endl; break;
    case 201103L: cout <<"C++ 2011 Standard"<<endl; break;
    case 201402L: cout <<"C++ 2014 Standard"<<endl; break;

    default:
     cout <<"Unknown "<<endl;

  }

  return 0;
}

