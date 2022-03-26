	long long subMatrixSum(vector<int> arr[], int n, int m, int x1, int y1, int x2,int y2)                      
  {
	    // code here
	    int x=x1-1;
	    int y=y1-1;
	    long long sum=0;
	    for(int i=x;i<=(x2-1);i++)
	    {
	        for(int j=y;j<=(y2-1);j++)
	        {
	            sum+=arr[i][j];
	        }
	    }
	    return sum;
	}
