#pragma once
#include <string>
#include <vector>
using namespace std;

class User
{
public:
	User() = default;
	~User() = default;

	User(const string& user_login, const string& user_password) : _login(user_login), _password(user_password) {}

	void setUserLogin(string login);
	string getUserLogin() const;
	void setUserPassword(string password);
	string getUserPassword() const;

private:
	string _login; // переменная с логином
	string _password; // переменная с паролем
};
