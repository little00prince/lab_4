#include "figure.h"

//����� �������
double figure::get_area()
{
    return area;
}

//����� ���������
double figure::get_volume()
{
    return volume;
}

//���� ���� ������
void figure::setType(int e)
{
    type = e;
}

//����� ���� ������
int figure::getType()
{
    return type;
}

//����������
figure::~figure()
{

}

//�����������
figure::figure()
{
    area = 0;
    volume = 0;

}

int figure::type = 0;
