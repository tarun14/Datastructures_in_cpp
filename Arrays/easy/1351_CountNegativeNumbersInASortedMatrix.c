int countNegatives(int** grid, int gridSize, int* gridColSize) {
    int count=0;

    for(int i=gridSize-1;i>=0; i--){
        for(int j=*gridColSize-1; j>=0; j--){
            if(grid[i][j]>=0){
                break;
            }else{
                count++;
            }
        }
    }

    return count;
}
