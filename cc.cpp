#include <iostream>
using namespace std;
//using STL
#include <array> 
#include <vector> // vector - it is dynamic array in STL
#include <deque> // Double ended queue


int main()
{
    array<int, 5> a = {1, 2, 3, 4 ,5}; // we don't use this array in 
    //competitve programming because it is static array
    int size = a.size(); //only be used with class
    cout<<size<<endl;


    vector<int> v; // no need to enter the size because it 
    //allocate memeory dynamically

    v.push_back(23); // to enter element in vector array
    cout<<v[0]<<endl; 
    int s = v.size();
    v.push_back(24);
    v.pop_back(); // just like stack
    for(int i : v)
    {
        cout<<i<<" ";
    }
    
    cout<<"Size of vector is "<<s<<endl;
    // Once vector is full, its size becomes twice of its previous size


    // if you want to initalize the vector with your own size then --
    vector<int> V(5); // vector array of 5 elements all init to 0..will
    // be created

    deque<int> de;
    // insertion and deletion from both the end

    de.push_front(1);
    de.push_front(2);
    for(int i: de)
    {
        cout<<i<<" "<<endl;
    }
    de.push_back(0);
    de.pop_front();
    de.pop_back();
    cout<<"after"<<endl;
      for(int i: de)
    {
        cout<<i<<" "<<endl;
    }

    return 0;
}