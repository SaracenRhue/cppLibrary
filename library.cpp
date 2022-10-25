#include <iostream>
#define getName(var) #var

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::system;

void cmd(string input)
{
    system(input.c_str());
}

void ic(string description, string variable)
{
    string result = "textreset=$(tput sgr0) && purple=$(tput setaf 125) && green=$(tput setaf 2) && echo \"${purple}ic | ${textreset}" + description + ":${green} " + variable + " ${textreset}\"";
    cmd(result);
}

void ic(string variable)
{
    string result = "textreset=$(tput sgr0) && purple=$(tput setaf 125) && green=$(tput setaf 2) && echo \"${purple}ic |${green} " + variable + " ${textreset}\"";
    cmd(result);
}

