//Que:- https://www.geeksforgeeks.org/check-string-can-obtained-rotating-another-string-2-places/
// Check if a string can be obtained by rotating another string 2 places
bool isRotated(string str1, string str2)
{
    if(str1.length()!=str2.length())
        return false;
    int len = str1.length();
    if(len<=2 && str1==str2)
        return true;
    if(len>2 && str1==(str2.substr(len-2)+str2.substr(0,len-2)))
        return true;
    if(len>2 && str1==(str2.substr(2)+str2.substr(0,1)+str2.substr(1,1)))
        return true;
    return false;
}

// https://practice.geeksforgeeks.org/problems/immediate-smaller-element1142/
// Given an integer array Arr of size N. For each element in the array, check whether the right adjacent element (on the next immediate position) of the array is smaller. If next element is smaller, update the current index to that element. If not, then  -1.
void immediateSmaller(int *arr, int n) {
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
            arr[i]=arr[i+1];
        else
            arr[i]=-1;
    }
    arr[n-1]=-1;
}
