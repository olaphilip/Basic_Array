#ifndef _ARRAY_H_
#define _ARRAY_H_

#include <cstring>          // for size_t definition
#include "Basic_Array.h"

// COMMENT Replace this with the structure we discussed in class:
//   Basic_Array
//   Fixed_Array: Basic_Array
//   Array : Basic_Array
//
// Otherwise, your implementation will not work as expected since
// the Array class has an expected interface, which you have changed.

//SOLUTION Changed the structure to what we discussed in class
/**
 * @class Array
 *
 * Basic implementation of a standard array class for chars.
 */
template <typename T>
class Array : public Basic_Array <T>
{
public:
  Array(void);
  Array (size_t length);
  Array (size_t length, T fill);
  Array (const Array & arr);
  ~Array (void);
  const Array & operator = (const Array & rhs);
  size_t size (void) const;
  size_t max_size (void) const;
  void resize (size_t new_size);
  
protected:

  char * data_;

  
  size_t cur_size_;

  
  size_t max_size_;

};

#include "Array.inl"
#include "Array.cpp"

#endif   // !defined _ARRAY_H_