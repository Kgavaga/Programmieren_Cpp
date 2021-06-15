#pragma once

#include "Position.h"
#include <string>
#include <memory>

class Place {

	const std::unique_ptr<Position> m_pos;
	const std::string m_name;

public:
	Place(const int x, const int y, const std::string& name);
	~Place();
	int getX() const;
	int getY() const;
	std::string getName() const;

};
