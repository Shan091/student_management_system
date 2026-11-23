#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int roll_no;
    float marks;

public:
    Student(string name, int roll_no, float marks)
    {
        this->name = name;
        this->roll_no = roll_no;
        this->marks = 0.0f;
        set_marks(marks);
    }

    void set_marks(float m)
    {
        while (m < 0.0f || m > 100.0f)
        {
            cout << "Invalid marks (" << m << ") for " << name
                 << ". Enter valid marks (0 to 100): ";
            cin >> m;
        }
        marks = m;
    }

    int get_roll_no()
    {
        return roll_no;
    }

    float get_marks()
    {
        return marks;
    }

    string get_name()
    {
        return name;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll_no << endl;
        cout << "Marks: " << marks << endl;
    }
};

void print_result(Student s)
{
    cout << "Name: " << s.get_name() << endl;
    cout << "Roll No: " << s.get_roll_no() << endl;
    cout << "Marks: " << s.get_marks() << endl;
    cout << "Result: " << (s.get_marks() >= 40.0f ? "Pass" : "Fail") << endl;
}

int main()
{
    Student batch[3] = {
        Student("Alice", 101, 95.5f),
        Student("Bob", 102, 88.0f),
        Student("Charlie", 103, 76.5f)};

    cout << "\n--- Student Details ---\n";
    for (int i = 0; i < 3; i++)
    {
        batch[i].display();
        cout << endl;
    }

    char choice;
    cout << "\nDo you want to re-evaluate any student's marks? (y/n): ";
    cin >> choice;

    while (choice == 'y' || choice == 'Y')
    {
        int target_roll_no;
        float new_marks;
        bool found = false;

        cout << "Enter Roll No: ";
        cin >> target_roll_no;

        for (int i = 0; i < 3; i++)
        {
            if (batch[i].get_roll_no() == target_roll_no)
            {
                cout << "Enter new marks for " << batch[i].get_name() << ": ";
                cin >> new_marks;
                batch[i].set_marks(new_marks);
                found = true;
                break;
            }
        }

        if (!found)
        {
            cout << "Roll No " << target_roll_no << " not found.\n";
        }

        cout << "Re-evaluate another student? (y/n): ";
        cin >> choice;
    }

    for (int i = 0; i < 3; i++)
    {
        print_result(batch[i]);
        cout << endl;
    }

    return 0;
}