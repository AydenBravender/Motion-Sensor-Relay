# Motion-Sensor-Relay
This project served as my introduction to Arduino programming. It also marked my initial encounter with both a relay and a PIR sensor.
An Attiny 85 microcontroller manages a relay connected to household outlets. This relay, when activated, powers a lamp or any other household appliance.
## Things to Note ##

- The relay I used had inverted logic, meaning sending a signal to turn it on actually turned it off, and vice versa.
- The pir sensor usally takes a few seconds to initialize, and the relay may switch on and off a few times before the code starts to run
- Exercise caution when working with high voltage to ensure safety and prevent any potential hazards. 

## Schematic View ##
<p align="center">
  <img src="https://raw.githubusercontent.com/AydenBravender/Motion-Sensor-Relay/main/Screenshot%202023-10-14%20160903.jpg" alt="Image" width="50%" height="50%">>
</p>


