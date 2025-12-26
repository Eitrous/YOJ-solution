int partition( int ary[ ], int left, int right )
{
    int k = ary[left];
    while(left < right){
        while(left < right && ary[right] >= k) right--;
        ary[left] = ary[right];
        while(left < right && ary[left] <= k) left++;
        ary[right] = ary[left];
    }
    ary[left] = k;
    return left;
}