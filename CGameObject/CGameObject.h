#pragma once
#include<iostream>
#include<cstdint>

class CGameObject {

public:
	CGameObject(uint16_t x, uint16_t y);
	~CGameObject();

	uint16_t getX() const;
	void setX(uint16_t x);
	uint16_t getY()const;
	void setY(uint16_t y);
	uint32_t getId()const;

private:
	static uint32_t ms_id;
	uint32_t m_id;
	uint16_t m_x, m_y;
};