class Solution {
    public ArrayList<Integer> getMinMax(int[] arr) {
        // code Here
        ArrayList<Integer> result = new ArrayList<Integer>();
        int length = arr.length;
        int largest = arr[0];
        int smallest = arr[0];
        for(int i=1;i<length;i++){
            if(largest<=arr[i]){
                largest=arr[i];
            }
            if(smallest>=arr[i]){
                smallest=arr[i];
            }
            
        }
        result.add(smallest);
        result.add(largest);
       
        return result;
    }
}
