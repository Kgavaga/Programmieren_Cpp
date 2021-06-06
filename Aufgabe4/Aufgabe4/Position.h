#pragma once

class Position{

    int m_x, m_y;

public:
    Position(int x, int y);

    int getX() const;
    int getY() const;
};