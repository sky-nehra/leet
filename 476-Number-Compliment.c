int findComplement(int num) {
       int x=num;
      int max=0;
      int unsigned b=0;
      while(num!=0){
        max=(max<<1)|1;
        num=num>>1;
      }
       
       return max^x;   
}