#include "header.h"
#include <iostream>
using namespace std;
ElectronicDevice::ElectronicDevice()
{
	poweredOn = false;
}
ElectronicDevice::ElectronicDevice(bool poweredOn)
{
	this->poweredOn = poweredOn;
}

void ElectronicDevice::displayInfo()
{
	if (poweredOn) {
		cout << "ELectronic Device  powered On\n";
	}
	else
	{
		cout << "Electronic Device powered off\n";
	}
}

Rechargeable::Rechargeable()
{
	this->batteryCapacity = 0
		;
	this->Recharge = false;
}

Rechargeable::Rechargeable(int batteryCapacity, bool Recharge)
{
	this->batteryCapacity = batteryCapacity;
	this->Recharge = Recharge;
}

int Rechargeable::getBatteryCapacity()
{
	return this->batteryCapacity;
}

Screen::Screen()
{
	screenSize = 4;
}

Screen::Screen(int screenSize)
{
	this->screenSize = screenSize;
}

void Screen::DisplayContent()
{
	cout << "Displaying content on the screen.\n";
}

int Screen::getScreenSize()
{
	return this->screenSize;
}

Tablet::Tablet(Screen& s, Rechargeable& r,ElectronicDevice& e)
{
	this->screen = &s;
	this->recharge = &r;
	this->e1 = &e;
}

void Tablet::useTablet()
{
	e1->displayInfo()
		;
	this->screen->DisplayContent();
}

void Tablet::displayInfo()
{
	cout << "Tablet Information : \n";
	cout << "Electronic  Device with power consumption : " << recharge->getBatteryCapacity()/50 << endl;
	cout << "Battery Capacity : " << recharge->getBatteryCapacity() << endl;
	cout << "Screen Size : " << screen->getScreenSize() << endl;
}
