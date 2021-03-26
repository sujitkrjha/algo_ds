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


	//********** str.substr(pos,pos+len) **********
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

	//********** str.find('char') **********
	s1 = "hello hello";
	int idx1 = s1.find('h');
	int idx2 = s1.find('o');
	int idx3 = s1.find('x');
	cout<<idx1<<" "<<idx2<<" "<<idx3<<endl;
	// Output: 0 4 -1



	return 0;
}