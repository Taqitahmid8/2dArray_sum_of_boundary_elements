#include<iostream>
using namespace std;

int main(){

        int r,c;


      cout<<"Enter the number of row : ";
    cin>>r;

    cout<<"Enter the number of column : ";
    cin>>c;

   int matrix[r][c];
   cout<<"Enter the elements of the matrix : ";
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>matrix[i][j];
        }
    }
    cout<<"Matrix"<<endl;
    cout<<"--------"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;}
        int sum=0;
        for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i==0 || j==0 || i==r-1 || j==c-1){
                sum=sum+matrix[i][j];
            }
        }
    }
    cout<<"SUM:"<<sum;

}
