#include <iostream>
#include <thread>
#include <unistd.h>
using namespace std;
 
 void func(int id)
 {
    sleep(10/id);
    cout<<"线程"<<id<<" ";
    for(int i=0;i<10;++i)
        cout<<i;
    cout<<endl;
 }
 
int main ()
{
   cout<<"main"<<endl;
   cout<<"main"<<endl;
   thread t[5];
   for(int i=1;i<=5;++i)
   {
    t[i-1] = thread(func,i);
   }
   for(int i=1;i<=5;++i)
   {
        t[i-1].detach();
    cout<<"id "<<i<<endl;
   }
   cout<<"next"<<endl;
   //t.join();
   return 0;
}
