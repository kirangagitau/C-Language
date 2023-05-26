/**
* pointer - method to deal with pointers
* main - of type int, this is main function.
* @ans: the working around to, answer.
* @ptr: first pointer.
* @ptr1: second pointer (pointer to pointer).
*/


int pointer();

int main()
{
    int ans;

    ans = pointer();
    printf("the answer is: %d \n",ans);

    return 0;
}

int pointer()
{
    int ans = 123;
    int* ptr;
    int** ptr1;

    ptr = &ans;
    ptr1 = ptr;
  
  return (*ptr1);
}
