int Solution::maxArea(vector<int> &A) {
    int l = 0, r = A.size()-1;
    int area = 0,minArea = -1;
    if(A.size() == 0)
        return area;
    while(l<r){
        minArea = (r-l)*(min(A[l],A[r]));
        if(minArea > area){
            area = minArea;
        }
        if(A[l] < A[r]) 
            l++;
        else
            r--;
        
        
    }
    return area;
}
