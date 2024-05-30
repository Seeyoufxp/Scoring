#include "head.h"

Person::Person(std::string name, int score) : m_Name(name), m_Score(score) {}

void creatPerson(std::vector<Person> &v)
{
    std::string nameSeed = "ABCDE";
    for (int i = 0; i < 5; i++)
    {
        std::string name = "";
        name += nameSeed[i];
        int score = 0;
        Person p(name, score);
        v.push_back(p);
    }
}

void setScore(std::vector<Person> &v)
{
    for (std::vector<Person>::iterator it = v.begin(); it != v.end(); it++)
    {
        std::deque<int> d;
        for (int i = 0; i < 10; i++)
        {
            int score = rand() % 41 + 60;
            d.push_back(score);
        }

        sort(d.begin(), d.end());
        d.pop_front();
        d.pop_back();
        int sum = 0;
        for (std::deque<int>::iterator dit = d.begin(); dit < d.end(); dit++)
        {
            sum += (*dit);
        }
        float avg = sum / d.size();
        it->m_Score = avg;
    }
}

void showScore(std::vector<Person> &v)
{
    for (std::vector<Person>::iterator it = v.begin(); it != v.end(); it++)
    {
        std::cout << (*it).m_Name << ":" << (*it).m_Score << std::endl;
    }
}

void test()
{
    std::vector<Person> v;
    creatPerson(v);
    setScore(v);
    showScore(v);
}