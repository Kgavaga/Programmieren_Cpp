#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <algorithm>

void printArray(const std::vector<std::string>& vec)
{
	/*for (size_t i = 0; i < vec.size(); i++)
	{
		std::cout << vec.at(i) << std::endl;
	}
	for (const std::string & var : vec)
	{
		std::cout << var << std::endl;
	}*/
	for (auto it = vec.begin(); it != vec.end(); it++)
	{
		std::cout << it->data() << std::endl;
	}
	std::cout << std::endl;
}

void vectorExcercise()
{

	std::vector<std::string> zutaten = { "Eier", "Milch", "Zucker", "Schokolade", "Mehl" };
	printArray(zutaten);

	zutaten.erase(zutaten.begin());
	printArray(zutaten);

	zutaten.push_back("Kaffee");
	printArray(zutaten);

	auto index = std::find_if(zutaten.begin(), zutaten.end(), [](const std::string& text) -> bool {
		if (text == "Zucker") return true;
		return false;
		});
	index->assign("Honig");
	printArray(zutaten);

	index = std::find_if(zutaten.begin(), zutaten.end(), [](const std::string& text) -> bool {
		if (text == "Milch") return true;
		return false;
		});
	zutaten.erase(index);
	printArray(zutaten);
}

void printList(const std::list<std::string>& list)
{
	/*for (const std::string & var : list)
	{
		std::cout << var << std::endl;
	}*/
	for (auto it = list.begin(); it != list.end(); it++)
	{
		std::cout << it->data() << std::endl;
	}
	std::cout << std::endl;
}

bool compStringZucker(const std::string& text)
{
	if (text == "Zucker") return true;
	return false;
}

void listExcercise()
{
	std::list<std::string> zutaten = { "Eier", "Milch", "Zucker", "Schokolade", "Mehl" };
	printList(zutaten);
	
	zutaten.erase(zutaten.begin());
	printList(zutaten);

	zutaten.push_back("Kaffe");
	printList(zutaten);

	auto it = std::find_if(zutaten.begin(), zutaten.end(), compStringZucker);
	it->assign("Honig");
	printList(zutaten);

	it = std::find_if(zutaten.begin(), zutaten.end(), [](const std::string& text) -> bool {
		if (text == "Milch") return true;
		return false;
		});
	zutaten.erase(it);
	printList(zutaten);
	std::string help = "Hello";

	for (auto it = zutaten.begin(); it != zutaten.end(); it++)
	{
		if (zutaten.begin()->size() > it->size())
		{
			zutaten.push_front(*it);
			zutaten.erase(it);
		}
	}
	printList(zutaten);

}

int calculateAsciiSum(const std::string& text)
{
	int sum = 0;
	for (char c : text)
	{
		sum += c;
	}
	return sum;
}

void stlExcercise()
{
	std::list<std::string> zutaten = { "Eier", "Milch", "Zucker", "Schokolade", "Mehl" };
	int myNumber = 0;

	zutaten.sort([&](const std::string& first, const std::string& second)->bool {
			return first.size() < second.size();
		});
	printList(zutaten);
	zutaten.sort([&](const std::string& first, const std::string& second)->bool {
			return first.front() < second.front();
		});
	printList(zutaten);
	zutaten.sort([&](const std::string& first, const std::string& second)->bool {
			return calculateAsciiSum(first) < calculateAsciiSum(second);
		});
	printList(zutaten);
}

int main()
{
	//listExcercise();
	stlExcercise();


	return 0;
}