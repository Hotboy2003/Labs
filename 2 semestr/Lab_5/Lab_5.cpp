#include <iostream>

struct Elem
{
    int data;   //������ 
    //��������� �� �������� �������
    Elem* left;
    Elem* right;
    Elem* parent;
};

//������������� �������
Elem* MAKE(int data, Elem* p)
{
    Elem* q = new Elem;       //�������� ������ ��� �������
    q->data = data;
    q->left = nullptr;
    q->right = nullptr;
    q->parent = p;
    return q;
}

//���������� ��������
void ADD(int data, Elem*& root)
{
    //���� ��������� �������� ���, �� �������� ������� MAKE � ������ ��� nullptr
    if (root == nullptr) {
        root = MAKE(data, nullptr);
        return;
    }
    Elem* v = root;
    //��������� ���� �� ������ ��� ����� ������� � ����� (���� ��, �� �������� ������ �� ������)
    while ((data < v->data && v->left != nullptr) || (data > v->data && v->right != nullptr))
        if (data < v->data)
            v = v->left;
        else
            v = v->right;
    //������������� ���������� ���������
    if (data == v->data)
        return;
    //������� �������
    Elem* u = MAKE(data, v);
    //���������� �������� ��� ����� ��� ������ �������� (������ ��� ������ ��������� ��������)
    if (data < v->data)
        v->left = u;
    else
        v->right = u;
}

//����� ������
void PASS(Elem* v)
{
    if (v == nullptr)
        return;
 
    //�������� �� ����� ��������� �� ����������
    PASS(v->left);
    // ��������� ��� ����� ��������
    std::cout << v->data << std::endl;

    //�������� �� ������ ��������� �� ���������� � ����� ������� ���
    PASS(v->right);
}





int main()
{
    Elem* root = nullptr; //�������� �����
    
    return 0;
}
