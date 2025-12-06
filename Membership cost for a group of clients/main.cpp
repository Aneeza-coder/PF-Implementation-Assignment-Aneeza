#include <iostream>
using namespace std;
int main()
{
    int N;
    cout<<"Enter number of clients:";
    cin>>N;
    for(int i=1;i<=N;i++)
    {
        float basefee,totalCost;
        int extraSessions;
        
        cout<<"\nEnter base monthly fee for client"<<i<<":";
        cin>>basefee;
        
        cout<<"Enter number of additional training sessions:";
        cin>>extraSessions;
        
        float sessionCost=140;
        //15% discount if session>7
         if(extraSessions>7)
         {
             sessionCost=sessionCost-(sessionCost*0.15);
         }
         totalCost=basefee+(extraSessions*sessionCost);
         cout<<"Total membership cost for client "<<i<<"="<<totalCost<<endl;
    }

         return 0;
}