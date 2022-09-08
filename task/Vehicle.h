#pragma once

#include <iostream>
#include <string>

using namespace std;

// Vehicle(продукт) представляет сложный конструируемый объект.
// Представление сложного объекта.
class Vehicle
{
	string m_nameTheMechanism;	// Имя механизма. 
	string m_corps;				// Корпус. 
	int m_engine_HP;			// Двигатель(л. с).
	int m_wheel_R;				// Колеса (R).
	string m_transmission;		// Коробка передач.
public:
	void SetNameTheMechanism(string nameTheMechanism) { m_nameTheMechanism = nameTheMechanism; }	// Установить значение поля "m_nameTheMechanism".
	void SetCorps(string corps) { m_corps = corps; }												// Установить значение поля "m_corps".
	void SetEngine_HP(int engine_HP) { m_engine_HP = engine_HP; }									// Установить значение поля "m_engine_HP".
	void SetWheel_R(int wheel_R) { m_wheel_R = wheel_R; }											// Установить значение поля "m_wheel_R".
	void SetTransmission(string transmission) { m_transmission = transmission; }					// Установить значение поля "m_transmission".

	string GetNameTheMechanism() { return m_nameTheMechanism; }	// Получить значение поля "m_nameTheMechanism".
	string GetCorps() { return m_corps; }							// Получить значение поля "m_corps".
	int GetEngine_HP() { return m_engine_HP; }						// Получить значение поля "m_engine_HP".
	int GetWheel_R() { return m_wheel_R; }							// Получить значение поля "m_wheel_R".
	string GetTransmission() { return m_transmission; }			// Получить значение поля "m_transmission".

	void ShowVehicle() // Выести сложный объкт на экран.
	{
		cout << "Имя механизма: " << m_nameTheMechanism << '.' << endl
			<< "Корпус: " << m_corps << '.' << endl
			<< "Двигатель(л. с): " << m_engine_HP << '.' << endl
			<< "Колеса (R): " << m_wheel_R << '.' << endl
			<< "Коробка передач: " << m_transmission << '.' << endl << endl;
	}
};