#pragma once

class Position{

    const int m_x, m_y;

public:
    Position(const int x, const int y);

    int getX() const;
    int getY() const;
};