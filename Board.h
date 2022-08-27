#ifndef BOARD_H
#define BOARD_H

#include <vector>
#include "Cell.h"

typedef std::vector<std::vector<Cell>> Cells;

class Board
{
public:
	Board(int width, int height);
	Cells GetBoard() const;
private:
	Cells cells;
};

#endif