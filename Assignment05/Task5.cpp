#include <iostream>
using namespace std;
void square_root(){
    float number;
    cout<<"Enter the number : ";
    cin>>number;
    float answer;
    bool run=true;
    float point=0.0;
    int check=0;
    int iteration = 0;
    for (int i = 0; i <= number; i++)
    {
        cout<<i<<endl;
        iteration+=1;
        if(i*i == number){
            answer = i;
            break;
        }
        else{ 
        check += 1;
            if(check==iteration){
                i=0;
                cout<<"Entered chutiya loop"<<endl;
                for (int k = 0; k < number; k++)
                {
                  for (int l = 0; l < number; l++)
                  {
                    if(l<0){
                                                                                                                //had to do it 
                    }   
                  }
                  
                }
                
            }
            else{
                continue;
            }
        }
        
    }
        cout<<"iteration"<<iteration<<endl;
        cout<<"check"<<check<<endl;
    cout<<answer;
    
}
void power(){
    float number;
    cout<<"Enter the number : ";
    cin>>number;
    int power;
    float product =1;
    cout<<"Enter the power : ";
    cin>>power;
    for (int i = 0; i < power; i++)
    {
        product = product * number;
    }
    cout<<product;
    
}
void Floor(){
    float number;
    cout<<"Enter the number : ";
    cin>>number;
    int answer;
    answer = number;
    if(answer <= number){
        cout<<answer;
    }
    else{
        if(answer < 0){
           cout << answer - 1;
        }
    }
}
void Ceil(){
    float number;
    cout<<"Enter the number : ";
    cin>>number;
    int to_check = number;
    float check = to_check + 0.5;
    if(number > check  ){
        cout<<to_check + 1;
    }
    else{
        cout<<to_check;
    }
}
void Permutation(){
    
}
void  Combination(){

}
int main(){
    Ceil();
}