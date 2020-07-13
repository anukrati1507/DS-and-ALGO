// C++ program for the above approach 

#include <bits/stdc++.h> 
using namespace std; 

// Function to find the NGE 
void printNGE(int A[], int n) 
{ 

	// Formation of cicular array 
	int arr[2 * n]; 

	// Append the given array element twice 
	for (int i = 0; i < 2 * n; i++) 
		arr[i] = A[i % n]; 

	int next, i, j; 

	// Iterate for all the 
	// elements of the array 
	for (i = 0; i < n; i++) { 

		// Initialise NGE as -1 
		next = -1; 

		for (j = i + 1; j < 2 * n; j++) { 

			// Checking for next 
			// greater element 
			if (arr[i] < arr[j]) { 
				next = arr[j]; 
				break; 
			} 
		} 

		// Print the updated NGE 
		cout << next << " "; 
	} 
} 

// Driver Code 
int main() 
{ 
	// Given array arr[] 
	int n;
    cin>>n;


	int arr[1000000];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    } 

	// Function call 
	printNGE(arr, n); 

	return 0; 
} 
