#include<stdio.h>
#include<string.h>
/*
第１問
x,y座標を持つ構造体Vector2を、
作ってください。
x,yはpublicで作成し、外部で値を設定して、
値が表示されることを確認してください。
*/
/**/
struct  Task1_Structure
{
public:
	int GetVector2_x() { return vector2_x; }
	int GetVector2_y() { return vector2_y; }
	int vector2_x;
	int vector2_y;
private:
};
int main()
{
	int vec_x, vec_y;
	Task1_Structure task1_Structure;
	printf("x座標を入力してください。\n");
	scanf_s("%d", &vec_x);
	printf("y座標を入力してください。\n");
	scanf_s("%d", &vec_y);
	task1_Structure.vector2_x = vec_x;
	task1_Structure.vector2_y = vec_y;
	printf_s("x座標,y座標%d %d", task1_Structure.GetVector2_x(),task1_Structure.GetVector2_y());
}
/*
第２問
x,y座標を持つ構造体Vector2を、
作ってください。
x,yはprivateで作成し、関数を介して値を設定できるようにして、
値が表示されることを確認してください。
*/
/**/
struct  Task2_Structure
{
public:
	int GetVector2_x() { return vector2_x; }
	int GetVector2_y() { return vector2_y; }
	void SetVector2_x(int setVector_x);
	void SetVector2_y(int setVector_y);
private:
	int vector2_x;
	int vector2_y;
};
int main()
{
	int vec_x,vec_y;
	Task2_Structure task2_Structure;
	printf("x座標を入力してください。\n");
	scanf_s("%d",&vec_x);
	printf("y座標を入力してください。\n");
	scanf_s("%d",&vec_y);
	task2_Structure.SetVector2_x(vec_x);
	task2_Structure.SetVector2_y(vec_y);
	printf_s("x座標,y座標%d %d",task2_Structure.GetVector2_x(),task2_Structure.GetVector2_y());
}
void Task2_Structure::SetVector2_x(int setVector_x)
{
	vector2_x = setVector_x;
}
void Task2_Structure::SetVector2_y(int setVector_y)
{
	vector2_y = setVector_y;
}
/*
第３問
x,y,z座標を持つ構造体Vector3を
作ってください。
x,y,zはprivateで作成し、関数を介して値を設定できるようにして、
値が表示されることを確認してください。
*/
/**/
struct  Task3_Structure
{
public:
	int GetVector3_x() { return vector3_x; }
	int GetVector3_y() { return vector3_y; }
	int GetVector3_z() { return vector3_z; }
	void SetVector3_x(int setVector_x);
	void SetVector3_y(int setVector_y);
	void SetVector3_z(int setVector_z);
private:
	int vector3_x;
	int vector3_y;
	int vector3_z;
};
int main()
{
	int vec_x, vec_y,vec_z;
	Task3_Structure task3_Structure;
	printf("x座標を入力してください。\n");
	scanf_s("%d", &vec_x);
	printf("y座標を入力してください。\n");
	scanf_s("%d", &vec_y);
	printf("z座標を入力してください。\n");
	scanf_s("%d", &vec_z);
	task3_Structure.SetVector3_x(vec_x);
	task3_Structure.SetVector3_y(vec_y);
	task3_Structure.SetVector3_z(vec_z);
	printf_s("x座標,y座標,z座標%d %d %d", task3_Structure.GetVector3_x(), 
										 task3_Structure.GetVector3_y(), 
								         task3_Structure.GetVector3_z());
}
void Task3_Structure::SetVector3_x(int setVector_x)
{
	vector3_x = setVector_x;
}
void Task3_Structure::SetVector3_y(int setVector_y)
{
	vector3_y = setVector_y;
}
void Task3_Structure::SetVector3_z(int setVector_z)
{
	vector3_z = setVector_z;
}