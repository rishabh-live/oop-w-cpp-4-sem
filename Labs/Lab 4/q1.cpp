// Write a C++ Program to for matrix operation using
// switch-case.
// (a) add two matrix
// (b) subtract two matrix
// (c) multiply two matrix
// (d) transpose of a matrix

#include<iostream>

    using namespace std;

     int main()
    {
      int m,n;



      int A[10][10],B[10][10],SUM[10][10],Sub[20][20],mlt[20][20],Trans[20][20],choice;

      cout<<"Enter which operation you want to perform \n + --> 1 \n '-' -->  2 \n * --->3 \n A(t) --> 4 \n";
      cin>>choice;
      cout<<"Enter number of raws and columns"<<endl;
      cin>>m>>n;


         cout<<"Enter value for matrix ";
      for (int i=0;i<m;i++)
        for (int j=0;j<n;j++){


            cin>>A[i][j];

        }

        cout<<"Enter value for matrix B \n";
         for (int i=0;i<m;i++)
        for (int j=0;j<n;j++){


            cin>>B[i][j];

        }

      switch(choice){
          case 1 :
                      for (int i=0;i<m;i++)
                           for (int j=0;j<n;j++){
                                    SUM[i][j]= A[i][j]+B[i][j];

                           }
                       for (int i=0;i<m;i++)

                           for (int j=0;j<n;j++)
                           {


                                   cout << SUM[i][j] << " \n"[j == n-1];
                           }

                      break;
          case 2:
                       for (int i=0;i<m;i++)
                           for (int j=0;j<n;j++){
                                    Sub[i][j]= A[i][j]-B[i][j];

                           }
                           for (int i=0;i<m;i++)
                           for (int j=0;j<n;j++){
                                   cout << Sub[i][j] << " \n"[j == n-1];

                           }
                        break;

         case 3:       for (int i=0;i<m;i++)
                           for (int j=0;j<n;j++){
                                    mlt[i][j]= 0;
                           }
                           for (int i=0;i<m;i++)
                           for (int j=0;j<n;j++)
                            for(int k=0;k<m;k++){
                              mlt[i][j]+=A[i][k] * B[k][j];
                           }
                           for (int i=0;i<m;i++)
                           for (int j=0;j<n;j++)
                            {
                                   cout << mlt[i][j] << " \n"[j == n-1];

                           }
                        break;
         case 4:            for (int i=0;i<m;i++)
                           for (int j=0;j<n;j++){
                                    Trans[j][i]= A[i][j];

                           }
                           for (int i=0;i<m;i++)
                           for (int j=0;j<n;j++){
                                   cout<< Trans[i][j] << " \n"[j == n-1];





                           }
                           break;
         default:
            cout<< "Please choose given task only \n";

             }

      return 0; // end the main function

    }