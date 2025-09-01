//package JAVA;

public class BinarySearch {
    
    public static void main( String []args){
        
        int []arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        
        int position = binarySearch(9, arr);
        
        System.out.println(position);
    }

    public static int binarySearch( int target, int []inp ){

        int start = 0, end = inp.length - 1, mid;

        while(start <= end){
            
            //mid calculation is such so that adding 
            //start and end wont exceed the integer limit
            mid = start + (end - start)/2;

            if(inp[mid] == target) return mid;
            
            else if(inp[mid] < target) start = mid + 1;

            else end = mid - 1;
        
        }
        return -1;
    }

}
