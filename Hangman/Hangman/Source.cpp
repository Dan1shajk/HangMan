#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void openFile();
void starify(string s);
void userGuess(string s, string copy);
void draw(int g);

int main(){

	draw(9);
	openFile();

	return 0;
}

void openFile()
{
	string word;
	ifstream myFile;
	char input;

	myFile.open("word.txt");

	if (myFile.fail())
	{
		cerr << "File not found\n";
	}
	else {
		while (!myFile.eof())
		{
			getline(myFile, word);
			starify(word);
			cout << "would you like to play again? (y/n)\n";
			cin >> input;
			if (input == 'n' || input == 'N')
				break;

		}
	}

	myFile.close();

}

void starify(string s)
{
	string copy = s;

	for (int i = 0; i < s.size(); i++)
	{
		copy[i] = '*';
	}

	cout << "word to guess is  " <<copy<<endl;

	userGuess(s, copy);

}

void userGuess(string s, string copy)
{
	int guess = 5;
	char letter;
	int x ;
	
	

	while (guess > 0)
	{
		x = 0;
		cout << "guess a letter\n";
		cin >> letter;

		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == letter)
			{
				copy[i] = letter;
				x++;
			}
			
		}
		if (x == 0)
		{
			guess--;
			cout << "incorrect guess\n";
			//cout << "you have " << guess << " guess(es) left\n";
			draw(guess);
			
		}
		cout <<"                      " <<copy << endl;
		
		if (guess == 0)
		{
			cout << "the word was " << s << endl;
		}
		if (s == copy)
		{
			cout << "congrats!" << endl;
			break;
		}
		
	}
	
}

void draw(int g)
{

	if (g == 4)
	{
		cout << " ______________\n";
		cout << "|              |\n";
		cout << "|              O\n";
		cout << "|\n";
		cout << "|\n";
		cout << "|\n";
		cout << "|\n";
		cout << "|\n";
		cout << "|\n";
		cout << "___________\n";
	}
	if (g == 3)
	{
		cout << " ______________\n";
		cout << "|               |\n";
		cout << "|               O\n";
		cout << "|              / \n";
		cout << "|\n";
		cout << "|\n";
		cout << "|\n";
		cout << "|\n";
		cout << "|\n";
		cout << "|\n";
		cout << "___________\n";
	}
	if (g == 2)
	{
		cout << " ______________\n";
		cout << "|               |\n";
		cout << "|               O\n";
		cout << "|              /|\\ \n";
		cout << "|               |  \n";
		cout << "|\n";
		cout << "|\n";
		cout << "|\n";
		cout << "|\n";
		cout << "|\n";
		cout << "|\n";
		cout << "___________\n";
	}
	if (g == 1)
	{
		cout << " ______________\n";
		cout << "|               |\n";
		cout << "|               O\n";
		cout << "|              /|\\ \n";
		cout << "|               | \n";
		cout << "|              / \n";
		cout << "|\n";
		cout << "|\n";
		cout << "|\n";
		cout << "|\n";
		cout << "|\n";
		cout << "|\n";
		cout << "___________\n";
	}
	if (g == 0)
	{
		cout << " ______________\n";
		cout << "|               |\n";
		cout << "|               O\n";
		cout << "|              /|\\ \n";
		cout << "|               | \n";
		cout << "|              / \\ \n";
		cout << "|\n";
		cout << "|\n";
		cout << "|\n";
		cout << "|\n";
		cout << "|\n";
		cout << "|\n";
		cout << "___________\n";
	}

	if (g== 9)
	{
			cout << " ______________\n";
			cout << "|              |\n";
			cout << "|\n";
			cout << "|\n";
			cout << "|\n";
			cout << "|\n";
			cout << "|\n";
			cout << "|\n";
			cout << "___________\n";
		
	}
}  