#pragma once

#include <SFML/Graphics.hpp>

// �������� ����� ����������
class App { 
	// SINGLETON
private: 
	// ��������� �� ������������ ��������� ����� ������
	static App* self;
public:
	//������� ������������ ��������� ������
	static int Init(char* path);
	// �������� ������������ ��������� ������ ����� �������
	static App* get_self();


	// OTHER
private:
	// ���� �� ����� � ����������� ������
	char* path; 
	// ����� ��������� ��� �������� ������� 
	App(char* path);

	// GRAPHICS

	// ���� ��� ���������
	sf::RenderWindow* window;

	// World

public:
	// ������ ����������
	int run(); 
};