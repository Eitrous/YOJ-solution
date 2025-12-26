void quicksort( int ary[ ], int left, int right )
{
    if(left < right){
        int m = partition(ary,left,right);
        quicksort(ary,left,m-1);
        quicksort(ary,m+1,right);
        return ;
    }
}

