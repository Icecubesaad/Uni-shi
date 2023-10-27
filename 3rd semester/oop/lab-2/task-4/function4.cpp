#include <iostream>
#include <fstream>
#include "function4.h"
using namespace std;
void read(){
    fstream file;
    file.open("question.txt",ios::in);
    char string[100];
    while(file.getline(string, 100)){
        cout<<string<<endl;
    };
    file.close();
    cout<<endl;
    fstream file2;
    file2.open("option.txt",ios::in);
    while(file.getline(string, 100)){
        cout<<string<<endl;
    };
    int ask,result=0;
    cin>>ask;
    if(ask=='a'){
        result++;
    }
    cin>>ask;
    if(ask=='a'){
        result++;
    }
    cin>>ask;
    if(ask=='c'){
        result++;
    }
    file2.close();
    fstream file3;
    file3.open("result.txt",ios::out);
    file3<<result;
    file3.close();
}
void check(){
    fstream file;
    file.open("result.txt",ios::in);
    int result;
    file>>result;
    cout<<"YOUR SCORE IS : "<<result;
}