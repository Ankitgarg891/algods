class Solution {
    public int[] twoSum(int[] nums, int target) {
        
        HashMap <Integer,Integer> ha= new HashMap<Integer,Integer>();
        
        for (int i=0;i<nums.length;i++){
            ha.put(i,nums[i]);
        }
        
        Arrays.sort(nums);
        
        int a = 0;
        int b = nums.length -1 ;
        
        while (a <= b){
            
            int sum = nums[a]+nums[b];
            if (sum == target){
                break;
            }
            if (sum<target)
            {a++;}
            else
            {b--;}
        }
        int val1 = nums[a];
        int val2 = nums[b];
        int ans[] = new int[] {-1,-1};
        
        for (Integer i : ha.keySet())
        {
            if (ha.get(i) == val1 && ans[0]==-1)
            {
                ans[0]= (i);
                
            }
            else if (ha.get(i) == val2){
                ans[1] = (i);

            }
        }
        
        return ans;
    }
}