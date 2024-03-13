#include<iostream>
using namespace std;
int main(){
    int n;
    float sum = 0.0;
    
    cout<<"Enter nth term of the series";
    cin>>n;

    for (float i = 1; i < n+1; i++){
        // cout<<(1/(i*i))<<" ";
        if (int(i)%2!=0 )
        {
            cout<<"1/"<<i<<"^2";
            if (i!=n)
            {
                cout<<" - ";
            }
            sum+=(1/(i*i));
            
        }
        
        else if (int(i)%2==0 )
        {
            cout<<"1/"<<i<<"^2";
            if (i!=n)
            {
                cout<<" + ";
            }
            
            sum-=(1/(i*i));
            
        }
        
    }
    
    cout<<endl<<"Sum of "<<n<<" Terms of series = "<<sum;

    return 0;
}
