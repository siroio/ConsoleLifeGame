#include "Cell.h"

Cell::Cell(Vector2 position, CellState state)
{
	this->position = position;
	this->state = state;
}

void Cell::SetState(CellState state)
{
	this->state = state;
}

CellState Cell::GetState() const
{
	return this->state;
}

std::string Cell::Draw() const
{
	std::string sprite = "��";
	switch (this->state)
	{
		case CellState::ALIVE: sprite = "��"; break;
		case CellState::BORN:  sprite = "��"; break;
		case CellState::DEPOP: sprite = "��"; break;
		case CellState::OVER:  sprite = "��"; break;
	}
	return sprite;
}
