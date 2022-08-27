#include "Board.h"

Board::Board(int width, int height)
{
	cells.resize(height, std::vector<Cell> (width));
	for (int y = 0; y < height; ++y) {
		for (int x = 0; x < width; ++x) {
			cells.at(y).at(x) = Cell(Vector2(x, y), CellState::DEPOP);
		}
	}
}

Cells Board::GetBoard() const
{
	return cells;
}
