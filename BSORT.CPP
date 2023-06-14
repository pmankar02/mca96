#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
class LIST
{
		int *A,size;
	public:
		LIST(int);
		void SET_LIST();
		void VIEW_LIST();
		void BUBBLE_SORT();
};
LIST::LIST(int par)
{
	size=par;
	A =new int[size+1];
}
void LIST::SET_LIST()
{
	//cout<<endl<<"Enter list elements : ";
	for(int i=1;i<=size;i++)
		A[i]=random(1000);
}
void LIST::VIEW_LIST()
{
	cout<<"List elements are : ";
	for(int i=1;i<=size;i++)
		cout<<A[i]<<" ";
}
void LIST::BUBBLE_SORT()
{
	for(int i=1;i<=size-1;i++)
		for(int j=1;j<=size-i;j++)
			if(A[j]>A[j+1])
			{
				int temp = A[j];
				A[j] = A[j+1];
				A[j+1] = temp;

			}
}
////////////////////////////////////////////////////
void main()
{
	int n;
	clrscr();
	cout<<"\n Enter size of array : ";
	cin>>n;
	LIST obj(n);
	obj.SET_LIST();
	cout<<endl<<"List before sorting : \n";
	obj.VIEW_LIST();
	obj.BUBBLE_SORT();
	cout<<endl<<"List after sorting : \n";
	obj.VIEW_LIST();
	getch();
}


