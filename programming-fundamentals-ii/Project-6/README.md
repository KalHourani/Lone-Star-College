#Essay Class

Design an Essay class  that is derived from the GradedActivity class :

class  GradedActivity{
private :
double  score;
public:
GradedActivity()
{score = 0.0;}
GradedActivity(double  s)
{score = s;}
void setScore(double  s)
{score = s;}
double  getScore() const
{return score;}

char  getLetterGrade() const;
};

char  GradedActivity::getLetterGrade() const{
char  letterGrade;

if (score > 89) {
letterGrade = 'A';
} else if (score > 79) {
letterGrade = 'B';
} else if (score > 69) {
letterGrade = 'C';
} else if (score > 59) {
letterGrade = 'D';
} else {
letterGrade = 'F';
}

return letterGrade;
}

The Essay class  should determine the grade a student receives on an essay. The student's essay score can be up to 100, and is made up of four parts:


Grammar: up to 30 points
Spelling: up to 20 points
Correct length: up to 20 points
Content: up to 30 points


The Essay class  should have a double  member variable  for each of these sections, as well as a mutator that sets the values  of these variables . It should add all of these values  to get the student's total score on an Essay.

Demonstrate your class  in a program  that prompts the user to input points received for grammar, spelling, length, and content, and then prints the numeric and letter grade received by the student. 
