#include "MovieData.h"

void setMovieData(MovieData&);

int main()
{
	MovieData movie;
	setMovieData(movie);

	cout << "\n\n\n\n\n\n";

	cout  << "Title" << setw(40) << "Director" << setw(40) << "Release Year" << setw(40) << "Running Time(Minutes)" << setw(40) <<  "Production Cost" << setw(40) << "First Year Revenue" << setw(40) << "Profit\n";

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
