#include<iostream>
using namespace std;

int insertionSort(int arr[], int n)
{   
     
	for(int i = 1; i<n;i++)
	{
		 int temp = arr[i];
		
	int  j = i-1;
		for(;j>=0 ;j--)
		{
			if(arr[j]>temp)
			{
				arr[j+1]=arr[j];
			}
			else{
				break;
			}
		}
		arr[j+1]= temp;
	}
	

}

   void printArray(int arr[],int n)
   {
	   	for(int i =0;i<n;i++)
		 {
		 	cout<<arr[i]<<" ";
		 }
   }

int main()
{
	int arr[]={6,4,2,1,3};
	int n = sizeof(arr)/sizeof(arr[0]);
	 insertionSort(arr,n);
    printArray(arr,n);

	
	
}
