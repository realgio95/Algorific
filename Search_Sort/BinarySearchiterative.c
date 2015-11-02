//Pre Condition: Array is sorted in ascending order from position 0 to len-1
//Post: Returns index(mid) if the target is found, -1 if not
int BinarySearchC(int arr[], int len, int target)
{
	  int first = 0;
    int last= len-1;
   	while (first < last) 
  	{
	  	  //Assert: if a[i]==val for any i, then first <= i && i <= upper */ 
      	int mid = (first + (last - first) / 2);

      	if (target <=  arr[mid])
		    {
            last = mid;
		    }
       	else
		    {
            first = mid+1;
		    }
	  }
   //This condition is outside of the while loop
   if ((first < len) && (arr[first] == target))
	 {
         return mid;
	 }
   else
	 {
       return -1;
	 }
}
