/*Pairs 
#include<bits/stdc++.h>
using namespace std;

int main(){
    pair <int,string> p; //syntax of pair
   // p = make_pair(2 , "abc"); // how to take input of pair
    p = {2 , " abc"} ;// second method of taking input
    cout << p.first << "" << p.second << endl; // For printing a Pair


    int a[] = {1,2,3};
    int b[] = {2,3,4};
    pair <int,int> p_array[3];
    p_array[0] = {1,2};
    p_array[1] = {2,3};
    p_array[2] = {3,4};
    for(int i = 0; i < 3; ++i){
        cout << p_array[i].first <<" " <<p_array[i].second << endl;
         /*1 2
          2 3
          3 4  Output
          

  pair <int,string> p; 
   cin >> p.first;
   cout << p.first;
   // For take input 
*/
//Vectors
#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> v){
    cout << "size:" << v.size() << endl;
    for(int i = 0; i< v.size(); ++i){
        //v.size() -> 0(1)
        cout << v[i] << " ";
    }
    cout << endl;
}
int main(){
    vector<int>v; // syntax of pair
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        v.push_back(x); // with push back function we can take input in vector

    }
    printVec(v);

}
  
    
    



