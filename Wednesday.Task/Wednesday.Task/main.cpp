#include<stdio.h>
#include<string.h>
/*
��P��
x,y���W�����\����Vector2���A
����Ă��������B
x,y��public�ō쐬���A�O���Œl��ݒ肵�āA
�l���\������邱�Ƃ��m�F���Ă��������B
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
	printf("x���W����͂��Ă��������B\n");
	scanf_s("%d", &vec_x);
	printf("y���W����͂��Ă��������B\n");
	scanf_s("%d", &vec_y);
	task1_Structure.vector2_x = vec_x;
	task1_Structure.vector2_y = vec_y;
	printf_s("x���W,y���W%d %d", task1_Structure.GetVector2_x(),task1_Structure.GetVector2_y());
}
/*
��Q��
x,y���W�����\����Vector2���A
����Ă��������B
x,y��private�ō쐬���A�֐�����Ēl��ݒ�ł���悤�ɂ��āA
�l���\������邱�Ƃ��m�F���Ă��������B
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
	printf("x���W����͂��Ă��������B\n");
	scanf_s("%d",&vec_x);
	printf("y���W����͂��Ă��������B\n");
	scanf_s("%d",&vec_y);
	task2_Structure.SetVector2_x(vec_x);
	task2_Structure.SetVector2_y(vec_y);
	printf_s("x���W,y���W%d %d",task2_Structure.GetVector2_x(),task2_Structure.GetVector2_y());
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
��R��
x,y,z���W�����\����Vector3��
����Ă��������B
x,y,z��private�ō쐬���A�֐�����Ēl��ݒ�ł���悤�ɂ��āA
�l���\������邱�Ƃ��m�F���Ă��������B
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
	printf("x���W����͂��Ă��������B\n");
	scanf_s("%d", &vec_x);
	printf("y���W����͂��Ă��������B\n");
	scanf_s("%d", &vec_y);
	printf("z���W����͂��Ă��������B\n");
	scanf_s("%d", &vec_z);
	task3_Structure.SetVector3_x(vec_x);
	task3_Structure.SetVector3_y(vec_y);
	task3_Structure.SetVector3_z(vec_z);
	printf_s("x���W,y���W,z���W%d %d %d", task3_Structure.GetVector3_x(), 
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