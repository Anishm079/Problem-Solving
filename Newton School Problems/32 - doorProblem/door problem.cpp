#include<iostream>
#include<queue>
#define long  long int
using namespace std;


void doorProblem(long *t,int *op,long N){
    long *ans=new long[N];
    for (long i = 0; i < N; i++)
    {
        ans[i]=0;
    }
    

    int i=0;bool prev=1;
    queue<int> Enter,Exit;

    while (true)    
    {
        long time;
        if(i<N) time=t[i];
        while(t[i]==time && i<N){
            if(op[i]==1){
                Exit.push(i);
            }else Enter.push(i);
            i++;
        }
        
        // cout<<i<<endl;
        while((!Enter.empty() || !Exit.empty()) && (i!=N) && time<t[i]){
            if(prev==0 && time<t[i] && !Exit.empty() && Enter.empty()){
                prev=1;
            }
            
            while(prev==1 && !Exit.empty() && time<t[i]){
                
                ans[Exit.front()]=time++;
                Exit.pop();
            }
            
            if(time<t[i] && !Enter.empty()){
                prev=0;
            }
            // cout<<t[i]<<" time "<<time<<" "<<" prev "<<prev<<" Enter "<<Enter.empty()<<" Exit "<<Exit.empty()<<endl;
            // 
            while(prev==0 && !Enter.empty() && time<t[i]){
                
                ans[Enter.front()]=time++;
                Enter.pop();
            }

            if(Enter.empty() && Exit.empty()  && i<N && (t[i]-time)>0){
                prev=1;
            }
        }
        // cout<<i<<endl;
        //for last element
        if(i==N){
            // break;
            if(prev==0 && !Exit.empty() && Enter.empty()){
                prev=1;
            }
            // cout<<prev<<"  "<<Exit.empty()<<endl;
            while(prev==1 && !Exit.empty()){
                ans[Exit.front()]=time++;
                
                Exit.pop();
            }
            
            if(prev==1 && !Enter.empty() && Exit.empty()){
                prev=0;
            }
            // cout<<"  "<<Enter.empty()<<endl;
            // cout<<t[i]<<" time "<<time<<" "<<" prev "<<prev<<" Enter "<<Enter.empty()<<" Exit "<<Exit.empty()<<endl;
            // 
            while(prev==0 && !Enter.empty()){
                
                ans[Enter.front()]=time++;
                Enter.pop();
            }
            // cout<<prev<<"  "<<Enter.empty()<<endl;
            // break;
            
        }
        
        // cout<<i<<endl;
        if(Enter.empty() && Exit.empty() && i==N){
            break;
        }

    }
    

    for (i = 0; i <N; i++)
    {
        cout<<ans[i]<<" ";
    }cout<<endl;
    // return ans;
}


int main(){

    // using namespace std;

    long N;cin>>N;
    long time[N];
    int operations[N];
    for(int i=0;i<N;i++){
        cin>>time[i];
    }
    for (int i = 0; i <N; i++)
    {
        cin>>operations[i];
    }
    doorProblem(time,operations,N);
}