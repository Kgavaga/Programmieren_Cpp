#pragma once

class Position{

    int m_x, m_y;

public:
    Position(int x, int y);
    ~Position();

    int getX();
    int getY();
};