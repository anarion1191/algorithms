#ifndef BINARY_SEARCH
#define BINARY_SEARCH

/****************************************************************************
 * Perform binary search in a container                                     *
 *                                                                          *
 * Returns:                                                                 *
 *      int -> the index of the found element, -1 in case it wasn't found   *
 *                                                                          *
 * Arguments:                                                               *
 *      source -> the source container                                      *
 *      value -> the element to look for in the container                   *
 *      begin -> the beginning index in container                           *
 *      end -> the index in container immediately past the last element     *
 ****************************************************************************/
#include <iostream>

template<typename Container, typename T>
int binary_search(Container source, const T& value, const int& begin, const int& end)
{
    
    int left = begin;
    int right = end-1;
    int mid;
    
    while(right >= left) {
        mid = (left + right) / 2;
        if(value == source[mid]) {
            //item found
            return mid;
        } else if(value > source[mid]) {
            //eliminate left half
            left = mid + 1;
        } else {
            //eliminate right half
            right = mid - 1;
        }
    }

    //item not found
    return -1;

}

#endif

