#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int a[3][3];
    int b[3][3];
    int c[3][3];
    int i,j;
    cout<<"inter the first value of matrix\n";
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    cout<<"inter the second matrix \n";
     for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            cin>>b[i][j];
            }
     }
    cout << "give the first matrix is : \n";
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            cout<<""<< a[i][j];
        }

        cout<<"\n";
    }
    cout << "press inter to see the second matrix \n";
    getch();

     cout << "give the second matrix is : \n";
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            cout<<""<< b[i][j];
        }

        cout<<"\n";

    }

    getch();

    cout << "the sum of two matrix  :\n" ;
    for (i=0;i<3;i++){
        for (j=0;j<3;j++)
            {
               c[i][j]=a[i][j]+b[i][j];
               cout << ""<<c[i][j];
            }
            cout << endl;
        }
    getch();
    cout << "transpose of the first matrix \n";
    for (i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<""<< a[j][i];
        }
        cout << endl;
    }

    getch();

}
