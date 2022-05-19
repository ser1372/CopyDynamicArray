#include <iostream>



void fillArray(int* const arr,const int size)
{
    for (int  i  = 0; i < size; i++)
    {
        arr[i]  = rand() % 10;
    }
}




void ShowArray(const int * const arr, const int size)
{
    for(int i = 0; i < size;i++)
    {
        std::cout << arr[i] << "\t";
    }
    std::cout << std::endl;
}







int main()
{
   int  size = 10;
   int *firstArray = new int[size];
   int *secondArray = new int [size];

   fillArray(firstArray,size);
   fillArray(secondArray, size);

   std::cout << "FirstArray =\t ";
   ShowArray(firstArray,size);
   std::cout << "SecondArray = \t";
    ShowArray(secondArray,size);
    delete [ ] firstArray;



    firstArray = new int [size];

    for(int i = 0; i < size;i++)
    {
        firstArray[i] = secondArray[i];
    }




    std::cout << "FirstArray =\t ";
   ShowArray(firstArray,size);
   std::cout << "SecondArray = \t";
   ShowArray(secondArray,size);



   delete [ ] secondArray;
   delete [ ] firstArray;







}




