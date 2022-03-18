/*
An array is monotonic if it is either monotone increasing or monotone decreasing.

An array nums is monotone increasing if for all i <= j, nums[i] <= nums[j]. 

An array nums is monotone decreasing if for all i <= j, nums[i] >= nums[j].

Given an integer array nums, return true if the given array is monotonic, or false otherwise.
*/


#include <iostream>
using namespace::std;

// prototypes:

bool monotoneArray(int [], int);
bool monotoneIncreaseCheck(int [], int);
bool monotoneDecreaseCheck(int [], int);

int main(){
    
    const int arrSize = 4;
    int arr[arrSize] = {2, 5, 3, 1};
    bool monotone;
    
    monotone = monotoneArray(arr, arrSize);
    if (monotone)
        cout << "The array is monotone." << endl;
    else
        cout << "The array is not monotone." << endl;
        
       return 0;
    
}
bool monotoneArray(int arr[], int arrSize){
    
    bool monotoneCheck = false;
    if  (monotoneIncreaseCheck(arr, arrSize)){
        return true;
    }
    else if (monotoneCheck = monotoneDecreaseCheck(arr, arrSize)){
            return true;
        }
    else
        return false;
    return monotoneCheck;
}
bool monotoneIncreaseCheck(int arr[], int arrSize){
    bool monotone = false;
    for (int i = 0; i < arrSize; i++){
        for(int j = 0; j < arrSize; j++){
            if (arr[i] <= arr[j])
                monotone = true;
            else
                return false;
        }
    }
    return monotone;   
}
bool monotoneDecreaseCheck(int arr[], int arrSize){
    bool monotone = false;
    for (int i = 0; i < arrSize; i++){
        for(int j = 0; j < arrSize; j++){
            if (arr[i] >= arr[j])
                monotone = true;
            else
                return false;
        }
    }
    return monotone;    
}

    

