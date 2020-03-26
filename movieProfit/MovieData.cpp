#include "MovieData.h"

MovieData::MovieData(string aTitle, string aDirector, int aYearReleased, int aRunningTime, double aProductionCost, double aFirstYearRevenue)
{
	setAll(aTitle, aDirector, aYearReleased, aRunningTime, aProductionCost, aFirstYearRevenue);
}

MovieData::MovieData(const MovieData& copy)
{
	title = copy.getTitle();
	director = copy.getDirector();
	yearReleased = copy.getYearReleased();
	runningTime = copy.getRunningTime();
	productionCost = copy.getProductionCost();
	firstYearRevenue = copy.getFirstYearRevenue();
	profit = getFirstYearRevenue() - getProductionCost();
}

MovieData::~MovieData()
{
}

void MovieData::setTitle(string aTitle)
{
	title = aTitle;
}

void MovieData::setDirector(string aDirector)
{
	director = aDirector;
}

void MovieData::setYearReleased(int aYearReleased)
{
	if (aYearReleased < 1878)
	{
		yearReleased = 1878;
	}
	else
	{
		yearReleased = aYearReleased;
	}
}

void MovieData::setRunnninngTime(int aRunningTime)
{
	if (aRunningTime < 0)
	{
		aRunningTime = 0;
	}
	else
	{
		runningTime = aRunningTime;
	}
}

void MovieData::setProductionCost(double aProductionCost)
{
	if (aProductionCost < 0)
	{
		productionCost = 0;
	}
	else
	{
		productionCost = aProductionCost;
	}

	profit = getFirstYearRevenue() - getProductionCost();
}

void MovieData::setFirstYearRevenue(double aFirstYearRevenue)
{
	if (aFirstYearRevenue < 0)
	{
		firstYearRevenue = 0;
	}
	else
	{
		firstYearRevenue = aFirstYearRevenue;
	}

	profit = getFirstYearRevenue() - getProductionCost();
}

void MovieData::setAll(string aTitle, string aDirector, int aYearReleased, int aRunningTime, double aProductionCost, double aFirstYearRevenue)
{
	setTitle(aTitle);
	setDirector(aDirector);
	setYearReleased(aYearReleased);
	setRunnninngTime(aRunningTime);
	setProductionCost(aProductionCost);
	setFirstYearRevenue(aFirstYearRevenue);
}

string MovieData::getTitle() const
{
	return title;
}

string MovieData::getDirector() const
{
	return director;
}

int MovieData::getYearReleased() const
{
	return yearReleased;
}

int MovieData::getRunningTime() const
{
	return runningTime;
}

double MovieData::getProductionCost() const
{
	return productionCost;
}

double MovieData::getFirstYearRevenue() const
{
	return firstYearRevenue;
}

double MovieData::getProfit() const
{
	return profit;
}

void MovieData::display()
{
	cout  << fixed << setprecision(2) << getTitle() << setw(25)  << getDirector() << setw(25)  << getYearReleased() << setw(25) 
		<< getRunningTime() << setw(25)  << getProductionCost() << setw(25) << getFirstYearRevenue() << setw(25) << getProfit();
}
