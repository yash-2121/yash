#include <iostream>
using namespace std;
class Student
{
protected:
    int roll;
    string name;

public:
    void set_roll(int r)
    {
        roll = r;
    }
    void get_roll()
    {
        cout << "The roll number is: " << roll << endl;
    }
    void set_name(string n)
    {
        name = n;
    }
    void get_name()
    {
        cout << "Name of the student is: " << name << endl;
    }
};
class Sports : virtual public Student
{
protected:
    int s_grade;

public:
    void set_sport_grade(int s)
    {
        s_grade = s;
    }
    void get_sport_grade()
    {
        cout << "Marks in sports is: " << s_grade << endl;
    }
};
class Exam : virtual public Student
{
protected:
    int e_grade;

public:
    void set_exam_grade(int e)
    {
        e_grade = e;
    }
    void get_exam_grade()
    {
        cout << "Marks in sports is: " << e_grade << endl;
    }
};
class Result : public Sports, public Exam
{
private:
    int total;
    float average;

public:
    void display()
    {
        get_roll();
        get_name();
        cout << endl;
        total = (s_grade + e_grade);
        average = (total) / 2;
        get_sport_grade();
        get_exam_grade();
        cout << "TOTAL MARKS OBTAINED: " << total << endl;
        cout << endl;
        cout << "AVERAGE MARKS: " << average << endl;
        if (average >= 90 && average <= 100)
        {
            cout << "Final grade is: " << 'A' << endl;
        }
        else if (average >= 80 && average <= 89)
        {
            cout << "Final grade is : " << 'B' << endl;
        }
        else if (average >= 70 && average <= 79)
        {
            cout << "Final grade is : " << 'C' << endl;
        }
        else
        {
            cout << "Final grade is : " << 'F' << " , "
                 << "you have to appear for the retest examination" << endl;
        }
    }
};
int main()
{
    Result r1;
    r1.set_name("YASH");
    r1.set_roll(1323);
    r1.set_sport_grade(90);
    r1.set_exam_grade(90);
    r1.display();
}