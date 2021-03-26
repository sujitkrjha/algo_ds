#include<bits/stdc++.h>
#include<string.h>
#include<typeinfo>

using namespace std;
int main()
{
	string s1,s2,s3,s4,s5,s6;
	//********** getline() :- This function is used to store a stream of characters as entered by the user in the object memory. **********
	getline(cin,s1);
	// USer input: hello world
	cout<<s1<<endl;
	//Output: hello world

	//********** push_back() :- This function is used to input a character at the end of the string. **********
	s1.push_back('!');
	cout<<s1<<endl;
	//Output: hello world!

	//********** pop_back() :- Introduced from C++11(for strings), this function is used to delete the last character from the string. **********
	s1.pop_back();
	cout<<s1<<endl;
	//Output: hello world


	//********** str.substr(pos,pos+len) :- **********
	s1 = "hello";
	s2 = s1.substr(1,4);
	s3 = s1.substr(2);
	cout<<s2<<" "<<s3<<endl;
	// Output: ello llo

	s4 = s1.substr(2,10);
	cout<<s4<<endl;
	// Output: llo

	s5 = s1.substr(5);
	if(s1[5]==NULL)
	    cout<<"yes"<<endl;
	else
		cout<<"No"<<endl;
	// Output: yes

	// s6 = s1.substr(6);
	// cout<<s5<<endl;
	// Output: error(out_of_range)

	//********** str.find('char') :- **********
	s1 = "hello hello";
	int idx1 = s1.find('h');
	int idx2 = s1.find('o');
	int idx3 = s1.find('x');
	cout<<idx1<<" "<<idx2<<" "<<idx3<<endl;
	// Output: 0 4 -1


	//********** capacity() :- This function returns the capacity allocated to the string, which can be equal to or more than the size of the string. Additional space is allocated so that when the new characters are added to the string, the operations can be done efficiently. ************

	s1 = "hello world!";
	cout<<s1.capacity()<<endl;
	// Output: 15

	//*********** resize() :- This function changes the size of string, the size can be increased or decreased. ***********
	s1.resize(5);
	cout<<s1<<endl;
	// Output: hello

	s1.resize(55);
	cout<<s1.capacity()<<endl;
	// Output: 55

	//********* length():-This function finds the length of the string **********
	s2 = "hello world!";
	cout<<s2.length()<<endl;
	// Output: 12

	//************ shrink_to_fit() :- This function decreases the capacity of the string and makes it equal to the minimum capacity of the string. This operation is useful to save additional memory if we are sure that no further addition of characters have to be made. ************

	s2 = "hello world!";
	cout<<s2.capacity()<<endl;
	// Output: 15
	s2.shrink_to_fit();
	cout<<s2.capacity()<<endl;
	// Output: 15


	//*********** begin() :- This function returns an iterator to beginning of the string.
	//*********** end() :- This function returns an iterator to end of the string.
	//*********** rbegin() :- This function returns a reverse iterator pointing at the end of string.
	//*********** rend() :- This function returns a reverse iterator pointing at beginning of string.



	//*********** copy(“char array”, len, pos) :- This function copies the substring in target character array mentioned in its arguments. It takes 3 arguments, target char array, length to be copied and starting position in string to start copying.

	s1 = "hello world";
	char str[20]={'\0'};
	s1.copy(str,4,1);
	cout<<str<<endl;
	// Output: ello

	//*********** swap() :- This function swaps one string with other.

	s1= "hello";
	s2= "world";

	s1.swap(s2);
	cout<<s1<<" "<<s2<<endl;
	// Output: world hello






	return 0;
}