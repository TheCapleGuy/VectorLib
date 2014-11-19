class Vector2
{
public:
	float x, y;
	float scalar;
	Vector2();
	Vector2(float a_x, float a_y);
	~Vector2();
	Vector2 operator+(Vector2 &other);
	Vector2 operator-(Vector2 &other);
	Vector2 operator*(float a_scalar);
	Vector2 operator*(Vector2 &other);
	void operator=(Vector2 &other);

	float Magnitude();
	void Normalise();
	Vector2 GetNormal();
	float VectorDistance(Vector2 &other);
	float DotProduct(Vector2 &other);

};
