class Solution {
    public boolean rotateString(String s, String goal) {
        char[] arr = s.toCharArray();
        int len = s.length();
        String cmp = s;
        for(int i = 0; i < len ; i++){
            cmp = cmp.substring(1) + cmp.charAt(0);
            if(cmp.equals(goal)){
                return true;
            }
        }
        return false;
    }
}