#pragma once
#include <iostream>
#include <string>

using namespace std;

namespace Autorize {
    enum Gender {
        Woman,
        Man,
        Other
    };

    class User {
    public:
        string first_name;
        string last_name;
        string email;
        static int user_count;

        User(string first_name, string last_name, string email, string username,
            string password, string role, int secret_password)
        {
            this->first_name = first_name;
            this->last_name = last_name;
            this->email = email;
            this->username = username;
            this->password = password;
            this->role = role;
            this->secret_password = secret_password;
            user_count++;
            id = user_count;
        }

        int getid() {
            return id;
        }

        void Cout() {
            cout << " I�'�: " << first_name << "\n ��i�����: " << last_name << "\n �����: " << email << endl;
            Coutp();
        }

        void setfirstname(string first_name) {
            this->first_name = first_name;
        }

        void setlastname(string last_name) {
            this->last_name = last_name;
        }

        void setemail(string email) {
            this->email = email;
        }

        void setusername(string username) {
            this->username = username;
        }

        void setsecretpassword(int secret_password) {
            this->secret_password = secret_password;
        }

        string getfirst_name() {
            return first_name;
        }

        string getlast_name() {
            return last_name;
        }

        string getemail() {
            return email;
        }

        string getpassword() {
            return password;
        }

        string getrole() {
            return role;
        }

        int getsecret_password() {
            return secret_password;
        }

    private:
        void Coutp() {
            cout << " �i�����: " << username << "\n ������: " << password << "\n ����: " << role << "\n �������� ������: " << secret_password << endl;
        }
        int id;
        string username;
        string password;
        string role;
        int secret_password;


    };

    int User::user_count = 0;
}