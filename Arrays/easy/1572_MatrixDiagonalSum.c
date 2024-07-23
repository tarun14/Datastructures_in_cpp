int diagonalSum(int** mat, int matSize, int* matColSize) {
    int sum=0;

    for(int i=0; i<matSize; i++){
        sum = sum + mat[i][i];
        sum = sum + mat[i][matSize-1-i];
    }

    if(matSize%2==1){
        sum = sum - mat[matSize/2][matSize/2];//remove one extra addition for odd size matrix
    }

    return sum;
}
