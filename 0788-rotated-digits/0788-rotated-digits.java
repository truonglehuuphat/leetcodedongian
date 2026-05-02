class Solution {
    public boolean isValid(int n){
        String s = String.valueOf(n);
        String[] temp = {"2","5", "6","9"};
        String[] tempNoValid = {"3", "4", "7"};
        for(String st: tempNoValid){
            // System.out.println(st + " " + s.indexOf(st));
            if(s.indexOf(st) >= 0){
                return false;
            }
        }
        for(String st: temp){
            // System.out.println(st + " " + s.indexOf(st));
            if(s.indexOf(st) >= 0){
                return true;
            }
        }
        return false;
    }
    public int rotatedDigits(int n) {
        int count =0;
        for(int i = 1; i <= n; i++){
            if(isValid(i)){
                count++;
            }
        }
        return count;
    }
}