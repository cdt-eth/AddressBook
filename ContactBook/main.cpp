#include <iostream> // cin cout
#include <iomanip> // setw, setprecision, setfill
#include <fstream> // ofstream, ifstream
#include <string> // string
#include <array>
#include <set>
#include <algorithm>
#include "Person.hpp"
using namespace std;


// sorted arry
int myContacts[] = {1,2,3,4,5,6,7};
//int length = sizeof(myContacts)/sizeof(myContacts[0]);
int x = 6;

int unsorted[] = {10, 3, 12, 11, 7, 2, 1, 13, 5, 8, 9, 4, 6};
int length = sizeof(unsorted)/sizeof(unsorted[0]);

// <BINARY SEARCH>
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
// </BINARY SEARCH>


void addNames(){
    string name;
    cout << "Please enter a name: ";
    cin >> name;
    string arr[3] = {};
    arr[0] = name;
    
    cout << "Thanks, you entered '" << name << "'.\n\nPlease enter another name: ";
    cin >> name;
    arr[1] = name;
    
    cout << "The second name you entered was '" << name << "'.\n\nEnter one last name: ";
    cin >> name;
    arr[2] = name;
    cout << "The last name you entered was '" << name << "'." << endl;
    
    string nameArray;
    for (int i=0; i < (sizeof(arr)/sizeof(arr[0])); i++){
        nameArray += arr[i] + " ";
    }
    cout << "\nOur name array is: " << nameArray << endl;
}

void print(const string& item) {
    cout << item << endl;
}

void sortNames(){
    set<string> sortedItems;

    for(int i = 1; i <= 5; ++i)
    {
        string name;
        cout << i << ". ";
        cin >> name;

        sortedItems.insert(name);
    }

    for_each(sortedItems.begin(), sortedItems.end(), &print);
}


void bubbleSort(int arr[], int length){
    int i,j;
    
    for (i = 0; i < length-1; i++) {
        for(j = i+1; j < length; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void printArray(int arr[], int length){
    int i;
    for (i=0; i < length; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main() {
//    string name;
//    cout << "Please enter a name: ";
//    cin >> name;
//    string arr[3] = {};
//    arr[0] = name;
//
//    cout << "Thanks, you entered '" << name << "'.\n\nPlease enter another name: ";
//    cin >> name;
//    arr[1] = name;
//
//    cout << "The second name you entered was '" << name << "'.\n\nEnter one last name: ";
//    cin >> name;
//    arr[2] = name;
//
//    string nameArray;
//    for (int i=0; i < (sizeof(arr)/sizeof(arr[0])); i++){
//        nameArray += arr[i] + " ";
//    }
//
//    cout << "\n\nOur name array is: " << nameArray;

sortNames();
//addNames();
    
//bubbleSortNames(nameArray);
    // <BUBBLE SORT>
//    cout << "not sorted: ";
//    printArray(unsorted, length);
//    bubbleSort(unsorted, length);
//    cout << "now sorted: ";
//    printArray(unsorted, length);
    // </BUBBLE SORT>
    
    // <BINARY SEARCH>
    //    int result = binarySearch(myContacts, 0, length-1, x);
    //    (result == -1) ? cout << "\n\nThe element " << x << " is not present in array.\n"
    //                   : cout << "\n\nElement is present at index " << result << endl;
    // </BINARY SEARCH>
    return 0;
}
