class Solution{
    private:
    bool isSafe(int x, int y, int n,vector<vector<int>> visited,vector<vector<int>> &m);
    
    if((X>=0 && x<n) && (y>=0 && y<n) && visited[x][y] == 0 && (m[x][y] == 1)){
        return true;
    }
    else{
        return false;
    }
    
    void solve(vector<vector<int>> &m, int n,vector<string>& ans, int x,
    int y,vector<vector<int>> visited, string path)
    
    //you have reached x,y
    
    //base case
    if(x == n-1 && y == n-1){
        ans.push_back(path);
        return;
    }
    visited[x][y]=1;
    
    //4 choices
    
    //Down
    int newX = x+1;
    int newy = y;
    if(isSafe(newx,newy,n,visited,m)){
        path.puch_back('D');
        solve(m,n,ans,newx,newy,visited,path);
        path.pop_back();
    }
    
    //left
    int newX = x;
    int newy = y-1;
    if(isSafe(newx,newy,n,visited,m)){
        path.puch_back('L');
        solve(m,n,ans,newx,newy,visited,path);
        path.pop_back();
    }
    //right
    int newX = x+1;
    int newy = y;
    if(isSafe(newx,newy,n,visited,m)){
        path.puch_back('R');
        solve(m,n,ans,newx,newy,visited,path);
        path.pop_back();
    }
    
    //up
    int newX = x_-;
    int newy = y;
    if(isSafe(newx,newy,n,visited,m)){
        path.puch_back('U');
        solve(m,n,ans,newx,newy,visited,path);
        path.pop_back();
    }
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> ans;
        if(m[0][0] == 0){
            return ans;
        }
        #include <bits/stdc++.h>
using namespace std;
int isprime(int num){
   if (num <= 1)
      return 0;
   for (int i = 2; i <= num/2; i++){
      if (num % i == 0)
         { return 0; }
   }
   return 1; //if both failed then num is prime
}
int countPrimes(int strt,int end){
   int count=0;
   for(int i=strt;i<=end;i++){
      if(isprime(i)==1)
         { count++; }
   }
   return count;
}
int main(){
   int START, END;
    cin>>START>>END;
   cout <<endl<<countPrimes(START,END);
   return 0;
}int srcx=0;
        int srcy=0;
        
        vector<vector<int>> visited=m;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                visited[i][j]=0;
            }
        }
        string path = "";
        solve(m,n,ans,srcx,scry,visited,path);
        sort(ans.begin(),ans.end())
        return ans;
    }
};

    
