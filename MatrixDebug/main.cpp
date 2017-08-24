#include<iostream>
using namespace std;

int main()
{
    int box[5][5];
    int c=1;
    int row,col;
    cout<<"[r][c]\t[r][c]\t[r][c]\t[r][c]\t[r][c]\t"<<endl;
    for(row=0;row<5;row++){
        for(col=0;col<5;col++){
            cout<<"["<<row<<"]["<<col<<"]\t";
            box[row][col]=c;
            c++;
        }
        cout<<endl;
    }


    cout<<endl;
    for(row=0;row<5;row++){
        for(col=0;col<5;col++){
            cout<<box[row][col]<<"\t";
        }
        cout<<endl;
    }
    cout<<"\n\n\n";
    int s=5;
    row=0;
    //while(s>0){
        for(col=row; col<s; col++){
            cout<<box[row][col]<<endl;
        }

        col=col-1;
        for(row=row+1;row<s;row++){
            cout<<box[row][col]<<endl;
        }

        //for(row=row-1;row>)
        cout<<endl<<endl<<"r"<<row<<"c"<<col;
    //}

    return 0;
}
