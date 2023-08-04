int Solution::searchMatrix(vector<vector<int> > &A, int B) {
     int n=Ai = 0, j = n-1;  //set indexes for top right element
   while ( i < n && j >= 0 )
   {
    if ( A[i][j] == B )
      {
         return 1;
      }
     if ( mat[i][j] > x )
        j--;
      else //  if mat[i][j] < x
        i++;
   }
 

    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
