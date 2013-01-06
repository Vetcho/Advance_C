#include <stdexcept> // stdexcept header file contains runtime_error
using std::runtime_error; // standard C++ library class runtime_error


class NoneExistingPlayerFile : public runtime_error 
{
public:
   // constructor specifies default error message
   NoneExistingPlayerFile()
      : runtime_error( "no such a file!" ) {}
}; // end class NoneExistingPlayerFile
