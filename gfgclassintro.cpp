#include<iostream>
#include<Cstring>
#include<bits/stdc++.h>
using namespace std;
class CollegeCourse
{
    private:
    string courseID;
    char grade;
    int credits;
    int gradePoints;
    float honorPoints;

    public:
    void set_CourseId(string courseId)
    {
        courseID=courseId;
    }
    void set_Grade(char grade)
    {
        grade=grade;
    }
    void set_Credit(int credits)
    {
        credits=credits;
    }
    int calculateGradePoints(char grade)
    {
        if(grade=='A' || grade=='a')
        gradePoints=10;
        if(grade=='B' || grade=='b')
        gradePoints=9;
        if(grade=='C' || grade=='c')
        gradePoints=8;
        if(grade=='D' || grade=='d')
        gradePoints=7;
        if(grade=='E' || grade=='e')
        gradePoints=6;
        if(grade=='F' || grade=='f')
        gradePoints=5;

        return gradePoints;
    }

    int calculateHonorPoints(int gp, int credits)
    {
        honorPoints=(gp*credits);
        return honorPoints;
    }
    void display()
    {
        cout<<gradePoints<<" "<<honorPoints<<endl;
    }
};

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        CollegeCourse cc;
        char grade;
        int credits;
        int gp;
        int hp;
        string courseId;
        cin>>courseId>>grade>>credits;
        cc.set_CourseId(courseId);
        cc.set_Grade(grade);
        cc.set_Credit(credits);
        gp=cc.calculateGradePoints(grade);
        hp=cc.calculateHonorPoints(gp, credits);
        cc.display();
    }
    return 0;
}