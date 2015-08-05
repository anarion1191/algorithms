#include <iostream>
#include "binary_search.h"

using namespace std;

template<int SIZE>
void search_test(int (&array)[SIZE])
{
    cout<<"Testing existing elements:"<<endl;
    for(int i=0; i<SIZE; ++i) {
        int result = binary_search(array, array[i], 0, SIZE);
        if(result == -1) {
            cout<<"\tTest failed for item at index "<<i<<" -> "<<array[i]<<endl;
        } else {
            if(result == i) {
                cout<<"\tIndex["<<i<<"] OK!"<<endl;
            } else {
                cout<<"\tTest failed for item at index "<<i<<" -> "<<array[i]<<". The found index is "<<result<<endl;
            }
        }
    }
    cout<<"Testing non-existing elements:"<<endl;
    int result = binary_search(array, 0, 0, SIZE);
    if(result == -1) {
        cout<<"\tTest OK!"<<endl;
    } else {
        cout<<"\tTest failed! Was looking for 0. Found at "<<result<<". array["<<result<<"] = "<<array[result]<<endl;
    }
}

int main() {
    int array[] = {1, 21, 32, 52, 120, 234, 321, 534};
    cout<<"Testing binary search algorithm...";
    // Print data
    cout<<"[";
    for(const int& i: array) {
        cout<<i<<" ";
    }
    cout<<"]"<<endl;

    search_test(array);

    return 0;
}
