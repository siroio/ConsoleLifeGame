#ifndef CELL_H
#define CELL_H

#include "Vector2.h"

enum class CellState
{
	BORN,
	ALIVE,
	DEPOP,
	OVER
};

class Cell
{
public:
	Cell(Vector2 position, CellState state);
	Cell() = default;
	~Cell() = default;
	void SetState(CellState state);
	CellState GetState() const;
	std::string Draw() const;
public:
	Vector2 position;
private:
	CellState state;
};

#endif