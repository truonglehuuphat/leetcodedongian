class Solution {
    public int findMinDifference(List<String> timePoints) {
        List<Pair<Integer,Integer>> list = new ArrayList<>();
        List<Integer> arr = new ArrayList<>();
        for(String s: timePoints){
            int mins = string2MM(s);
            arr.add(mins);
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
    int subtr(Pair<Integer,Integer> p1, Pair<Integer,Integer> p2){
        int res = 0;
        int min =0;
        int count = 0;
        //  System.out.println(p1.m + " " + p2.m);
        if(p1.m > p2.m){
            if(p1.m > p2.m){
                min = 60 - p1.m + p2.m ;
                count = 1;
            } else {
                min =  p2.m - p1.m;
            }
        } else {
            min = Math.abs(p2.m - p1.m);
        }
        int minH = 0;
        if(Math.abs(p1.H - p2.H)>=12){
            if(p1.H > p2.H ) {
                minH = 24 - p1.H + p2.H;
            }  else {
                minH = p2.H - p1.H;
            }
        } else {
            minH = Math.abs(p2.H - p1.H);
        }
        // System.out.println(minH + " "+ count+ " "+ min);
        res = (minH - count) * 60 + min;
        return res;
    }
}