#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* the code I wrote to be able to do 4 operations in mathematics */

int main(int argc, char** argv) {
	
	
    int a = 0;
    int b = 0;
    char islem = '+';
    
    while(true) {
    	cout << "first number "<<endl;
    	cin >> a;
    	cout << "second number "<<endl;
    	cin >> b;
    	
    	cout << "enter the transaction(+ - / *): " <<endl;
    	cin >> islem;
    	
    	switch(islem) {
    		case '+':
    		cout << "result: " << a + b <<endl;
    		break;
    	    case '-':
    		cout << "result: " << a - b <<endl;
    		break;
    	    case '*':
    		cout << "result: " << a * b <<endl;
    		break;
    		case '/':
    		cout << "result: " << a / b <<endl;
     		break;
     		default:
            cout << "unknown transaction!!!" << endl;
            break;
           
            }
    	
    }
    	return 0;	
    
    		
    }
    	
    	
