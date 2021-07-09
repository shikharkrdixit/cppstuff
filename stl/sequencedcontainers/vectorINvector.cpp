#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> vec = {
        {11,12,14},
        {21,22,24,25,59},
        {28,27,56},
        {99,98}};
    cout << "Way 1\n";
    for (int i = 0; i < vec.size(); i++) {
        for (int num : vec[i]) {
            cout << num << " ";
        }
        cout << "\n";
    }
    cout << "\nWay 2\n";
    for (int i = 0; i < vec.size(); i++) {
        for (int num = 0; num < vec[i].size(); num++) {
            cout << vec[i][num] << " ";
        }
        cout << "\n";
    }

    return 0;
}