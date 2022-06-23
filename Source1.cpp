#include <iostream>
#include<ctime>

using namespace std;



int delay(int milliseconds) {
	clock_t goal = milliseconds + clock();
	while (goal > clock());
	return 1;
}



void crtaj(int r, int s, int r1, int s1) {


	int redaka = 20;
	int stupaca = 40;

	for (int i = 1; i <= redaka; i++)
	{

		for (int j = 1; j <= stupaca; j++)
		{

			if (j == s and i == r)
			{
				cout << "A";
			}
			else if (j == s1 and i == r1)
			{
				cout << "B";
			}

			else
			{
				cout << "-";
			}




		}cout << endl;

	}

}

 void check(int& r, int& s, int& r1, int& s1) {


	 if ((s - s1) < 0)
	 {
		 ///trbia ic desno 
		 s++;
	 }


	 else if ((s - s1) > 0)
	 {
		 ///trbia ic desno 
		 s--;
	 }


	 else  if ((r - r1) < 0)
	 {
		 ///trbia ic desno 
		 r++;
	 }

	 else if ((r - r1) > 0)
	 {
		 ///trbia ic desno 
		 r--;
	 }


}

void ponovocrtaj(int& r, int& s, int& r1, int& s1, int& r2, int& s2) {
	check(r, s, r1, s1);

	int redaka = 20;
	int stupaca = 40;

	for (int i = 1; i <= redaka; i++)
	{

		for (int j = 1; j <= stupaca; j++)
		{


			if (j == s2 and i == r2)
			{
				cout << "A";
			}
			else if (j == s and i == r)
			{
				cout << "X";
			}
			else if (j == s1 and i == r1)
			{
				cout << "B";
			}


			else
			{
				cout << "-";
			}




		}cout << endl;

	}


}

int main() {

	int  s, r, s1, r1;
	cout << "Uneste redak a" << endl;
	cin >> r;
	cout << "Uneste stupac a" << endl;
	cin >> s;
	cout << "Uneste redak b" << endl;
	cin >> r1;
	cout << "Uneste stupac b" << endl;
	cin >> s1;
	
	int s2 = s;//morao sam dodati pomocne varijable da budu fixirane a i b
	int r2 = r;

	
	
	// prvo iscrtamo unesene kordinate
	crtaj(r, s, r1, s1);
	do
	{
		system("CLS");
		//funckija koja ponovo crta
		ponovocrtaj(r, s, r1, s1, r2, s2);

		delay(100);

	} while (!(s == s1 && r == r1)); //moramo ici dok a i b kordinatw nisu iste



	return 0;
}