#pragma once

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <ctime>
#include <deque>

class Person
{
public:
    Person(std::string name, int score);
    std::string m_Name;
    int m_Score;
};

void creatPerson(std::vector<Person> &v);

void showScore(std::vector<Person> &v);

void test();