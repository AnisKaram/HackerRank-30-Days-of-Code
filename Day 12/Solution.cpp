

class Student : public Person {
private:
    vector<int> scores;
public:
    /*
    *   Class Constructor
    *
    *   Parameters:
    *   firstName - A string denoting the Person's first name.
    *   lastName - A string denoting the Person's last name.
    *   id - An integer denoting the Person's ID number.
    *   scores - An array of integers denoting the Person's test scores.
    */
    // Write your constructor here

    // Constructor : Base class contructor
    Student(string firstName, string lastName, int id, vector<int> scores)
        : Person(firstName, lastName, id)
    {
        Person(firstName, lastName, id);
        this->scores = scores;
    }
    /*
    *   Function Name: calculate
    *   Return: A character denoting the grade.
    */
    // Write your function here
    char calculate()
    {
        char letter; // default
        float average = 0.0;
        for (int i = 0; i < scores.size(); ++i)
        {
            average += scores[i];
        }

        average /= scores.size();

        if (average >= 90.0 && average <= 100.0)
            letter = 'O';
        else if (average >= 80.0 && average < 90.0)
            letter = 'E';
        else if (average >= 70.0 && average < 80.0)
            letter = 'A';
        else if (average >= 55.0 && average < 70.0)
            letter = 'P';
        else if (average >= 40.0 && average < 55.0)
            letter = 'D';
        else if (average < 40.0)
            letter = 'T';

        return letter;

    }
};

