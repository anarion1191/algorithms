#ifndef SEQUENTIAL_SEARCH
#define SEQUENTIAL_SEARCH

/********************************************************************
 * Perform sequential search on a range                             *
 *                                                                  *
 * Returns:                                                         *
 *     the index of the element, if found                           *
 *     -1 in case the element was not found                         *
 *                                                                  *
 * Arguments:                                                       *
 *     data -> the collection of elements to search                 *
 *     value -> the key value to search for                         *
 *     begin -> the beginning index, defaults to zero               *
 *     end -> the ending index, defaults to last valid index        *
 *                                                                  *
 * Note:                                                            *
 *     Technically, std::size_t should be chosen as the correct     *
 *     data type for indexing. However, to indicate value was not   *
 *     found in Container, -1 is returned which is a signed value.  *
 *     Because of this fact, int is chosen instead.                 *
 *                                                                  *
 * Container requirements:                                          *
 *     operator[]                                                   *
 ********************************************************************/
template<typename Container, typename T>
int sequential_search(Container source, const T& value, const int& begin, const int& end)
{
    for(int i = begin; i < end; ++i) {
        if(source[i] == value) {
            return i;
        }
    }
    return -1;
}


#endif
