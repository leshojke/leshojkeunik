#include <iostream>
#include <string>
#include "Autorize.h"
//#include "Static.cpp"
//#include "Static.h"
#include "Log_in.h"
#include <cstdlib>
#include <ctime>


using namespace std;




int main()
{
    setlocale(LC_ALL, "");

    Log_in::User_log ul;
    Log_in::Verficated vrf;
    //Log_in::Other ot;
    //Static::ST st;

    vrf.setPhonenumber(54721);
    //ot.setstable(29);

    cout << "Sign in" << endl;

    Autorize::User Userfirst("�����", "���������", "x_p_gerangenko@gmail.com", "�����_��_��", "J1234!WW", "admin", 78321);
    Userfirst.Cout();
    cout << " Id: " << Userfirst.getid() << endl;

    cout << endl;

    cout << "Log in" << endl;
    cout << " �i�����: " << ul.getUserLog() << endl;
    cout << " ������: " << ul.getReadyPassword() << endl;
    cout << " �������: " << vrf.getPhonenumber() << endl;
    cout << " SMS-���: " << ul.getSMScode() << endl;
    cout << endl;
    cout << endl;
    cout << "Other info" << endl;


    //cout << "���������� �������" << ot.getstable;

    // cout << " ������ ��������: " << st.ST::stable << endl;
    // cout << " ������ ��������: " << st.ST::codereboot << endl;
    return 0;
}