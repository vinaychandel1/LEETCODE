

int maxProfit(int* prices, int pricesSize){
   
   int profit = 0;
    int diff=0;
    for(int i=1; i<pricesSize; i++){
      diff = prices[i]-prices[i-1];
        if(diff > 0){
            profit += diff;
        }
       
}
    free(prices);
     return profit;
}

