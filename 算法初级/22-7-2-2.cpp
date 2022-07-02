#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

// vector<int>  num;
vector<int>  odd;
vector<int>  even;

int main()
{
    int i,num;
    for(i = 0; i < 10; i++)
    {
        cin >> num;
        if(num % 2)
            odd.push_back(num);
        else
            even.push_back(num);
    }

    sort(odd.begin(),odd.end());
    vector<int>::reverse_iterator revit;
    for(revit = odd.rbegin(); revit != odd.rend();revit++)
        cout << *revit << " "  ;
    
    sort(even.begin(),even.end());
    vector<int>:: iterator itr;
    for(itr =even.begin(); itr != even.end(); itr++ )
        cout << *itr << " ";
    cout << endl;

    return 0;

}