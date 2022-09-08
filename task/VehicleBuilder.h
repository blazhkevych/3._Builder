#pragma once

#include "Vehicle.h"

// Abstract Builder задает абстрактный интерфейс (класс) для создания частей объекта Product (в нашем случае, Vehicle).
// "Abstract Builder".
class VehicleBuilder abstract
{
protected:
	Vehicle m_vehicle;
public:
	Vehicle GetVehicle()
	{
		return m_vehicle;
	}

	virtual void BuildNameTheMechanism() abstract;	// Создать "Имя механизма".
	virtual void BuildCorps() abstract;				// Создать "Корпус".
	virtual void BuildEngine_HP() abstract;			// Создать "Двигатель(л. с)".
	virtual void BuildWheel_R() abstract;			// Создать "Колеса (R)".
	virtual void BuildTransmission() abstract;		// Создать "Коробка передач".
};