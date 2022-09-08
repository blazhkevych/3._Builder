#pragma once

#include "VehicleBuilder.h"

// Director(распорядитель) - конструирует объект (Vehicle), пользуясь интерфейсом Builder.
class Shop
{
	VehicleBuilder* vehicleBuilder;
public:
	void SetVehicleBuilder(VehicleBuilder* pb)
	{
		vehicleBuilder = pb;
	}

	Vehicle GetVehicle()
	{
		return vehicleBuilder->GetVehicle();
	}

	void ConstructVehicle()
	{
		vehicleBuilder->BuildNameTheMechanism();
		vehicleBuilder->BuildCorps();
		vehicleBuilder->BuildEngine_HP();
		vehicleBuilder->BuildWheel_R();
		vehicleBuilder->BuildTransmission();
	}
};