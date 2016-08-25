<<<<<<< HEAD

//Iterative Linear Search 
//Returns the index if found 
//Returns -1 if not found
int LinearSearch(array, size, target)
{
      for (int i = 0; i<size-1; i++)
      {
            if (array[i] == target)
            {
                  return i;
            }
      }
      return -1;
}
=======

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
>>>>>>> 44a401b225d48712e9fc8f810f04eab4b28e17ac
