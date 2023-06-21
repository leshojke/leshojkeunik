#pragma once
#include <iostream>
#include <string>

using namespace std;

namespace Log_in {
    class User_log
    {
    public:
        
        string getUserLog() {
            return UserLog;
        }

        int getReadyPassword() {
            return ReadyPassword;
        }

        int getSMScode() {
            return SMScode;
        }

        bool getallow() {
            return allow;
        }

    private:
        string UserLog = "Ïåòğî_ÕÕ_ÕÕ";
        int ReadyPassword = 78321;
        int SMScode = 4321;
        bool allow = true;

    };

    union Verficated
    {
    public:
        void setPhonenumber(int Phonenumber) {
            this->Phonenumber = Phonenumber;
        }

        int getPhonenumber() {
            return Phonenumber;
        }

    private:
        int Phonenumber;
    };

   // struct Other
   // {
   // public:
   //     void setstable(int stable) {
   //         this->stable = stable;
   //     }

   //     int getstable() {
           // return stable;
  //      }

  //  private:
   //     static int stable;
  //  };
}