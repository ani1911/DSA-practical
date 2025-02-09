#include<iostream>
#include<string>
using namespace std;

struct node{
 
  string label;
  int count;
  
  struct node * child[10];
};

class Gt{
public:
	
	struct node * root;
	
	
	Gt(){
	    root = NULL;
	
	}
	
	void create(){
	 root = new node;
	 
	 cout<<"Enter the book name : "<<endl;
	 cin>>root->label;
	 cout<<"Enter the no. of chapter : " <<endl;
	 cin>>root->count;
	 
	 for(int i = 0; i< root->count; i++){
	    
	    root->child[i] = new node;
	    
	    cout<<"Enter the chapter name : "<<i+1<<endl;
	    cin>>root->child[i]->label;
	    cout<<"Enter the no. of section : " <<endl;
	    cin>>root->child[i]->count;
	    
	    
	     for(int j =0 ; j< root->child[i]->count; j++){
             	
             	root->child[i]->child[j] = new node;
             	
             	cout<<"Enter the name of section : "<< i+1<< "-"<<j+1<<endl;
             	cin>>root->child[i]->child[j]->label;
             	cout<<"Enter the no. of sub-section: "<<endl;
             	cin>>root->child[i]->child[j]->count;
             	
                
                 for(int k = 0; k< root->child[i]->child[j]->count; k++){

                     root->child[i]->child[j]->child[k] = new node;
                     
                     cout<<"Enter the name of sub-section : "<<i+1 << "-" <<j+1<<"-"<<k+1<<endl;
             	     cin>>root->child[i]->child[j]->child[k]->label;
             	  
           
                     
                     
                  
                 
                 
                 }



             }
	 
	 
	 }
	 
	 
 }
	 
	 
	 void display(){
	 
	 cout<<"                          Book name :";
	 cout<<root->label<<endl;
	 
	 for(int i = 0; i< root->count; i++){
	   
	    cout<<"               Chapter name : "<<i+1 <<" :" ;
	    cout<<root->child[i]->label<<endl;
	    
	    
	     for(int j =0 ; j< root->child[i]->count; j++){
             	
             	cout<<"     Name of section : "<< i+1<< "-"<<j+1 <<" : ";
             	cout<<root->child[i]->child[j]->label<<endl;

             	
                
                 for(int k = 0; k< root->child[i]->child[j]->count; k++){
                     
                     cout<<"Name of sub-section : "<<i+1 << "-" <<j+1<<"-"<<k+1<<" ";
                   
             	    cout<<root->child[i]->child[j]->child[k]->label<<endl;
             	  
           
                     
                     
                  
                 
                 
                 }



             }
	 
	 
	 }
	 
	}
	 
	 

	 

	
};
	
	
	
	int main(){
	Gt obj;
	
	while (1)
    {
     
        cout << "1. Create" << endl;
        cout << "2. Display" << endl;
        cout << "3. Exit" << endl;

        cout << "Enter your choice: ";
        int choice;
        cin >> choice;

        switch (choice)
        {
        case 1:
            obj.create();
            break;
        case 2:
            obj.display();
            break;
        case 3:
            cout << "exit" << endl;
            return 0; 
        default:
            cout << "Enter a valid choice" << endl;
            break;
        }
    }
    return 0;
	}



// output

// 1. Create
// 2. Display
// 3. Exit
// Enter your choice: 1
// Enter the book name :
// Tree
// Enter the no. of chapter : 
// 2
// Enter the chapter name : 1
// A     
// Enter the no. of section : 
// 1
// Enter the name of section : 1-1
// a1
// Enter the no. of sub-section: 
// 1
// Enter the name of sub-section : 1-1-1
// a11
// Enter the chapter name : 2
// B
// Enter the no. of section : 
// 1
// Enter the name of section : 2-1
// b1
// Enter the no. of sub-section: 
// 1
// Enter the name of sub-section : 2-1-1
// b11
// 1. Create
// 2. Display
// 3. Exit
// Enter your choice: 2
//                           Book name :Tree
//                Chapter name : 1 :A
//      Name of section : 1-1 : a1
// Name of sub-section : 1-1-1 a11
//                Chapter name : 2 :B
//      Name of section : 2-1 : b1
// Name of sub-section : 2-1-1 b11
	







