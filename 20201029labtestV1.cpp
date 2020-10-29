#include <iostream>
#include <stdlib.h> 
#include <time.h>  
using namespace std;
int main() 
{int a,A,B,C,D;
double n=0;
char q1,q2,q3,q4,s;
	cout<<"**********************************************"<<endl;
	cout<<"*       欢迎使用学生成绩管理系统1.1          *"<<endl;
	cout<<"*     王小明   计算机2003班 2020.10.29       *"<<endl;
	cout<<"*     1、输入4个同学的代号和成绩             *"<<endl;
	cout<<"*     2、显示4个同学的代号和成绩列表         *"<<endl;
    cout<<"*     3、求4人平均分                         *"<<endl;
    cout<<"*     4、求4人总分                           *"<<endl;
    cout<<"*     5、查询某同学的分数                    *"<<endl;
    cout<<"*     6、统计及格率                          *"<<endl;
    cout<<"*     7、退出                                *"<<endl;
    cout<<"*     请输入(1-7)选择：                      *"<<endl;
    cout<<"*                                            *"<<endl;
    cout<<"**********************************************"<<endl;
cin>>q1>>A>>q2>>B>>q3>>C>>q4>>D;
cout<<"输入你要执行的操作序号:";
cin>>a;
switch (a)
{case 2 :cout<<'A'<<" "<<A<<" "<<'B'<<" "<<B<<" "<<'C'<<" "<<C<<" "<<'D'<<" "<<D<<endl;    break;
 case 3:cout<<"平均分="<<(A+B+C+D)/4<<endl; break;
 case 4 :cout<<"总分="<<A+B+C+D<<endl;	break;
 case 5:cout<<"输入同学代号:";
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

