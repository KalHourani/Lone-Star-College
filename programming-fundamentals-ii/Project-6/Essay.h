#include "GradedActivity.h"

class Essay:public GradedActivity
{
private:
	double score;
	double grammarScore;
	double spellingScore;
	double lengthScore;
	double contentScore;
	void setScore();
public:
	Essay();
	Essay(double, double, double, double);
	void setGrammarScore(double);
	void setSpellingScore(double);
	void setLengthScore(double);
	void setContentScore(double);
};