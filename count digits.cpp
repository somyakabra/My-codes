class Solution{
  public:
    //Complete this function
    int countDigits(int n)
    {
       //Your code here
       if(n==0){
           return 1;
       }
       int res = 0;
       while(n>0){
           res++;
           n=n/10;
       }
       return res;
       
    }
};
