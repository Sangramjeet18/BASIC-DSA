#include <iostream>
using namespace std;


/*int main() {
   cout << "APNA COLLEGE\n";
    cout << "SANGRAMJEET CHOUDHURY \t I AM ";
    int age=19;
    float CGPA=7.62;
    cout << age<< endl;
    cout << CGPA<< endl;
    int relation;
    cout << "HOW MANY?:-"<< endl;

    cin>>relation;
    cout<<"RELATION STATUS IS"<<endl;
    cout<<relation<<endl;
    int n=18;
    
}

int main(){
    char Z;
    cout<<"ENTER  A CHARACTER TO CHECK IS IT BIG OR SMALL\n";
    cin>>Z;
    if(Z>=97 && Z<=122){
        cout<<"SMALL HAND\n";
    }
    else if(Z>=65 && Z<=90){
        cout<<"BIG HAND\n";
    }
    else{
        cout<<"UNDEFINED\n";
    }
    return 0;

}
    
   int main(){
      int n=10;int sum=0;
      for(int i=0;i<=n;i++){
        sum += i;
        cout << sum << "\n";
      }

   }

int main(){
    int n,a;
    cout<<"ENTER:";
    cin>>n;
    cout<<"ENTER NUMBERS:";
    cin>>a;
    
}

int main(){
    int n=4;int num=1;
    cout<<"ENTER:";
    cin>>n;
    for(int i=1;i<=n;i++){
        ;
       
        for(int j=1; j<=n;j++){
            cout<< num;
            num++;
        }
        cout<<endl;
    }
    return 0;

}
    

   int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
   }
   int main(){
    int n;
    cout<<"ENTER:\n";
    cin>>n;
    cout<<factorial(n)<<endl;
    return 0;
   }
    
int swap(int n,int x){
    int temp;
    temp=n;
    n=x;
    x=temp;
    return n;


}   
int main(){
    int a,b;
    cout<<"ENTER:"<<endl;
    cin>>a;
    cout<<"ENTER:"<<endl;
    cin>>b;
    cout<<swap(a,b)<<endl;
    cout<<a<<endl;
    return 0;
}

int swap1(int n, int x){
    n=n+x;
    x=n-x;
    n=n-x;
    return x,n;
}
int main(){
    int a,b;
    cout<<"ENTER:"<<endl;
    cin>>a;
    cout<<"ENTER:"<<endl;
    cin>>b;
    cout<<"AFTER SWAPING A is"<<endl;
    cout<<"A WILL BE :"<<swap1(a,b)<<endl;
    
    return 0;
}

void calculate(int num1,int num2,char op){
    cout<<"RESULT"<<endl;
    switch(op){
    case '+':
        cout<<num1+num2<<endl;
        break;
    case '*':
    cout<<num1*num2<<endl;
        break;
    case '-':
        cout<<num1-num2<<endl;
        break;
    case '/':
        if(num2 <=0.0){
            cout<<num1/num2<<endl;
        }
        else{
            cout<<"ERROR"<<endl;
        }
        break;

    }
    return ;

}
int main(){
    int a,b;
    char op;
    cout<<"ENTER NUM1:"<<endl;
    cin>>a;
    cout<<"ENTER NUM2:"<<endl;
    cin>>b;
    cout<<"ENTER OPERATOR:"<<endl;
    cin>>op;
    cout<<"THE RESULT IS:"<<endl;
    calculate(a,b,op);
return 0;
}


int fibo(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    
    return fibo(n - 1) + fibo(n - 2);
}
int main(){
    int n;
    cout<<"ENTER:"<<endl;
    cin>>n;
    cout<<fibo(n)<<endl;
    return 0;
}

bool palindrom(int n){
    if (n<0) return false;

    int original=n;
    int reversed=0;
    while(n>0){
        int lastdigit=n%10;
        reversed=(reversed*10)+lastdigit;
        n/=10;
    }
    if( original == reversed){
        cout<<"pallindrom"<<endl;
    }


}
int main(){
    int n;
    cout<<"ENTER:"<<endl;
    cin>>n;
    cout<<palindrom(n)<<endl;
    return 0;
}



int main() {
    int rows, cols;

    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    int A[100][100], B[100][100];
    int sum[100][100], diff[100][100];

    // Input First Matrix
    cout << "\nEnter elements of Matrix A:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> A[i][j];
        }
    }

    // Input Second Matrix
    cout << "\nEnter elements of Matrix B:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> B[i][j];
        }
    }

    // Compute Addition and Subtraction
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = A[i][j] + B[i][j];
            diff[i][j] = A[i][j] - B[i][j];
        }
    }

    // Display Addition Result
    cout << "\nMatrix Addition (A + B):\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    // Display Subtraction Result
    cout << "\nMatrix Subtraction (A - B):\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << diff[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
*/