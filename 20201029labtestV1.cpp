#include <iostream>
#include <stdlib.h> 
#include <time.h>  
using namespace std;
int main() 
{int a,A,B,C,D;
double n=0;
char q1,q2,q3,q4,s;
	cout<<"**********************************************"<<endl;
	cout<<"*       ��ӭʹ��ѧ���ɼ�����ϵͳ1.1          *"<<endl;
	cout<<"*     ��С��   �����2003�� 2020.10.29       *"<<endl;
	cout<<"*     1������4��ͬѧ�Ĵ��źͳɼ�             *"<<endl;
	cout<<"*     2����ʾ4��ͬѧ�Ĵ��źͳɼ��б�         *"<<endl;
    cout<<"*     3����4��ƽ����                         *"<<endl;
    cout<<"*     4����4���ܷ�                           *"<<endl;
    cout<<"*     5����ѯĳͬѧ�ķ���                    *"<<endl;
    cout<<"*     6��ͳ�Ƽ�����                          *"<<endl;
    cout<<"*     7���˳�                                *"<<endl;
    cout<<"*     ������(1-7)ѡ��                      *"<<endl;
    cout<<"*                                            *"<<endl;
    cout<<"**********************************************"<<endl;
cin>>q1>>A>>q2>>B>>q3>>C>>q4>>D;
cout<<"������Ҫִ�еĲ������:";
cin>>a;
switch (a)
{case 2 :cout<<'A'<<" "<<A<<" "<<'B'<<" "<<B<<" "<<'C'<<" "<<C<<" "<<'D'<<" "<<D<<endl;    break;
 case 3:cout<<"ƽ����="<<(A+B+C+D)/4<<endl; break;
 case 4 :cout<<"�ܷ�="<<A+B+C+D<<endl;	break;
 case 5:cout<<"����ͬѧ����:";
        cin>>s;
        if(s=='A') cout<<A<<endl;break;
        if(s=='B') cout<<B<<endl;break;
        if(s=='C') cout<<C<<endl;break;
        if(s=='D') cout<<D<<endl;break;
 case 6 :     {if(A>=60) n+=1 ;
                if(B>=60) n+=1 ;
                if(C>=60) n+=1 ;
                if(D>=60) n+=1 ;
                cout<<n/4*100<<"%"<<endl;
	                break;}
	case 7: return 0;                

}
system("pause");
return 0;
}

