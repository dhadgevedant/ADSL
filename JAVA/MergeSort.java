public class MergeSort {
    

    public static void main(String []Args){

    }

    public static void DevideMerge( int s, int e, int []inp, int mid){

        // here we are going to devide the array and merge it back

        int ls = mid - s + 1, rs = e - mid; // left and right array sizes 

        int[] l = new int[ls], r = new int [rs];// defining those sized arrays

        // now filling up left and right array
        for(int i=0; i < ls; i++){ l[i] = inp[i]; }

        for(int i=0; i < rs; i++){ r[i] = inp[ i + mid + 1 ] ;}

        //now merging those two arrays back into orignal array
        int orinalArrayIndex = s;
        int i=0,j=0;
        while( i < ls &&j < ls ){

            if(l[i]<r[j]){
                inp[orinalArrayIndex] = l[i];
                i++;
            }
            else{
                inp[orinalArrayIndex] = l[i];
                j++;
            }
            orinalArrayIndex++;
        }

        //fill up remaining elements
        while(i<ls){
        
            inp[orinalArrayIndex] = l[i];
            i++;
        }
        while(j<rs){
        
            inp[orinalArrayIndex] = r[j];
            j++;
        }
    }
    
    public static void SystemMergeSort(int s, int e, int []inp){


        if(s >= e)return;

        int mid = s + (e-s)/2;

        SystemMergeSort(s, mid, inp);
        SystemMergeSort(mid, e, inp);

        DevideMerge(s,e,inp,mid);
    };

    public static void mergeSort(int []inp){ SystemMergeSort(0, inp.length-1, inp);  }

}
