#include <iostream> 
#include <time.h>
#include "LinkedList.h"
using namespace std;



int main()
{
	IList* ListaPrima = new LinkedList(); 
    
	ListaPrima->add(10);
	ListaPrima->add(23);
	ListaPrima->add(25);
	//ListaPrima->add(104,0);
	ListaPrima->add(52,3);

	for(int i = 0;i<ListaPrima->size();i++){
		cout<<ListaPrima->get(i)<<" ";
	}
	cout<<endl;
	//ListaPrima->remove(3);
	//ListaPrima->remove(0);
	for(int i = 0;i<ListaPrima->size();i++){
		cout<<ListaPrima->get(i)<<" ";
	}
    cout<<endl;
    ListaPrima->remove(2);



	return 0;
}