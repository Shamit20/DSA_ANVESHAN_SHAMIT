#include <iostream>
using namespace std;
int main(){
cout<<"enter no. of rows";
int c;
cin>>c;
for(int i=0;i<c;i++){
    for(int j=0;j<=i;j++){
        cout<<"* ";
    }
    cout<<"\n";
}

    cout<<"\n";

for(int i=0;i<c;i++){
    for(int j=c;j>=i;j--){
        cout<<"  ";
    }
    for(int k=0;k<=i;k++){
        cout<<"* ";
    }
    cout<<"\n";
}
 cout<<"\n";
for(int i=0;i<c;i++){
    for(int j=c;j>i;j--){
        cout<<"* ";
    }
    for(int k=0;k<=i;k++){
        cout<<" ";
    }
    cout<<"\n";
}

    cout<<"\n";
for(int i=0;i<c;i++){
    for(int k=0;k<=i;k++){
        cout<<"  ";
    }

    for(int j=c;j>i;j--){
        cout<<"* ";
    }

    cout<<"\n";
} 
cout<<"\n";
for(int i=0;i<c;i++){
    for(int j=c;j>=i;j--){
        cout<<" ";
    }
    for(int k=0;k<=i;k++){
        cout<<"* ";
    }
    cout<<"\n";
}
    cout<<"\n";
for(int i=0;i<c;i++){
    for(int k=0;k<=i;k++){
        cout<<" ";
    }

    for(int j=c;j>i;j--){
        cout<<"* ";
    }

    cout<<"\n";
} 

    cout<<"\n";
for(int i=0;i<c;i++){
    for(int k=0;k<=i;k++){
        cout<<i+1<<" ";
    }

    cout<<"\n";
} 
    cout<<"\n";
    int j=0;
for(int i=0;i<c;i++){
    for(int k=0;k<=i;k++){
        cout<<++j<<" ";
    }

    cout<<"\n";
} 
cout<<"\n";
j=0;
for(int i=0;i<c;i++){
     for(int f=c;f>=i;f--){
        cout<<"  ";
    }

    for(int k=0;k<=i;k++){
        cout<<++j<<" ";
    }

    cout<<"\n";
} 
cout<<"\n";
j=0;
for(int i=0;i<c;i++){
     for(int f=c;f>=i;f--){
        cout<<"  ";
    }

    for(int k=0;k<=i;k++){
        cout<<++j<<" ";
    }
    int f=j;
    for(int k=1;k<=i;k++){
        cout<<--f<<" ";
    }

    cout<<"\n";
} 
cout<<"\n";
for(int i=0;i<c;i++){
    for(int k=0;k<=i;k++){

        cout<<char(i+65)<<" ";
    }

    cout<<"\n";
} 

    cout<<"\n";
 j=65;
for(int i=0;i<c;i++){
    for(int k=0;k<=i;k++){
        cout<<char(j++)<<" ";
    }

    cout<<"\n";
} 
cout<<"\n";
}