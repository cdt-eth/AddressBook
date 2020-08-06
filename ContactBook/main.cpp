#include <iostream> // cin cout
#include <iomanip> // setw, setprecision, setfill
#include <fstream> // ofstream, ifstream
#include <string> // string
#include <array>
#include "Person.hpp"
using namespace std;


// initializing variables
int myContacts[] = {1,2,3,4,5,6,7};
int length = sizeof(myContacts)/sizeof(myContacts[0]);
int x = 6;

// binary search function
int binarySearch(int arr[], int arrLength, int index, int x){

if (index >= arrLength) {
    int mid = arrLength + (index - arrLength) / 2;
    cout << "the mid is now " << mid; // << endl;

    // x == mid, we're done
    if (arr[mid] == x){
        return mid;
    }

    // x < mid, x must be in left subarray
    if (arr[mid] > x){
        cout << " and since " << x << "(x) < " << mid << "(mid) we know " << x << " is in left subarray.\n" << endl;
        return binarySearch(arr, arrLength, mid - 1, x);
    }
     
    // x > mid, x must be in right subarray
    cout << " and since " << x << "(x) > " << mid << "(mid) we know " << x << " is in right subarray.\n" << endl;
    return binarySearch(arr, mid + 1, index, x);
    
    
}

  // Return -1 if element is not in array
  return -1;
    
}
    

int main() {
    int result = binarySearch(myContacts, 0, length-1, x);

    (result == -1) ? cout << "\n\nThe element " << x << " is not present in array.\n"
                   : cout << "\n\nElement is present at index " << result << endl;
    return 0;
}
