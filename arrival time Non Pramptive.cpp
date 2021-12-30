#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i, j, n, t, p[50], bt[50], wt[50], tat[50];
	float awt = 0, atat=0;
	cout<<"enter number of process"<<endl;
	cin>>n;
	cout<<"enter process number"<<endl;
	for(i=0; i<n; i++)
	{
		cin>>p[i];
	}
	cout<<"enter burst time of process"<<endl;
	for(i=0; i<n; i++)
	{
		cin>>bt[i];
	}
	//using bubble sort
	for(i=0; i<n; i++)
	{
		for(j=0; j<n-i-1; j++)
		{
			if(bt[j]>bt[j+1])
			{
				t=bt[j];
				bt[j]=bt[j+1];
				bt[j+1]=t;
				
				t=p[j];
				p[j]=p[j+1];
				p[j+1]=t;
			}
		}
	}
	cout<<"Process \t burst time \t waiting time \t turn around time "<<endl;
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
		cout<<"\n"<<"P"<<i+1<<"\t\t"<<bt[i]<<"\t\t"<<wt[i]<<"\t\t"<<tat[i]<<endl;
	}
	awt=awt/n;
	atat=atat/n;
	cout<<"\n average waiting time: "<<awt<<endl;
	cout<<"\n average turn around time: "<<atat<<endl;
}
