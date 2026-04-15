#include <iostream>
using namespace std;
class Employee
{
private:
    int basic;
    int allowance;
public:
    int total;
    int Res;
    Employee()
    {

    }
    Employee(bool R)
    {
        Res=R;
    }
    void input()
    {
        cin>>basic>>allowance;
    }
    int totalSalary()
    {
        total=basic+allowance;
        return total;
    }
    Employee operator>(Employee e2)
    {
        int s1,s2;
        s1=totalSalary();
        s2=e2.totalSalary();
        //cout<<"Total Salary:"<<s1<<endl;
        //cout<<"Total Salary:"<<s2<<"\n\n";
        if(s1>=s2)
            return false;
        else
            return true;
    }
};
int main()
{
    int n;
    cin>>n;
    Employee E[n];
    Employee Res;
    bool res;
    int c=0;
    for(int i=0;i<n;i++)
    {
        E[i].input();
    }
    for(int i=1;i<n;i++)
    {
        Res=E[0]>E[i];
        if(Res.Res)
            c=c+1;
    }
    //cout<<"Count: "<<c;
    cout<<c;
    return 0;
}
