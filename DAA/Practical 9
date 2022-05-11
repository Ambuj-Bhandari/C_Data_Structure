class Merge
{
	void merg(int a[],int l,int h,int m,int n)
	{
		int i=0,j=m+1,k=0;
		int b[]=new int[h+l+1];
		while(i<=m&&j<=h)
		{
			if(a[i]<=a[j])
			{
		   		b[k]=a[i];
		   		k++;
		   		i++;
			}
			else
			{
                b[k]=a[j];
		   		k++;
		   		j++;
			} 
                 
        }
		if(i>m)
		{
			for(;j<=h;j++)
			{
				b[k]=a[j];
				k++;
			}
		}
		else
		{
			for(;i<=m;i++)
			{
				b[k]=a[i];
				k++;
			}
		}
 		for(k=l;k<=h;k++)
		{
            a[k]=b[k];
		}
	} 
	void MergeS(int a[],int l,int h,int n)
	{
		if(l<h)
		{ 
			int m=(l+h)/2;
			MergeS(a, l, m,n);
			MergeS(a,m+1,h,n);
			merg(a,l,h,m,n);
		}
	} 
	public static void main(String args[])
	{
		int a[]={28,52,8314,75};
		Merge m= new Merge(); 
		int n=a.length;
		m.MergeS(a,0,n-1,n);
		
        for(int i=0;i<n-1;i++)
        {
            if(a[i]==a[i+1])
            {
                System.out.println("Yes"); 
                System.exit(0); 
            }  

        } 
        System.out.println("No");
	}
}
