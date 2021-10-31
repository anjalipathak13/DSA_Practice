class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
  //  static int [][] t  = new int[1001][1001]; 
    int max(int a,int b)
    {
        if(a>b)
        return a;
        else
        return b;
    }
 int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
     // int t[][] =new int[n+1][W+1];
    // vector<vector<int>> t;
    vector<vector<int>> t(n + 1, vector<int>(W + 1));
 
      for(int i=0;i<n+1;i++)
      {
          for(int j=0;j<W+1;j++)
          {
              if(i==0||j==0)
              t[i][j]=0;
          }
      }
      for(int i=1;i<n+1;i++)
      {
          for(int j=1;j<W+1;j++)
          {
              if(wt[i-1]<=j)
              t[i][j]=max((val[i-1]+t[i-1][j-wt[i-1]]),t[i-1][j]);
              else
              t[i][j]=t[i-1][j];
          }
      }
      return t[n][W];
    }
    
};