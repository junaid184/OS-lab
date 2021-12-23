#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j,n,bt[50],wt[50],tat[50];
	float awt=0, atat=0;
	cout<<"enter number of processes"<<endl;
	cin>>n;
	cout<<"enter nuber of burst time: "<<endl;
	for(i=0; i<n; i++)
	{
		cin>>bt[i];
	}
	cout<<"process\t Burst Time\t waiting time\t turn around time";
	for(i=0; i<n; i++)
	{
		wt[i]=0;
		tat[i]=0;
		for(j=0; j<i; j++)
		{
			wt[i]=wt[i]+bt[j];
		}
		tat[i]=wt[i]+bt[i];
		awt=awt+wt[i];
		atat=atat+tat[i];
		cout<<"\n";
		cout<<"\n"<<"P"<<i+1<<"\t\t"<<bt[i]<<"\t\t"<<wt[i]<<"\t\t"<<tat[i];
	}
	awt=awt/n;
	atat=atat/n;
	cout<<"\n average waiting time: "<<awt<<endl;
	cout<<"\n average turn around time: "<<atat<<endl;
	
}
