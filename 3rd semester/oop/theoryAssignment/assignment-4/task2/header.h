#pragma once
class ElectronicDevice {
	bool poweredOn;
public:
	ElectronicDevice();
	ElectronicDevice(bool poweredOn);
	void virtual displayInfo();
};
class Rechargeable {
protected:
	int batteryCapacity;
	bool  Recharge;
public:
	Rechargeable();
	Rechargeable(int batteryCapacity,bool Recharge);
	int getBatteryCapacity();
};
class  Screen {
protected:
	int screenSize;
public:
	Screen();
	Screen(int  screenSize);
	void  DisplayContent();
	int getScreenSize();
};
class Tablet:public ElectronicDevice,public Rechargeable, public Screen {
	Screen* screen;
	Rechargeable* recharge;
	ElectronicDevice* e1;
public:
	Tablet(Screen& s, Rechargeable& r, ElectronicDevice& e);
	void useTablet();
	void displayInfo() override;
};