// First Repeating Element [GFG]  

#include<vector>
#include <algorithm>
#include <iostream>
#include <unordered_map>
using namespace std ;

class Solution {
public:
    int firstRepeated(vector<int> &arr) {
        int ans = -1;

        for (int i = 0; i < arr.size(); i++) {
            for (int j = i + 1; j < arr.size(); j++) {
                if (arr[i] == arr[j]) {
                    ans = i + 1;
                    return ans;
                }
            }
        }
        return ans;
    }
};


// optimal


int firstRepeated(vector<int> &arr) {
        int ans = -1;

        // using map to store frequency of each element.
        std::unordered_map<int, int> m;

        // storing the frequency of each element in map.
        for (int i = 0; i < arr.size(); i++)
            m[arr[i]]++;

        // iterating over the array elements.
        for (int i = 0; i < arr.size(); i++) {

            // if frequency of current element in map is greater than 1,
            // then we store the index and break the loop.
            if (m[arr[i]] > 1) {
                ans = i + 1;
                break;
            }
        }
        // returning the position of the first repeating element.
        return ans;
    }
