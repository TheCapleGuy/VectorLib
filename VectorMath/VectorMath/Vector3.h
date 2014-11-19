#pragma once
class Vector3
{
public:
	float x, y, z;
	float scalar;
	Vector3();
	Vector3(float a_x, float a_y, float a_z);
	~Vector3();
	Vector3 operator+(Vector3 &other);
	Vector3 operator-(Vector3 &other);
	Vector3 operator*(float a_scalar);
	Vector3 operator*(Vector3 &other);
	void operator=(Vector3 &other);

	float Magnitude();
	void Normalise();
	Vector3 GetNormal();
	float VectorDistance(Vector3 &other);
	float DotProduct(Vector3 &other);

};