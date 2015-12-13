
//Iterative Linear Search 
//Returns the index if found 
//Returns -1 if not found
int LinearSearch(array, size, target)
{
      for (int i = 0; i<size; i++)
      {
            if (array[i] == target)
            {
                  return i;
            }
      }
      return -1;
}
