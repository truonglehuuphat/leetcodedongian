class Solution {
    public int findMinDifference(List<String> timePoints) {
        List<Integer> arr = new ArrayList<>();
        for(String s: timePoints){
            char[] arrStr = s.toCharArray();
            int hour = (arrStr[0]-'0') * 10 + (arrStr[1]-'0');
            int minute = (arrStr[3]-'0') * 10 + (arrStr[4]-'0');
            int totalMin = hour * 60+ minute;
            arr.add(totalMin);
        }
        Collections.sort(arr);
        int min = 10000;
        for(int i = 0 ; i < arr.size()-1; i++){
            for(int j = i+1; j <  arr.size(); j++){
                int temp =  subtime(arr.get(i), arr.get(j));
                if( temp < min) {
                    min = temp;
                }
            }
        }
        return min;
    }

    class Pair<K,V>{
        private K H;
        private V m;
        Pair(K H, V m){
            this.H = H;
            this.m = m;
        }
        public void setKey(K H){
            this.H = H;
        }
        public void setValue(V m){
            this.m = m;
        }
        public K getKey(){
            return this.H;
        }
        public V getValue(){
            return this.m;
        }
    };

    Pair<Integer,Integer> string2HHMM(String hhmm){
        int sum = 0;
        int hour = 0;
        int min = 0;
        String[] arr = hhmm.split(":");
        hour = Integer.parseInt(arr[0]);
        min = Integer.parseInt(arr[1]);
        Pair<Integer,Integer> pair= new Pair<>(hour,min);
        return pair;
    }
    int string2MM(String hhmm){
        int sum = 0;
        int hour = 0;
        int min = 0;
        String[] arr = hhmm.split(":");
        hour = Integer.parseInt(arr[0]);
        min = Integer.parseInt(arr[1]);
        return hour*60+ min;
    }
    int subtime(int time1, int time2){
        return Math.min(Math.abs(time1 - time2), 24*60 - Math.abs(time1 - time2));
    }
}