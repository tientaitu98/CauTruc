long powFunction(int a, int n)
{
    if(n == 1)
    {
        return a;
    }
    else
    {
        int temp = powFunction(a, n/2);
        if(n % 2 == 0)  return temp * temp;
        else            return temp * temp * a;
    }
}

void pow()
{
    int a, n;
    cin>>a>>n;
    cout<<powFunction(a,n);
}
