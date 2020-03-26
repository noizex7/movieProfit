#pragma once

#include <iostream>
#include <string>
#include <iomanip>

using namespace::std;

class MovieData
{
private:
	string title;
	string director;
	int yearReleased;
	int runningTime;
	double productionCost;
	double firstYearRevenue;
	double profit;

public:
	MovieData(string = "No Title", string = "No Director", int = 1878, int = 0, double = 0.0, double = 0.0);
	MovieData(const MovieData&);
	~MovieData();
	void setTitle(string);
	void setDirector(string);
	void setYearReleased(int);
	void setRunnninngTime(int);
	void setProductionCost(double);
	void setFirstYearRevenue(double);
	void setAll(string, string, int, int, double, double);
	string getTitle() const;
	string getDirector() const;
	int getYearReleased() const;
	int getRunningTime() const;
	double getProductionCost() const;
	double getFirstYearRevenue() const;
	double getProfit() const;
	void display();

};

