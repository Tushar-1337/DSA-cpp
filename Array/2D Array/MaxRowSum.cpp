#include<iostream>
#include<climits>
using namespace std;

int MaxRowSum( int mat[][3], int rows, int cols){
    int maxCount=INT_MIN;      // used INT_MIN coz if matrix has -ve nos. it will still points to +ve as maximum
    for(int i=0; i<rows; i++){
        int count = 0;

        for(int j=0; j<cols; j++){
            count = mat[i][j] + count;
        }
        maxCount = max(count,maxCount);
    }
    return maxCount;
}

int main(){
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int rows = 3, cols= 3;

    cout<<MaxRowSum(matrix,rows,cols);


    return 0;
}