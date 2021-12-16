#pragma once
#include <SFML/Graphics.hpp>

// ������������ ����
namespace ao
{
	/*class Planets
	{
	public:
		Planets(int x0, int y0, float r0);

		~Planets();

		sf::CircleShape* Get();

	private:
		int m_x0, m_y0;
		float m_r0;
		sf::CircleShape* m_planets;
	};*/
	// �����
	class Circle
	{
	public:
		// �����������
		Circle(int x, int y, float r, float angle, float v0);
		
		// ���������� 
		~Circle();

		// �����, �������� �������� 
		void Move(float t, float g);

		// �������� �������
		sf::CircleShape* Get();

	private:
		int m_x, m_y;
		float m_r;
		float m_angle;
		float m_v0;
		sf::CircleShape* m_circle;
	};
}