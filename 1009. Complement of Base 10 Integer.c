

int bitwiseComplement(int N){
    
    int i=0,j=0;
    while(i<N){
        i+=pow(2,j);
    j++;
    }
    return (i-N);
}

