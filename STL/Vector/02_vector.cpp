#include<iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
    vector<int>v;
    v.push_back(3);
    v.push_back(2);
    v.push_back(2);
    v.push_back(9);

    for(int i = 0;i <v.size();i++){
        cout<<v[i]<<" ";
    }

    cout <<endl;

    //erase any value
    //v.erase(v.begin()+0);

    //print after erase
    // for (int i = 0; i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }

    //multiple value erase
    v.erase(v.begin()+1,v.end());
    for(int i = 0;i <v.size();i++){
        cout<<v[i]<< " ";
    }

    cout<<endl;

    return 0;
}