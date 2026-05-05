class Solution {
    public double[] medianSlidingWindow(int[] nums, int k) {
        double[] res = new double[nums.length-k+1];
        int index = 0;
        PriorityQueue<Integer> left = new PriorityQueue<Integer>(Collections.reverseOrder());
        PriorityQueue<Integer> right = new PriorityQueue<Integer>();
        for(int i = 0; i < nums.length ; i++){
            left.add(nums[i]);
            right.add(left.poll());
            if(right.size() > left.size()) left.add(right.poll());
            if(right.size() + left.size() == k) {
                if(left.size() == right.size()){
                    res[index] = (double)((long)left.peek() + (long)right.peek()) /2;
                } else {
                    res[index] =  (double)left.peek();
                }
                if(!left.remove(nums[index])) right.remove(nums[index]);
                index++;
            }
            
        }
        return res;
    }
}