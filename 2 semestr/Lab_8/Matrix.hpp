#pragma once
#include <iostream>
namespace AO
{
	template<typename T, int N, int M>
	class Matrix
	{
		// ����������
		// ������������
		// ������������� ��� ������
	public:
		// �����������
		Matrix<T,N,M>();

		// ����������� �����������
		Matrix<T,N,M>(const Matrix<T,N,M>& mat);

		// ������������
		Matrix<T, N, M>& operator=(const Matrix<T, N, M>& mat);

		// �������� ��������
		Matrix<T, N, M> operator+(const Matrix<T, N, M>& mat);

		// �������� ��������  C += A <=> C = C + A
		Matrix<T, N, M> operator+=(const Matrix<T, N, M>& mat);

		// �������� ���������
		Matrix<T, N, M> operator*(const Matrix<T, N, M>& mat);

		// ����������
		~Matrix<T, N, M>();

		// friend - ��������� ������� ����� ������ � private �����/������� ������
		template<typename T, int N, int M>
		friend std::istream& operator>>(std::istream& os, Matrix<T,N,M>& mat);
		template<typename T, int N, int M>
		friend std::ostream& operator<<(std::ostream& os, const Matrix<T,N,M>& mat);

		int Det();

		Matrix<T, N, M> transposition();

		Matrix<T, N, M> inv();

		// ������������� ������ ������
	private:
		int m_n, m_m;		// ����
		T m_mat[N][M]; // Matrix
	};
}
