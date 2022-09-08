#pragma once

#include "VehicleBuilder.h"

// ConcreteBuilder выполняет следующие действия:
// - конструирует и собирает вместе части продукта посредством реализации интерфейса Builder.
// - определяет создаваемое представление и следит за ним.
// - предоставляет интерфейс для доступа к продукту.
class FordProbeVehicleBuilder :
	public VehicleBuilder
{
public:
	// Создать "Имя механизма".
	void BuildNameTheMechanism() override
	{
		m_vehicle.SetNameTheMechanism("Ford Probe");
	}

	// Создать "Корпус".
	void BuildCorps() override
	{
		m_vehicle.SetCorps("Купе");
	}

	// Создать "Двигатель(л. с)".
	void BuildEngine_HP() override
	{
		m_vehicle.SetEngine_HP(160);
	}

	// Создать "Колеса (R)".
	void BuildWheel_R() override
	{
		m_vehicle.SetWheel_R(14);
	}

	// Создать "Коробка передач".
	void BuildTransmission() override
	{
		m_vehicle.SetTransmission("4 Auto");
	}
};