 #include<iostream>
using namespace std;  
    int main ()  
    {  
        int myNum = 10;  
        int *ptr;  
        ptr = &myNum; // pointer ptr is pointing to the address of myNum  
        cout<<"Address of myNum:"<<ptr; // Address of myNum will be printed   
        cout<<"\nValue stored at ptr:"<<*ptr;
	 // value stoted at the address contained by ptr i.e. 10 will be printed 
       return 0; 
}


