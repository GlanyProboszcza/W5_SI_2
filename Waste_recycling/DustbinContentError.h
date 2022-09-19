#pragma once
# include <exception>
#include <string>


class DustbinContentError : public std::exception {
public:
	std::string message_;
	DustbinContentError();
	DustbinContentError(const std::string& message): message_(message){};
	std::string getMessage();
};

