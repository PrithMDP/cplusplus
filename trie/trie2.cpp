// Implementing a trie 
#include <iostream>
#include <vector>
using namespace std;

class trie_node
{
	private:
		int data;	//data		
		//trie_node* arr[26]; //(26) ; //pointer array for 26 alphabets called chars
		vector<trie_node*> arr;
		//trie_node* root;
	public:
		trie_node()	//default constructor
		{
			data =0; //representing empty
			arr.resize(26);
			for(int i=0;i<26;i++)
			{
				arr[i]=NULL;
			}
		}
		//insert
		void insert(string s)	//s = apt
		{
			//cout<<int(s[0])-97<<endl;
			//cout<<int(s[1])-97<<endl;
			cout<<(arr[0]==NULL)<<endl;
			int i=0;
			while(i<s.length())
			{
				int start=int(s[i])-97;
				if(arr[start]==NULL)
				{
					cout<<"empty\n";
					cout<<"inserting at "<<start<<endl;
					arr[start]= trie_node;
					//arr[start]->data=1;
				}
				i++;
			}

		}
		bool search( string s)
		{
			int start;
			int i=0;
			while(i<s.length())
			{
				start=int(s[i])-97;
				if(arr[start]==NULL)
				{
					cout<<"DOESNT EXIST\n";
				 return false;
				}
				i++;
			}
			cout<<"exists\n";
			return true;
		}

};


int main()
{
	trie_node* root;
	trie_node a;
	root= a;
	string s="apt";
	root->insert(s);
	root->search(s);
	root->insert("apts");
	root->search("apts");

  return 0;
}
