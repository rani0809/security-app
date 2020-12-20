#include<iostream>
using namespace std;
void run()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   #ifndef ONLINE_JUDGE
   freopen("inputt.txt","r",stdin);
   freopen("outputt.txt","w",stdout);
   #endif
}

int main(){

    run();
    
int t;
cin>>t;

while(t--)
{
    string s;
    cin>>s;

    int n=s.length();

    int start=0,end=n-1;

    while(start<end)
    {
        swap(s[start],s[end]);
        start++;
        end--;
    }
        cout<<s<<"\n";
}
}