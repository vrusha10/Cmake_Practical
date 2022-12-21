#pragma once
#include<iostream>
#include<string>
using namespace std;
class Try
{
private:
    string i;
public:
    Try(string s);
    ~Try();
    string get() const;
};

