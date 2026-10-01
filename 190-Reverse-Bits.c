int reverseBits(int n) {
    int mt=0;
    for(int i=0;i<32;i++){
        int bit=0;
       bit=n&1;
       n=n>>1;
       mt=mt<<1|bit; 
    }
    return mt;
    
}