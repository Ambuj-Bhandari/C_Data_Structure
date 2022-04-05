class QSort
{ 
    void swap(int a[],int i,int j)
    {
       int t=a[i];
       a[i]=a[j];
       a[j]=t;
    }
   int partiton(int[] a,int l,int h)
   {
       int x=a[h];
       int i=l-1;
       for(int j=l;j<=h;j++)
       {
           if(a[j]<=x)
           {
               i++;
               swap(a,i,j);
           } 
       } 
       return i;
   } 
   void QuickSort(int[] a,int l,int h)
   {
       if(l<h)
       {
           int m=partiton(a,l,h); 
           QuickSort(a,l,m-1);
           QuickSort(a,m+1,h);
       }
   } 
   public static void main(String args[])
   {
       QSort Q=new QSort();
       int[] a={13,19,5,12,8,7,4,21,2,6,11};
       int l=a.length;
       System.out.println("Array before Sort:");
       for(int i:a)
       System.out.println(i); 

       Q.QuickSort(a,0,l-1);
       System.out.println("Array after Sort:");
       for(int i:a)
       System.out.println(i); 
   }
}