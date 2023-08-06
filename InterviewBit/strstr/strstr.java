public class Solution {
    public int strStr(final String A, final String B) {
        int res=-1;
        int len=B.length();
        for(int i=0;i<A.length()-len+1;i++){
        
                    String str=A.substring(i,i+len);
                    if(str.equals(B)){
                        res=i;
                        break;
                    }
                }
                return res;
    }
}
