#include<iostream>
#include <fstream>
#include<cmath>
using namespace std;
void bill6th(int e3,int g)
{
    int w=1000,mm=300,total,tr=50;
    total=w+mm+g+e3+tr;
    ofstream file;
    file.open("Bill6thfloor.txt");
    file<<"6th Floor Bills"<<endl;
    file<<"Water bill:"<<w<<endl;
    file<<"Service Charge:"<<mm<<endl;
    file<<"Gas Bill:"<<g<<endl;
    file<<"Electric Bill:"<<e3<<endl;
    file<<"Trash Bill:"<<tr<<endl;
    file<<"Total Bill:"<<total<<endl;
    file.close();

}
void bill2Southfloor(int e2,int mm,int g)
{
    int w=1300,total;
    total=w+e2+(mm*2)+g;
    ofstream file;
    file.open("Bill2southfloor.txt");
    file<<"2nd Floor South Bills"<<endl;
    file<<"Water bill:"<<w<<endl;
    file<<"Service Charge:"<<(mm*2)<<endl;
    file<<"Gas Bill:"<<g<<endl;
    file<<"Electric Bill:"<<e2<<endl;
    file<<"Total Bill:"<<total<<endl;
    file.close();
}

void bill2Northfloorg(int mm,int w,int e1,float u,int g)
{
    int total,e;
    e=ceil(e1*u);
    int sc=500;
    total=w+e+mm+g;
    ofstream file;
    file.open("Bill2Northfloorgas.txt");
    file<<"2nd Floor North(gas) Bills"<<endl;
    file<<"Water bill:"<<w<<endl;
    file<<"Service Charge:"<<sc<<endl;
    file<<"Gas Bill:"<<g<<endl;
    file<<"Electric Bill:"<<e<<endl;
    file<<"Total Bill:"<<total<<endl;
    file.close();
}

void bill2Northfloor(int mm,int w,int e1,float u)
{
    int total,e;
    e=ceil(e1*u);
    total=w+e+mm;
    ofstream file;
    file.open("Bill2Northfloor.txt");
    file<<"2nd Floor North Bills"<<endl;
    file<<"Water bill:"<<w<<endl;
    file<<"Service Charge:"<<mm<<endl;
    file<<"Electric Bill:"<<e<<endl;
    file<<"Total Bill:"<<total<<endl;
    file.close();
}



void DrMoidtotal(int e1,int e2,int e3,int w,int m,int g,int fine,int wm)
{
    int total;
    total=e1+e2+e3+(w*5)+(m*5)+(g*3)+fine+wm/2;
    ofstream file;
    file.open("Dr.MoidTotalBill.txt");
    file<<"Dr Moid Bills"<<endl;
    file<<"Water bill:"<<(w*5)<<endl;
    file<<"Mother Meter:"<<(m*5)<<endl;
    file<<"Gas Bill:"<<(g*3)<<endl;
    file<<"Electric Bill:"<<(e1+e2+e3)<<endl;
    file<<"Others:"<<fine<<endl;
    file<<"Watchman:"<<(wm/2)<<endl;
    file<<"Total Bill:"<<total<<endl;
    file.close();

}

void MrAdulMomintotal(int e4,int e5,int e6,int e7,int w,int m,int r,int g,int fine,int wm)
{
    int total;
    total=e4+e5+e6+e7+(w*6)+(m*6)+(g*4)+fine+wm/2;
    ofstream file;
    file.open("Mr.MominTotalBill.txt");
    file<<"Mr Momin Bills"<<endl;
    file<<"Water bill:"<<(w*6)<<endl;
    file<<"Mother Meter:"<<(m*6)<<endl;
    file<<"Gas Bill:"<<(g*4)<<endl;
    file<<"Electric Bill:"<<(e4+e5+e6+e7)<<endl;
    file<<"Others:"<<fine<<endl;
    file<<"Watchman:"<<(wm/2)<<endl;
    file<<"Total Bill:"<<total<<endl;
    file<<"Balance Remains:"<<(r-total)<<endl;
    file.close();

}


void MrAbdulAziz(int m,int w,int g,int fine)
{
    int total;
    total=(m*5)+(w*5)+(g*4)+fine;
    ofstream file;
    file.open("Mr.AzizTotalBill.txt");
    file<<"Mr Aziz Bills"<<endl;
    file<<"Water bill:"<<(w*5)<<endl;
    file<<"Mother Meter:"<<(m*5)<<endl;
    file<<"Gas Bill:"<<(g*4)<<endl;
    file<<"Others:"<<fine<<endl;
    file<<"Total Bill:"<<total<<endl;
    file.close();
}

void totals(int e1,int e2,int e3,int e4,int e5,int e6,int e7,int em,int w,int g,int fine1,int fine2,int fine3)
{
    int te,tg,tw;
    te=e1+e2+e3+e4+e5+e6+e7+em;
    tg=11*g;
    tw=w;
    ofstream file;
    file.open("Totalbills.txt");
    file<<"Total Bills"<<endl;
    file<<"Electric bill:"<<te<<endl;
    file<<"Gas Bill:"<<tg<<endl;
    file<<"Water Bill:"<<tw<<endl;
    file<<"Fines:"<<fine1+fine2+fine3<<endl;
    file.close();
}

int main()
{
    int w,m,r,g;
    int e1,e2,e3,e4,e5,e6,e7;
    int iw,i,im;
    float tu,nu1,nu2;
    int mf,wm,mm,ma;

    cout<<"Enter Total Water bill:";
    cin>>w;
    cout<<"Enter Mother Meter(023764) bill:";
    cin>>m;
    cout<<"Enter gas bill:";
    cin>>g;
    cout<<"Enter Watchman Total Salary:";
    cin>>wm;
    cout<<"Enter Fine/other Expenses(mr.momin):";
    cin>>mf;
    cout<<"Enter Fine/other Expenses(mr.moid):";
    cin>>mm;
    cout<<"Enter Fine/other Expenses(mr.aziz):";
    cin>>ma;

    iw=ceil(w/16);
    im=ceil(m/16);
    //Dr. Moid Electric bills
    cout<<"Enter Electric Bill 2 North(93557):";
    cin>>e1;
    cout<<"Enter Electric Bill 2 South(529871):";
    cin>>e2;
    cout<<"Enter Electric Bill 6th floor(35808):";
    cin>>e3;

    //Mr. Abdul Momin
    cout<<"Enter Electric Bill 3 South(82504):";
    cin>>e4;
    cout<<"Enter Electric Bill 3 North(1240539):";
    cin>>e5;
    cout<<"Enter Electric Bill 5 South(41172):";
    cin>>e6;
    cout<<"Enter Electric Bill 5 North(4805977):";
    cin>>e7;
    cout<<"Enter Cash Received+Previous(Mr.Momin):"<<endl;
    cin>>r;
    //Mr.Abdul Moid
    cout<<"Enter Units(2 northg)):";
    cin>>nu1;
    cout<<"Enter Total Units:";
    cin>>tu;
    nu2=tu-nu1;//2north consumed unit


    bill6th(e3,g);
    bill2Southfloor(e2,im,g);
    bill2Northfloor(im,iw,e1,(nu2/tu));
    bill2Northfloorg(im,iw,e1,(nu1/tu),g);
    DrMoidtotal(e1,e2,e3,iw,im,g,mm,wm);
    MrAdulMomintotal(e4,e5,e6,e7,iw,im,r,g,mf,wm);
    MrAbdulAziz(im,iw,g,ma);
    totals(e1,e2,e3,e4,e5,e6,e7,m,w,g,mm,mf,ma);
    return 0;

}
