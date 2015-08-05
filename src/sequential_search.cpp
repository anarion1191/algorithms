#include <iostream>
#include "sequential_search.h"

using namespace std;

int main() {
    int array[] = {1, 21, 32, 52, 120, 234, 321, 534};
    cout<<"Searching for 322 in array... ";
    int result = sequential_search(array, 322, 0, 8);
    if(result == -1) {
        cout<<"not found!"<<endl;
    } else {
        cout<<"found at index "<<result<<endl;
    }
    return 0;
}
