#include<iostream>
using namespace std;

class MAT
{
private:
    int a[10][10],b[10][10],c[10][10],i,j,m,n,p,q;
public:
    void getdata()
    {
        cout<<"Enter the row & column of matrix: ";
        cin>>m>>n;
        cout<<"\nEnter the elements: ";
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
        {
            //cout<<"m["<<i<<"]["<<j<<"] = ";
            cin>>a[i][j];
        }
    }
    void display()
    {
        int i,j;

        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                cout<<" "<<a[i][j];
            }
            cout<<"\n";
        }
    }
    //friend MAT add(MAT,MAT);
    friend MAT trans(MAT);
};

 /*MAT add(MAT m1,MAT m2)
{
    MAT m;
    for(int i=0;i<m1.m;i++)
        for(int j=0;j<m1.n;j++)
           m.c[i][j]=m1.a[i][j]+m2.b[i][j];
    return m;
    /*for(int i=0;m1.m;i++)
    {
        for(int j=0;m1.n;j++)
        {
            cout<<c[i][j]=m1.a[i][j]+m2.b[i][j];
        }
    }*/

MAT trans(MAT m1)
{
    MAT m2;

    for(int i=0;i<m1.m;i++)
        for(int j=0;j<m1.n;j++)
          m2.a[i][j]=m1.a[j][i];
    return m2;
}

int main()
{
    int ch;
    cout<<"Press 1 for Addition\n2 for Subtraction\n3 for Multiplication\n4 for Transpose\n5 for Inverse\n";
    cout<<"Enter your choice: ";
    cin>>ch;
    MAT m1,m2,m3,m4;
    m1.getdata();
    cout<<"\n1st matrix entered...\n";
    /*m2.getdata();
    cout<<"\n2nd matrix entered...\n";*/
    cout<<"\nMatrix 1:\n ";
    m1.display();
    //cout<<"\nMatrix 2:\n";
    //m2.display();
    /*switch(ch)
    {
        case 1: m3=add(m1,m2);
                m3.display();
        case 4: m4=trans(m1);
                m4.display();
    }
    */
    m4=trans(m1);
    m4.display();
    return 0;
}
