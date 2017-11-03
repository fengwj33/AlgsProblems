import edu.princeton.cs.algs4.*;
public class Insertion
{
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
  public static void main(String[] args)
  {
    int c=0;
    int N=50;
    double[] a=new double[N];
    for(int i=0;i<N;i++)
    {
      a[i]=StdRandom.random();
    }
    
    for(int i=1;i<N;i++)
    {
      for(int j=i;j>0 && less(a[j],a[j-1]);j--)
      {
        exch(a,j,j-1);
        c++;
        StdDraw.clear();
        for(int p=0;p<N;p++)
        {
          double x=1.0*p/N;
          double y=a[p]/2.0;
          double rw=0.5/N;
          double rh=a[p]/2.0;
          StdDraw.filledRectangle(x,y,rw,rh);
        }
        sleep(20);
        
      }
      
    }
    
    
   for(int i=0;i<N;i++)
   {
     double x=1.0*i/N;
     double y=a[i]/2.0;
     double rw=0.5/N;
     double rh=a[i]/2.0;
     StdDraw.filledRectangle(x,y,rw,rh);
   }
   StdOut.println(c);
  }
}