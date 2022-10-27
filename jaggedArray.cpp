/*Suppose you are planning a picnic. You want to store the names of the students of your
class who have submitted their contribution money. Write a program that uses jagged
array to store the students’ names and then perform a search for your name.
*/

#include <iostream>
using namespace std;

int main(){
	int rows;
	cout << "Enter number of students of your class who have submitted their contribution money:";
	cin >> rows;
	int *number = new int[rows-1]; // An array to store columns in each of it's row
	char **array = new char *[rows-1]; // Jagged array that will store all the different sized arrays

	// Declaration of an array
	for (int i = 0; i < rows; i++) {
	    cout << "Enter number of letters in name of the student " << i+1 << ": ";
	    cin >> number[i];
	    array[i] = new char[*(number+i)];
	}
	  
	// taking input
	for (int i = 0; i < rows; i++) {
	    for (int j = 0; j < *(number+i); j++) { //Here *(number + i) is incrementing the head pointer to get the desired
	    	cout << "For student " << i+1 << " - Enter letter " << j+1 << " of his/her name: ";
	    	cin >> array[i][j];
	    }
	}
	
	// output values of an array
	cout<<"All the students who have submitted their contribution money are: "<<endl;
	for (int i = 0; i < rows; i++) {
	    for (int j = 0; j < *(number+i); j++) {
      		cout << array[i][j] << " ";
    	}
    	cout << endl;
 	}
 	
    return 0;
}
