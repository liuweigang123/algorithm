#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> a{1,2,3,4,5,6,7,8,9};
    a.push_back(100);
    cout<<a[9]<<endl;
}