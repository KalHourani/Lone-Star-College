#include "Essay.h"

Essay::Essay() : GradedActivity() // default constructor
{
	grammarScore = 0.0;
	spellingScore = 0.0;
	lengthScore = 0.0;
	contentScore = 0.0;
}
Essay::Essay(double gScore, double sScore, double lScore, double cScore) : GradedActivity(gScore + sScore + lScore + cScore)
{
	grammarScore = gScore;
	spellingScore = sScore;
	lengthScore = lScore;
	contentScore = cScore;
}

void Essay::setScore()
{
	score = grammarScore + spellingScore + lengthScore + contentScore;
}

void Essay::setGrammarScore(double s)
{
	grammarScore = s;
	setScore();
}
void Essay::setSpellingScore(double s)
{
	spellingScore = s;
	setScore();
}
void Essay::setLengthScore(double s)
{
	lengthScore = s;
	setScore();
}
void Essay::setContentScore(double s)
{
	contentScore = s;
	setScore();
}