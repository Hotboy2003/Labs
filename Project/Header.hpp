#pragma once
#include <SFML/Graphics.hpp>

// ������������ ����
namespace ao
{
	const float g_earth = 9.8; // �/�^2
	const float g_merkuri = 3.7; // �/�^2
	const float g_venera = 8.87; // �/�^2
	const float g_mars = 3.721; // �/�^2
	const float g_jupiter = 24.79; // �/�^2
	const float g_saturn = 10.44; // �/�^2
	const float g_uran = 8.87; // �/�^2
	const float g_neptun = 11.15; // �/�^2

	// �����
	class Circle
	{
	public:
		// �����������
		Circle(int x, int y, float r, float angle, float v0)
		{
			m_x = x;
			m_y = y;
			m_r = r;
			m_v0 = v0;
			m_angle = (2*acos(-1) - angle);
			m_circle = new sf::CircleShape(m_r);
			m_circle->setOrigin(m_r, m_r);
			m_circle->setPosition(m_x, m_y);
			m_circle->setFillColor(sf::Color::Green);
		}

		// ���������� 
		~Circle()
		{
			delete m_circle;
		}

		// �����, �������� �������� 
		void Move(float t, float g)
		{
			float x = m_x + m_v0 * cos(m_angle) * t;
			float y = m_y + m_v0 * sin(m_angle) * t + g * t * t / 2;

			m_circle->setPosition(x, y);
		}

		// �������� �������
		sf::CircleShape* Get()
		{
			return m_circle;
		}

	private:
		int m_x, m_y;
		float m_r;
		float m_angle;
		float m_v0;
		sf::CircleShape* m_circle;
	};
}