#include <iostream>	
#include <string>
#include <fstream>
#include <vector>
#include <random>

using std::cout, std::cin, std::endl;

struct Point
{
	int x{ 0 };
	int y{ 0 };
};
std::vector<Point> loadPoints(const std::string& fileName);
void savePoints(const std::string& fileName, const std::vector<Point>& points);

int main()
{
	std::random_device seed;
	std::default_random_engine e(seed());
	std::normal_distribution success(20.0, 2.0);
	for (int i{ 0 }; i < 25; i++)
	{
		cout << success(e) << endl;
	}

	/*std::bernoulli_distribution willTrip(.5);

	if (willTrip(e))
	{
		cout << "everyone laughs as you fall down the stairs" << endl;
	}
	else
	{
		cout << "you manage to do a cartwheel down the stairs" << endl;
	}*/
	/*const std::string fileName{ "message.txt" };
	std::vector<Point> points{ loadPoints(fileName) };
	if (points.size() == 0)
	{
		points.push_back({ 1, 2 });
	}
	else
	{
		points.push_back({ points.back().x + 1, points.back().y + 1 });
	}
	
	for (const auto& point : points)
	{
		cout << "point x: " << point.x << " " << "point.y: " << point.y << endl;
	}

	savePoints(fileName, points);*/
}

std::vector<Point> loadPoints(const std::string& fileName)
{
	std::vector<Point> points;

	std::ifstream fin{ fileName };
	if (!fin.is_open())
	{
		cout << "the file did not open correctly." << endl;
	}
	else
	{
		int numPoints{}; 
		fin >> numPoints;
		for (int i{ 0 }; i < numPoints; i++)
		{
			points.push_back(Point());
			fin >> points.back().x >> points.back().y;
		}
	}
	fin.close();

	return points;
}
	void savePoints(const std::string & fileName, const std::vector<Point>& points)
	{
		std::ofstream fout{ fileName };
		fout << points.size() << endl;

		for (const auto& point : points)
		{
			fout << point.x << " " << point.y << endl; 
		}

		fout.close();
	}
