import edu.princeton.cs.algs4.*;
public class Quick
{
  private static int c=0;
  public static boolean less(double i,double j)
  {
    return i<j;
  }
  public static void exch(double[] a,int i,int j)
  {
    double t;
    t=a[i];
    a[i]=a[j];
    a[j]=t;
  }
  public static void sleep(int ms)
  {
    try {
      Thread.sleep(ms);
    } catch (InterruptedException e)
    {
      e.printStackTrace();
    }
  }
  public static int partition(double[] a,int lo,int hi)
  {
    int i=lo;
    int j=hi+1;
    double v=a[lo];
    while(true)
    {
      while(a[++i]<v) if(i==hi)break;
      while(a[--j]>v) if(j==lo)break;
      if(i>=j)break;
      exch(a,i,j);
      c++;
      
      StdDraw.clear();
        for(int p=0;p<100;p++)
        {
          double x=1.0*p/100;
          double y=a[p]/2.0;
          double rw=0.5/100;
          double rh=a[p]/2.0;
          StdDraw.filledRectangle(x,y,rw,rh);
        }
        sleep(20);
        
    }
    c++;
    exch(a,lo,j);
    return j;
  }
  public static void sort(double[] a,int lo,int hi)
  {
    if(hi<=lo) return;
    
    if(hi-lo<7)
    {
      for(int i=lo+1;i<=hi;i++)
      {
        for(int j=i;j>0 && a[j]<a[j-1];j--)
        {
          exch(a,j,j-1);
          c++;
        }
      }
      return;
    }
    
    int j=partition(a,lo,hi);
    sort(a,lo,j-1);
    sort(a,j+1,hi);
  }
  public static void main(String[] args)
  {
    int N=100;
    
    int h;
    double[] a=new double[N];
    for(int i=0;i<N;i++)
    {
      a[i]=StdRandom.random();
    }
    /*
    h=1;
    while(h<50/3)h=h*3+1;
    while(h>=1)
    {
      for(int i=1;i<N;i++)
      {
        for(int j=i;j>=h && less(a[j],a[j-h]);j-=h)
        {
          exch(a,j,j-1);
          c++;
        }
      }
      h=(h-1)/3;
      
    }
    
    for(int i=1;i<N;i++)
      for(int j=i;j>0 && less(a[j],a[j-1]);j--)
            exch(a,j,j-1);
    */
    sort(a,0,N-1);
    
    StdDraw.clear();
    for(int p=0;p<N;p++)
          {
            double x=1.0*p/N;
            double y=a[p]/2.0;
            double rw=0.5/N;
            double rh=a[p]/2.0;
            StdDraw.filledRectangle(x,y,rw,rh);
          }
   
   StdOut.println(c);
  }
}