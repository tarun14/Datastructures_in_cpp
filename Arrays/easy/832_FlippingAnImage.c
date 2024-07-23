/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** flipAndInvertImage(int** image, int imageSize, int* imageColSize, int* returnSize, int** returnColumnSizes) {
    
    *returnSize = imageSize;
    *returnColumnSizes = imageColSize;

    //Flip horizontally
    for(int i=0; i<imageSize; i++){
        for(int j=0; j<*imageColSize/2; j++){
            int temp = image[i][j];
            image[i][j] = image[i][imageSize-1-j];
            image[i][imageSize-1-j]=temp;
        }
    }

    //Invert
    for(int i=0; i<imageSize; i++){
        for(int j=0; j<*imageColSize;j++){
            if(image[i][j]==0){
                image[i][j]=1;
            }else{
                image[i][j]=0;
            }
        }
    }

    return image;
}
