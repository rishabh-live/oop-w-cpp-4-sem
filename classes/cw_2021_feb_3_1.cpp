// Write a Facto Calc program using classes


#include<iostream>
using namespace std;
 
class Facto
{
        private:
                int n,n1,f=1;
        public:
                void input();
                void calc();
                void display();
};
 
void Facto::input()
{
        cout<<"\nEnter any number : ";
        cin>>n;
}
 
void Facto::calc()
{
        n1=n;
        if(n==0||n==1)
        {
            cout<<"\nFactorial of Number [ "<<n<<" ] is : 1\n";
        }
        else
        {
                while(n>0)
                {
                        f=f*n;
                        n--;
                }
        }
 
}
 
void Facto::display()
{
        cout<<"\nFactorial of [ "<<n1<<" ] is :: "<<f<<"\n";
}
 
int main ()
{
        Facto f;
        f.input();
        f.calc();
        f.display();
 
        return 0;
}