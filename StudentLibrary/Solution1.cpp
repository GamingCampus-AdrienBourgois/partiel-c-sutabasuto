#include "Solution1.h"

#ifdef COMPILE_EXERCICE_1

#include <cmath>
#include <string> 


float Solution1::ConvertTemperature(float _value, TemperatureUnits _from, TemperatureUnits _to)
{
    switch (_from)
    {
    case TemperatureUnits::CELSIUS:
        if (_to == TemperatureUnits::FAHRENHEIT)
            return (_value * 9.0 / 5.0) + 32.0;
        else if (_to == TemperatureUnits::KELVIN)
            return _value + 273.15;
        break;

    case TemperatureUnits::FAHRENHEIT:
        if (_to == TemperatureUnits::CELSIUS)
            return (_value - 32.0) * 5.0 / 9.0;
        else if (_to == TemperatureUnits::KELVIN)
            return (_value - 32.0) * 5.0 / 9.0 + 273.15;
        break;

    case TemperatureUnits::KELVIN:
        if (_to == TemperatureUnits::CELSIUS)
            return _value - 273.15;
        else if (_to == TemperatureUnits::FAHRENHEIT)
            return (_value - 273.15) * 9.0 / 5.0 + 32.0;
        break;
    }

    return -1.0f;
}

std::string Solution1::TemperatureUnitToString(TemperatureUnits unit)
{
    return "";
}

#endif