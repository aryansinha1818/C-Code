#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class rectangle{
    private:
        int length;
        int breadth;
    public:
        rectangle(){
            length = 1;
            breadth =1;
        }
        rectangle(int l, int b){
            setLength(l);
            setBreadth(b);
        }

        void setLength(int l){
            if(l>0)
                length = l;
            else
                length = 1;
        }

        void setBreadth(int b){
            if(b>0)
                breadth = b;
            else
                breadth = 1;
        }
        int getLength(){return length;}
        int getBreadth(){return breadth;}

        int area(){
            return length*breadth;
        }
        int perimeter(){
            return 2*(length+breadth);
        }
};
int main(){
rectangle r1(10,5);
cout<<r1.area()<<endl;

return 0;
}

