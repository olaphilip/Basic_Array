#include "Array.h"
#include <stdexcept>         // for std::out_of_bounds exception
#include <iostream>

template <typename T>
Array <T>::Array (void)
: cur_size_(0), 
max_size_(20), 
data_(new char[max_size_])
{
    
}


template <typename T>
Array <T>::Array (size_t length)
: cur_size_(0), 
max_size_(length), 
data_(new char[length])
{

}


template <typename T>
Array <T>::Array (size_t length, T fill)
: cur_size_(length), 
max_size_(length), 
data_(new char[length])
{
    for (int i = 0; i < length; i++){
        data_[i] = fill;
    }
}

template <typename T>
Array <T>::~Array (void)
{
    delete [] data_;
}


template <typename T>
const Array <T> & Array <T>::operator = (const Array & rhs)
{
    if(*this == this){
        return *this;
    }
    if (rhs.max_size_ > max_size_){
        max_size_ = rhs.max_size_;
        cur_size_ = rhs.cur_size_;
        
        for (int i = 0; i < cur_size_; i++){
            data_[i] = rhs.data_[i];
        }
    }
    return *this;
}


template <typename T>
void Array <T>::resize (size_t new_size)
{
    if (new_size > cur_size_){
        char *temp_data_ = new char[new_size];
        for (int i = 0; i < cur_size_; i++){
            temp_data_[i] = data_[i];
        }
        max_size_ = new_size;
        cur_size_ = new_size;
        delete[] data_;
        data_ = temp_data_;
    }
    else if (cur_size_ < new_size){
        char *temp_data_2 = new char[new_size];
        for (int i = 0; i < cur_size_; i++){
            temp_data_2[i] = data_[i];
        }
        max_size_ = new_size;
        cur_size_ = new_size;
        delete[] data_;
        data_ = temp_data_2;
    }
}