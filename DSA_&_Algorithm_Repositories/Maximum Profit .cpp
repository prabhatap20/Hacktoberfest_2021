Question: Maximum Profit 

Kaushik, a Student from the second-year IT department, wants to conduct a hackathon in his college. For the hackathon, he wants to set the ticket price such that the profit earned is maximised. The participant can only participate in the hackathon if their budget is greater than or equal to the proposed price by Kaushik.

Kaushik will be provided with a list of size N having a budget of the participant and he needs to return the maximum profit that he can earn.

Let’s say Kaushik decides that the Ticket’s price is Rs. x and there is N number of participants who wants to participate. So maximum profit earned by kaushik is: m∗x where m is the total number of participants whose budget is greater than or equal to x.

So let's help kaushik in calculating the maximum profit earned by conducting this hackathon.

Soln:

#include<bits/stdc++.h>
using namespace std;

int maximumProfit(int budget[], int n) {

    int ans=INT_MIN;
    sort(budget,budget+n);
    for(int i=0;i<n;i++)
    {
        ans=max(ans,budget[i]*(n-i));
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for( int i = 0; i < n; i++ )
        cin >> a[i];
    cout << maximumProfit(a,n);
}
