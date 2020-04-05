bool isHappy(int n){
  
   int i,j,sum=0;
  while(sum!=1 && sum!=4)
  {
   sum=0;
   while(n>0)
  {
    j=n%10;
    sum+=(j*j);
    n=n/10; 
  }
  n=sum;
  }
  
  if(sum==1)
 return true;
    else 
        return false;
}

