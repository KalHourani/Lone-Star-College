class GradedActivity 
{
private:
	double score;
public:
	GradedActivity();
	GradedActivity(double);
	void setScore(double);
	double getScore() const;
	char getLetterGrade() const;
};