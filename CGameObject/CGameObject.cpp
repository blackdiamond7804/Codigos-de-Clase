#include"CGameObject.h"

using namespace std;

uint32_t CGameObject::ms_id = 1;

CGameObject::CGameObject(uint16_t x, uint16_t y) : m_x(x), m_y(y), m_id(ms_id++) {
	cout << "Creating CGameObject " << m_id << " (" << m_x << ", " << m_y << ") " << " at ( " << this << ", " << sizeof(*this) << ")\n";
}

CGameObject::~CGameObject() {
	cout << "Destroying CGameObject " << m_id << "\n";
}

uint16_t CGameObject::getX() const { return m_x; }
void CGameObject::setX(uint16_t x) { m_x = x; }
uint16_t CGameObject::getY() const { return m_y; }
uint32_t CGameObject::getId() const { return m_id; }
