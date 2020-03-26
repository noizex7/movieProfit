#include "MovieData.h"

void setMovieData(MovieData&);

int main()
{
	MovieData movie;
	setMovieData(movie);

	cout << "\n\n\n\n\n\n";

	cout  << setw(25) << left << "Title" << setw(25) << left << "Director" << setw(25) << left << "Release Year" << setw(25) << left
		<< "Running Time(Minutes)" << setw(25) << left << "Production Cost" << setw(25) << left << "First Year Revenue" << setw(25) << left << "Profit\n";

	movie.display();
}

void setMovieData(MovieData& aMovie)
{
	string* aTitle = nullptr, * aDirector = nullptr;

	int* aYearReleased = nullptr, * aRunningTime = nullptr;

	double * aProductionCost = nullptr, 
		* aFirstYearRevenue = nullptr, * aProfit = nullptr;

	aTitle = new string;
	aDirector = new string;
	aYearReleased = new int;
	aRunningTime = new int;
	aProductionCost = new double;
	aFirstYearRevenue = new double;

	cin.clear();

	cout << "What is the Title of the movie:\n";
	getline(cin, *aTitle);

	cin.clear();

	cout << "Name of the director:\n";
	getline(cin, *aDirector);

	cin.clear();

	cout << "Year the movie was released:\n";
	cin >> *aYearReleased;

	cout << "Running time in minutes:\n";
	cin >> *aRunningTime;

	cout << "What was the production cost:\n";
	cin >> *aProductionCost;

	cout << "What was the first year revenue:\n";
	cin >> *aFirstYearRevenue;

	aMovie.setAll(*aTitle, *aDirector, *aYearReleased, *aRunningTime, *aProductionCost, *aFirstYearRevenue);

	delete 	aTitle;
	delete	aDirector;
	delete	aYearReleased;
	delete	aRunningTime;
	delete	aProductionCost;
	delete  aFirstYearRevenue;
}
