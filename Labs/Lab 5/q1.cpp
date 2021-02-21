#include<bits/stdc++.h>
using namespace std;
class circle{
    private :
     float r;
    public:
     void getdata();
     void area();
};
void circle::getdata(){
     cout<<"Enter the Value of r:"<<endl;
     cin>>r;
}
void circle::area(){
     float a;
     a=3.14*r*r;
     cout<<"Area is ="<<a<<endl;
}
int main(){
    circle c1,c2;
    c1.getdata();
    c1.area();
    return 0;
}
