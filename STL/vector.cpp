//Vector : Code with Harry and Love Babbar

//Notes
// Vector pop : removes element from back
//Use auto for an already filled containers

#include<iostream>
#include<vector>
using namespace std;



int main(){

    vector<int> v;
    int arr[]={1,2,3,4,5};
    
    for(int i=0;i<5;i++){
        v.push_back(arr[i]);
    }
    
    // // cout<<v[1]<<endl;
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // v.push_back(5);
    // for(auto x:v){
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    // cout<<"The element at end "<<v.back()<<endl;
    // v.pop_back();
    // cout<<"The element at end "<<v.back()<<endl;
    // for(auto p:v){
    //     cout<<p<<" ";
    // }
    // cout<<endl;
    // cout<<v.at(2)<<endl;
    // cout<<"the size before clear "<<v.size()<<endl;
    // cout<<"the capacity "<<v.capacity()<<endl;
    // // v.clear();
    // cout<<"After clear "<<v.capacity()<<endl;

    // cout<<"the size is "<<v.size()<<endl;
    // cout<<"The element at front "<<v.front()<<endl;
    // cout<<"The element at end "<<v.back()<<endl;

    // vector<int> v(5,1);
    // for(auto it:v){
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    // for(auto it=v.begin();it!=v.end();it++)
    //     cout<<*it<<" ";

    
    
    
    
    //Harry





    // vector<int> v{1,2,3,4,5};
    // cout<<v[2]<<endl;
    // v.pop_back();
    // for(auto it:v){
    //     cout<<v[it]<<endl;
    // }


    //     vector<int> vec1;
    //     int element;
    //     for(int i =0;i<4;i++){
    //         cout<<"Enter an element to add to an vector";
    //     }

    // vector<int> v1 = {1,2,3};
    // vector<int> v2 = {4,5,6};

    // int n = v1.size();
    // int m = v2.size();

    // vector<int> v(n+m,0);

    // int k = 0;
    // for(int i = 0;i<n;i++ ){
    //     v[k++] = v1[i];
    // }

    // for(int i = 0; i<m; i++){
    //     v[k++] = v2[i];
    // }

    // for(int i = 0 ; i<n+m; i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    // cout<<"new"<<endl;
    // vector<int> vec;
    // int arr1[5] = {1,2,3,5,6};
    // for(auto it:vec){
    //     vec.push_back(arr1[it]);
    // }
    // for(auto it=vec.begin();it!=vec.end();it++){
    //     cout<<*it<<" ";
    // }
    return 0;
}