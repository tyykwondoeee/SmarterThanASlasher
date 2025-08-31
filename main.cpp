#include <iostream>
using namespace std;

int main() {
	char startAnswer;
	char answer;
	int score = 0;
	int totalQuestions = 10;
	int correctAnswers = 0;
	int wrongAnswers = 0;

	do {
		score = 0;
		correctAnswers = 0;
		wrongAnswers = 0;
		// Start the game
		do {
			cout << "Are you Smarter Than a Slasher?!" << endl;
			cout << "SPOILER ALERT!." << endl;
			cout << "Let's play a game, shall we? (y/n)" << endl;
			cin >> startAnswer;

			if (startAnswer == 'n' || startAnswer == 'N') {
				cout << "Whatever you do... don't fall asleep!" << endl;
				return 0;
			}
			else if (startAnswer == 'y' || startAnswer == 'Y') {
				cout << "We have such sights to show you!"
					<< endl;
				break;
			}
			else {
				cout << "It chooses y or n. Or it gets the hose again!" << endl;
			}
		} while (true);

		// Question 1
		do {
			cout << " In the 1983 movie Sleepaway Camp, who was the killer?" << endl;
			cout << "a) Angela Baker" << endl;
			cout << "b) Ricky" << endl;
			cout << "c) Paul" << endl;
			cout << "d) Aunt Martha" << endl;
			cin >> answer;

			if (answer == 'a' || answer == 'A') {
				cout << "Correct!" << endl;
				score++;
				correctAnswers++;
				break;
			}
			else if (answer == 'b' || answer == 'B' || answer == 'c' || answer == 'C' || answer == 'd' || answer == 'D') {
				cout << "Wrong! It was Angela, or should we say Andy." << endl;
				wrongAnswers++;
				break;
			}
			else {
				cout << "It chooses a, b, c, or d. Or it gets the hose again!" << endl;
			}
		} while (true);

		// Question 2
		do {
			cout << "How many characters die in 1999's Stir of Echoes" << endl;
			cout << "a) 2" << endl;
			cout << "b) 1" << endl;
			cout << "c) 0" << endl;
			cout << "d) 5" << endl;
			cin >> answer;

			if (answer == 'b' || answer == 'B') {
				cout << "Correct!" << endl;
				score++;
				correctAnswers++;
				break;
			}
			else if (answer == 'a' || answer == 'A' || answer == 'c' || answer == 'C' || answer == 'd' || answer == 'D') {
				cout << "Wrong! Only one character dies." << endl;
				wrongAnswers++;
				break;
			}
			else {
				cout << "It chooses a, b, c, or d. Or it gets the hose again!" << endl;
			}
		} while (true);

		// Question 3
		do {
			cout << "What year does the events of Freddy vs. Jason take place?" << endl;
			cout << "a) 2001" << endl;
			cout << "b) 2002" << endl;
			cout << "c) 2003" << endl;
			cout << "d) 2004" << endl;
			cin >> answer;

			if (answer == 'c' || answer == 'C') {
				cout << "Correct!" << endl;
				score++;
				correctAnswers++;
				break;
			}
			else if (answer == 'a' || answer == 'A' || answer == 'b' || answer == 'B' || answer == 'd' || answer == 'D') {
				cout << "Wrong! It takes place in 2003." << endl;
				wrongAnswers++;
				break;
			}
			else {
				cout << "It chooses a, b, c, or d. Or it gets the hose again!" << endl;
			}
		} while (true);

		// Question 4
		do {
			cout << "Which movie in the Scream franchise only has one killer?" << endl;
			cout << "a) Scream 2" << endl;
			cout << "b) Scream 3" << endl;
			cout << "c) Scream 4" << endl;
			cout << "d) Scream 5" << endl;
			cin >> answer;

			if (answer == 'b' || answer == 'B') {
				cout << "Correct!" << endl;
				score++;
				correctAnswers++;
				break;
			}
			else if (answer == 'a' || answer == 'A' || answer == 'c' || answer == 'C' || answer == 'd' || answer == 'D') {
				cout << "Wrong! Scream 3 only has one killer." << endl;
				wrongAnswers++;
				break;
			}
			else {
				cout << "It chooses a, b, c, or d. Or it gets the hose again!" << endl;
			}
		} while (true);

		// Question 5
		do {
			cout << "Who is Sam in 2007's Trick 'r Treat?" << endl;
			cout << "a) A kid who loves Halloween" << endl;
			cout << "b) A serial killer" << endl;
			cout << "c) The spirit of Halloween" << endl;
			cout << "d) A ghost" << endl;
			cin >> answer;

			if (answer == 'c' || answer == 'C') {
				cout << "Correct!" << endl;
				score++;
				correctAnswers++;
				break;
			}
			else if (answer == 'a' || answer == 'A' || answer == 'b' || answer == 'B' || answer == 'd' || answer == 'D') {
				cout << "Wrong! Sam/Samhain, is the spirt of Halloween" << endl;
				wrongAnswers++;
				break;
			}
			else {
				cout << "It chooses a, b, c, or d. Or it gets the hose again!" << endl;
			}
		} while (true);

		// Question 6
		do {
			cout << "In the 2002 movie Cabin Fever, what disease does the group of friends contract?" << endl;
			cout << "a) Rabies" << endl;
			cout << "b) Flesh Eating Disease" << endl;
			cout << "c) The Plague" << endl;
			cout << "d) Tuberculosis" << endl;
			cin >> answer;

			if (answer == 'b' || answer == 'B') {
				cout << "Correct!" << endl;
				score++;
				correctAnswers++;
				break;
			}
			else if (answer == 'a' || answer == 'A' || answer == 'c' || answer == 'C' || answer == 'd' || answer == 'D') {
				cout << "Wrong! They contract a flesh eating disease." << endl;
				wrongAnswers++;
				break;
			}
			else {
				cout << "It chooses a, b, c, or d. Or it gets the hose again!" << endl;
			}
		} while (true);

		// Question 7
		do {
			cout << "What starts the events of 2012's American Mary?" << endl;
			cout << "a) A rape" << endl;
			cout << "b) A robbery" << endl;
			cout << "c) A surgery gone wrong" << endl;
			cout << "d) A kidnapping" << endl;
			cin >> answer;

			if (answer == 'a' || answer == 'A') {
				cout << "Correct!" << endl;
				score++;
				correctAnswers++;
				break;
			}
			else if (answer == 'b' || answer == 'B' || answer == 'c' || answer == 'C' || answer == 'd' || answer == 'D') {
				cout << "Wrong! Mary is violated. " << endl;
				wrongAnswers++;
				break;
			}
			else {
				cout << "It chooses a, b, c, or d. Or it gets the hose again!" << endl;
			}
		} while (true);

		// Question 8
		do {
			cout << "In Jeepers Creepers, the Creeper rises every how many years to feed?" << endl;
			cout << "a) 23 years" << endl;
			cout << "b) every year" << endl;
			cout << "c) 50 years" << endl;
			cout << "d) 10 years" << endl;
			cin >> answer;

			if (answer == 'a' || answer == 'A') {
				cout << "Correct!" << endl;
				score++;
				correctAnswers++;
				break;
			}
			else if (answer == 'b' || answer == 'B' || answer == 'c' || answer == 'C' || answer == 'd' || answer == 'D') {
				cout << "Wrong! Every 23rd Spring,for 23 days,it gets to eat." << endl;
				wrongAnswers++;
				break;
			}
			else {
				cout << "It chooses a, b, c, or d. Or it gets the hose again!" << endl;
			}
		} while (true);

		// Question 9
		do {
			cout << "What was the object of the game in 2005's Cry Wolf, acccoring to Dodger?" << endl;
			cout << "a) Avoid suspicion" << endl;
			cout << "b) Eliminate enemies" << endl;
			cout << "c) Manipulate your friends" << endl;
			cout << "d) All of the above" << endl;
			cin >> answer;

			if (answer == 'd' || answer == 'D') {
				cout << "Correct!" << endl;
				score++;
				correctAnswers++;
				break;
			}
			else if (answer == 'a' || answer == 'A' || answer == 'b' || answer == 'B' || answer == 'c' || answer == 'C') {
				cout << "Wrong! The object of the game is all of the above." << endl;
				wrongAnswers++;
				break;
			}
			else {
				cout << "It chooses a, b, c, or d. Or it gets the hose again!" << endl;
			}
		} while (true);

		// Question 10
		do {
			cout << "How is Shane stopped in the 2019 movie The Room?" << endl;
			cout << "a) Shane is shot" << endl;
			cout << "b) Shane is set on fire" << endl;
			cout << "c) Shane is locked outside" << endl;
			cout << "d) Trick question, Shane isn't stopped" << endl;
			cin >> answer;

			if (answer == 'c' || answer == 'C') {
				cout << "Correct!" << endl;
				score++;
				correctAnswers++;
				break;
			}
			else if (answer == 'a' || answer == 'A' || answer == 'b' || answer == 'B' || answer == 'd' || answer == 'D') {
				cout << "Wrong! Shane is locked outside, and turns to ash." << endl;
				wrongAnswers++;
				break;
			}
			else {
				cout << "It chooses a, b, c, or d. Or it gets the hose again!" << endl;
			}
		} while (true);
		// End of questions
		cout << "You got " << correctAnswers << " correct and " << wrongAnswers << " wrong." << endl;
		cout << "Your final score is " << score << " out of " << totalQuestions << "." << endl;

		// Play again?
		cout << "Do you want to play again? (y/n)" << endl;
		cin >> startAnswer;
	} while (startAnswer == 'y' || startAnswer == 'Y');

	return 0;
}

