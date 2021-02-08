// Write a C++ Program to for matrix operation using
// switch-case.
// (a) add two matrix
// (b) subtract two matrix
// (c) multiply two matrix
// (d) transpose of a matrix

#include <iostream>

using namespace std;


class Matrix{
    private:
        int m,n; 
        int A[10][10],B[10][10],SUM[10][10],Sub[20][20],mlt[20][20],Trans[20][20],choice;
    public:
        void addMatrix();
        void subtractMatrix();
        void multiplyMatrix();
        void transposeMatrix();
        void resetMatrix();
        void showMenu();
};

void Matrix::addMatrix(){
    for (int i=0;i<m;i++){
                           
                       for (int i=0;i<m;i++)

                           for (int j=0;j<n;j++)
                           {


                                   cout << SUM[i][j] << " \n"[j == n-1];
                           }
                           }
}

void Matrix::subtractMatrix(){
    cout << "Cool";
}

void Matrix::multiplyMatrix(){
    cout << "Multiply Success";
}

void Matrix::transposeMatrix(){
    cout << "Transpose Success";
}
void Matrix::showMenu(){
    cout<<"Enter which operation you want to perform \n Add Matrix --> 1 \n Sub Matrix --> 2 \n Mul Matrix --> 3 \n Tra Matrix --> 4 \n";
    cin>>choice;
    cout<<"Enter number of raws and columns"<<endl;
    cin>>m>>n;
}

int main(){
    Matrix mtrix;

    mtrix.showMenu();


    return 0;
}