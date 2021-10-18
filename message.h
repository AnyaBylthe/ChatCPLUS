#pragma once
#include <string>
#include <vector>
using namespace std;

class Message
{
public:
	Message() = default;
	~Message() = default;

	Message(const string& message, const string& sender, const string& recipient) : _message(message), _sender(sender), _recipient(recipient) {}

	void setMessage(const string& message);
	string getMessage() const;

	void setSender(const string& sender);
	string getSender() const;

	void setRecipient(const string& recipient);
	string getRecipient() const;


private:
	string _message; // текст сообщения
	string _sender; // логин отправителя
	string _recipient; // логин получателя
};
