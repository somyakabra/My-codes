class Solution{
  public:
    //Complete this function
    int RecursivePower(int n,int p)
    {
        //Your code here
        if(p==0){
            return 1;
        }
        int a = RecursivePower(n,p/2);
        if(p%2==0){
            return a*a;
        }
        else{
            return n*a*a;
        }
        
    }
};
