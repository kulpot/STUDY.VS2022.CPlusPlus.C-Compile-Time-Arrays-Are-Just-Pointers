#include <cassert>
#include <iostream>
using std::cout;
using std::endl;

// -------------------------------------- C++ Compile-Time Arrays Are Just Pointers ----------------------------------
// ref link:https://www.youtube.com/watch?v=clRgx94BGHs&list=PLRwVmtr-pp05AW78n3IkMJ3M1dlQ-wgv1&index=6

void main()
{
	int ages[4];		// ages is the address of the first element of the array
	ages[0] = 37; ages[1] = 6; ages[2] = 93; ages[3] = 32;
	int* p = ages;		// p is pointing to the same address
	cout << *p << endl;		// output: points to first address which is 37
	
	//cout << ages << endl;
	//int anotherInt[4];
	//ages = &anotherInt;		// error 
	//cout << p << endl;
}


















// ---------------------------------------- C++ Arrays Intro ------------------------------------------
// ref link:https://www.youtube.com/watch?v=dcKD06RR5ZU&list=PLRwVmtr-pp05AW78n3IkMJ3M1dlQ-wgv1&index=5

//array =  a group of objects ex: int a[3] ={1,2,3};


//void main()
//{										// int = to 4 bytes
//	//int age1, age2, age3, age4;		// 4 bytes for every age in stack
//	int ages[4];						// 4 bytes for every aray of age in stack
//	ages[0] = 21;
//	ages[1] = 32;
//	ages[2] = 55;
//	ages[3] = 1;
//	for (int i = 0; i < 4; i++)
//		cout << ages[i] << endl;	//21
//									//32
//									//55
//}									//1























// ----------------------------- C++ - Using A Pointer to the Stack to Modify Another Function Instance's Data -------------------------------------
// ref link:https://www.youtube.com/watch?v=zPrU9AHerlg&list=PLRwVmtr-pp05AW78n3IkMJ3M1dlQ-wgv1&index=5

//void function2()
//{
//	int f2Int;
//	int* p = &f2Int;
//	for (int i = 0; i < 20; i++)
//		//cout << *(p + i) << endl;
//	{
//		if (*(p + i) == 92)
//		{
//			*(p + i) = 667;
//			break;
//		}
//	}
//}
//
//void function1()
//{
//	int f1Int = 92;
//	cout << f1Int << endl;
//	function2();
//	cout << f1Int << endl;
//}
//
//void main()
//{
//	function1();
//}





























// -------------------------------------- C++ Pointer Arithmetic -------------------------------------------------
// ref link:https://www.youtube.com/watch?v=7_0tXnn9zBk&list=PLRwVmtr-pp05AW78n3IkMJ3M1dlQ-wgv1&index=3

//void main()
//{
//	int* myIntPtr = new int[5];
//	//cout << myIntPtr << endl;			// address
//	for (int i = 0; i < 5; i++)
//		myIntPtr[i] = i * 2;			// output: 0, 2, 4, 6, 8
//	int* p = myIntPtr;
//	cout << *p << endl;			// 0
//	cout << p << endl;			// 000001CEBA322A20
//	//p = p + 1;
//	//cout << p << endl;			// 000001CEBA322A24
//	p++;
//
//	//for (int i = 0; i < 5; i++)
//	//	cout << myIntPtr[i] << endl;		// -842150451 x5
//	
//	for (int* p = myIntPtr; p < myIntPtr + 5; p++)
//		cout << *p << endl;				// output: 0, 2, 4, 6, 8
//	delete [] myIntPtr;
//
//	//int myInt = 9;
//	//int* myIntPtr = &myInt;
//	//cout << *myIntPtr << endl;			// 9
//	//cout << myIntPtr << endl;			// output address
//}


























// ---------------------------------- C++ Pointers Video 2 --------------------------------------------------
// ref link:https://www.youtube.com/watch?v=DSeBneAyDx4&list=PLRwVmtr-pp05AW78n3IkMJ3M1dlQ-wgv1&index=2

// pointer is just an address

//int programImageVariable;
//
//void main()
//{
//	int variable1 = 5;
//	int variable2 = 10;
//	int* pointer1 = &variable1;
//	int* pointer2 = &variable1;
//
//	cout << *pointer1 << endl;		// 5
//	cout << *pointer2 << endl;		// 5
//
//	pointer2 = &variable2;
//	cout << *pointer2 << endl;		// 10
//
//	*pointer2 = 23;
//	cout << *pointer2 << endl;		// 23
//	cout << variable2 << endl;		// 23
//
//	pointer1 = pointer2;
//	cout << *pointer1 << endl;		// 23
//
//	pointer1 = &programImageVariable;
//}



















// ----------------------------------- C++ Pointers Introduction --------------------------------------------
// ref link:https://www.youtube.com/watch?v=lAHgavXXWXM&list=PLRwVmtr-pp05AW78n3IkMJ3M1dlQ-wgv1

// C++ predecessor to java and C#

//void main() // functions
//{
//	int myVar = 23; // store in the memory stack
//	int *myPointer = &myVar;		// & - means what is the address of
//	//int yourInt, * yourIntPointer;
//	//int* myPointer;
//	
//	// myPointer ---> myVar
//	cout << myPointer << endl;    // 00000066DE56FC14 - address of myVar;
//	cout << (*myPointer) << endl;		// output value: 23
//	(*myPointer) = 15;
//	cout << myVar << endl;			// output modified value: 15
//}
