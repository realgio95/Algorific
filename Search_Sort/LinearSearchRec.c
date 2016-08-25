//Recursive Version of Linear Serach
//Returns the number if found
//returns -1 if not found
int linearSearch(int a[], int n, int key)
{
    if (n < 0 ) 
    {
          return -1;
    }
    if(key == a[n-1])
    {
           return n - 1;
    } 
    return linearSearch(a, n-1, key); 
}
