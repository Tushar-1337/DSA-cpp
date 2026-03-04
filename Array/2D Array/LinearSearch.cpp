#include<iostream>
#include<vector>
using namespace std;

pair<int,int> LinearSearch(int mat[][3], int rows, int cols, int key){  // column is necessary 
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(mat[i][j]==key){
              return {i,j};  
            }
        }
    }
    return {-1,-1};
}

int main(){
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int rows = 3, cols= 3;
    int key=9;

    pair<int,int> idxs = LinearSearch(matrix,rows,cols,key);

   cout<<idxs.first<<" "<<idxs.second<<endl;
    return 0;
}