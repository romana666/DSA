//  #include<iostream>
// #include <vector>
// #include <algorithm>
// #include <numeric>
// using namespace std;

// int main(){
//     vector<int>v;
//     v.push_back(3);
//     v.push_back(2);
//     v.push_back(2);
//     v.push_back(9);



//     //adding values
//     v.insert(v.begin()+1,3,1);
    
//     for(int i = 0;i <v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     //output 3 1 1 1 2 2 9 

//     cout<<endl;

//     return 0 ;

// }




/* 
=========================swap===================

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vector1;
    vector<int> vector2;

    // Push values into vector1
    vector1.push_back(10);
    vector1.push_back(20);
    vector1.push_back(30);

    // Push values into vector2
    vector2.push_back(100);
    vector2.push_back(200);
    vector2.push_back(300);

    // Before swap
    cout << "Before Swap:\n";

    cout << "Vector1: ";
    for (int i = 0; i < vector1.size(); i++) {
        cout << vector1[i] << " ";
    }

    cout << "\nVector2: ";
    for (int i = 0; i < vector2.size(); i++) {
        cout << vector2[i] << " ";
    }

    // Swap the vectors
    swap(vector1,vector2);

    // After swap
    cout << "\n\nAfter Swap:\n";

    cout << "Vector1: ";
    for (int i = 0; i < vector1.size(); i++) {
        cout << vector1[i] << " ";
    }

    cout << "\nVector2: ";
    for (int i = 0; i < vector2.size(); i++) {
        cout << vector2[i] << " ";
    }

    return 0;
}


*/


/* 
==================================sort=======================

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {30, 10, 20, 50, 40};

    // Print original vector
    cout << "Original: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    // Sort in ascending order
    sort(v.begin(), v.end());

    cout << "\nAscending: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    // Sort in descending order
    sort(v.begin(), v.end(), greater<int>());

    cout << "\nDescending: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}


*/


//==================================reverse=================================

/* 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40, 50};

    // Print original vector
    cout << "Original: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    // Reverse the vector
    reverse(v.begin(), v.end());

    cout << "\nReversed: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    cout <<endl;

    return 0;
}
*/

//============================iterator====================

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40, 50};

    vector<int>::iterator it;

    // begin()
    it = v.begin();
    cout << "First element: " << *it << endl;

    // ++
    ++it;
    cout << "Second element: " << *it << endl;

    // +2
    it = it + 2;
    cout << "Fourth element: " << *it << endl;

    // --
    --it;
    cout << "Third element: " << *it << endl;

    // end()
    cout << "Total elements: " << v.end() - v.begin() << endl;

    return 0;
}

