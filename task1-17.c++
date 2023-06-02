 Задача 7
#include <iostream>

using namespace std;

int main() {
int A,B,C;
cout<<"A:";
cin>>A;
cout<<"B:";
cin>>B;
cout<<"C:";
cin>>C;
if (B>A&&B<C || B<A&&B>C){
	cout <<"True";
}	
else {
	cout<<"False:";
}
}
---------------------------------------------------------------------------------------------
Задача 17
#include <iostream>

using namespace std;

int main() {
int A,B;
cout<<"A:";
cin>>A;

if (A%2!=2&& A>99 && A<1000) {
	cout<<"True";
}
else{
	cout<<"False";
}
}
___________________________________________________________________
Задача 24
#include <iostream>

using namespace std;

int main() {
float A,B,C;
float D;
cout<<"A:";
cin>>A;
cout<<"B:";
cin>>B;
cout<<"C:";
cin>>C;
D= (B*B) - (4*A*C);
if (D>=0){
	cout<<"True";
	}	
else	{ 
	cout<<"False";	
	}
}
______________________________________________________________________
Задача 33
#include <iostream>

using namespace std;

int main() {	
        int a,b,c;
	cout<<"a:";
	cin>>a;
	cout<<"b:";
	cin>>b;
	cout<<"c:";
	cin>>c;	
	if ( (a+b)>c && (a+c)>b && (b+c) >a ){
		cout<<"True";
	}
	else {
		cout<<"False";
	}
}
_________________________________________________________________________
Задача 37
#include <iostream>
#include <cmath>
using namespace std;

int main() {
int x1,x2,y1,y2;
    cout<<"x1:";
    cin>>x1;
    cout<<"x2:";
    cin>>x2;
    cout<<"y1:";
    cin>>y1;
    cout<<"y2:";
    cin>>y2;
    if (abs (x1-x2) <=1 && abs(y1-y2)<=1){
    	cout<<"True";
	}
	else {
		cout<<"False";
	}
	
	}

