int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int wealth=0, highestWealth=0;

    for(int i=0; i<accountsSize; i++){
        for(int j=0; j<*accountsColSize; j++){
            wealth = wealth + accounts[i][j];
        }
        if(wealth > highestWealth){
            highestWealth = wealth;
        }
        wealth = 0;//Reset
    }

    return highestWealth;
}
