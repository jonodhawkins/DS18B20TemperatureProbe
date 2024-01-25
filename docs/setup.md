# Setup of DS18B20 Temperature Probe Project

1. Initialise Platform IO project for Adafruit Feather M0

2. Initialise git repository in root folder

3. Add submodule to git repository for Mathias Hansens' DS18B20 library

```
cd ./lib
git submodule add https://github.com/matmunk/DS18B20
```

4. Require OneWire library for DS18B20 to work.  

```
cd ./lib
git submodule add https://github.com/PaulStoffregen/OneWire 
```

5. Add 4.7k pullup resistor to one-wire pin of DS1820B sensor.

## Conversion Time
For 9-bit resolution, conversion time is ~95ms
For 12-bit resolution, conversion time is ~630ms

Additional overheads in conversion time come from sensor configuration and search.