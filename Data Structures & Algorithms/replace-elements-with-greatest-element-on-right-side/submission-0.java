class Solution {
    public int[] replaceElements(int[] arr) {
        int n=arr.length;
        int [] ans= new int[n];
        for(int i=0; i<n; i++){
            int max = -1;
            int j=i+1;
            while(j<n){
                if(arr[j]>max){
                    max= Math.max(max, arr[j]);
                }
                j++;
            }
            ans[i]=max;
        }
        return ans;
    }
}