public class DriverExam
	 {
		 private char[] correctAnswers = { 'B','D','A','A','C','A','B','A','C','D','B','C','D','A','D','C','C','B','D','A' };
		 public char[] studentAnswers = new char[20];
		 public DriverExam(char[] array)
		 {
			 for (int i = 0; i < array.length; i++)
			 {
				 studentAnswers[i] = array[i];
			 }
		 }
		 public int totalCorrect()
		 {
			 int answer = 0;
			 for (int i = 0; i < correctAnswers.length; i++)
			 {
				 if (studentAnswers[i] == correctAnswers[i])
				 {
					 answer++;
				 }
			 }
			 return answer;
		 }
		 public int totalIncorrect()
		 {
			 return correctAnswers.length - totalCorrect();
		 }
		 public boolean passed()
		 {
			 return totalCorrect() >= (double)correctAnswers.length * 3./4.;
		 }
		 public int[] questionsMissed()
		 {
			 int[] missed;
			 missed = new int[totalIncorrect()];
			 int counter = 0;
			 for (int i = 0; i < correctAnswers.length; i++)
			 {
				 if (studentAnswers[i] != correctAnswers[i])
				 {
					 missed[counter] = i + 1;
					 counter++;
				 }
			 }
			 return missed;
		 }
	 }