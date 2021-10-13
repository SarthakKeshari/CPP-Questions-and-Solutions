/**
    Instead of Dynamic programming approach i sticked to hashing approach
    - Create a map for all the string in list of string array with count/frequency
    - No start iterating strings with L(length of each string) as the addition in each 
    - Maintain the count of string appread in the substring from (that start to totallength of big string) 
    - for Each iteraration see if both the hashmao match and have same frequncy of word 
    - If same add the starting index to result ArrayList
    **/

public class Solution {
    
    public static boolean comp(int l, String s2, Map<String, Integer> map){
        Map<String, Integer> m = new HashMap<>();
        for(int i=0;i<s2.length() -l+1;i = i+l){
            String substr = s2.substring(i, i+l);
            if(m.containsKey(substr))
                m.put(substr, m.get(substr)+1);
            else 
                m.put(substr, 1);
        }
        
        for(Map.Entry<String, Integer> x : map.entrySet())
            if(x.getValue() != m.get(x.getKey()))
                return false;
        return true;
    }
    
    public ArrayList<Integer> findSubstring(String A, final List<String> B) {
        Map<String, Integer> map1 = new HashMap<>();
        int length = B.get(0).length();
        int eachL = B.size();
        int totalLength = length*eachL;
        for(int i=0;i<B.size();i++){
            String s = B.get(i);
            if(map1.containsKey(s))
                map1.put(s, map1.get(s)+1);
            else 
                map1.put(s, 1);
        }
        ArrayList<Integer> result = new ArrayList<>();
        for(int i=0;i<A.length()-totalLength+1;i++){
            String str = A.substring(i, i+totalLength);
            if(comp(length, str, map1))
                result.add(i);
        }
        return result;
    }
}

