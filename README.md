# Automatic-water-dispenser-for-pets
In the modern world, pet owners often face challenges in providing constant care and attention to 
their beloved companions due to their busy lifestyles. A significant issue arises when it comes to 
ensuring a continuous supply of clean water for pets, particularly during prolonged absences. To 
address this concern, we present a groundbreaking solution: an Automatic Water Dispenser for 
Pets. This innovative device is designed to detect the presence of pets and dispense water on 
demand, ensuring they have access to fresh water whenever they need it. 

## Design Process
### Determining features
To full fill the identified requirements following features were incoparated.
- Automatic detection of the presence of the animal with precision.
- Monitoring water level within the container
- Buzzer Alert System to alert the pet owner.

### Block Diagram
<p align="center">
<img src="https://github.com/CharuNish/Automatic-water-dispenser-for-pets/assets/60501756/a2a6c120-9e4d-48ca-b3b4-57e68a7ce241" width ="75%" />  
</p>

### Functionality
The functionality process of the product is as follows:
- **Water level sensing:** The water level sensor continuously monitors the water level within the main reservoir. When the water level drops to a low point, the system activates a buzzer, promptly alerting the pet owner to refill the main reservoir, ensuring that the dispenser is always ready to meet the needs of the pets.
- **Dispensing Water:** Upon refilling the main reservoir with sufficient water, the buzzer deactivates, signaling that the dispenser is ready for use. When the ultra-sonic sensor detects the presence of an animal, such as a pet, the system triggers the microcontroller to activate the motor. 
- **Water Pumping:** The motor activates the water pump, facilitating the flow of water to the drinking plate positioned above. Pets can access a steady stream of clean water, promoting their wellbeing and ensuring they have access to fresh water whenever they need it.
- **Intelligent Water Recycling:** As the pet leaves the drinking area, any remaining water on the plate flows back into the dispenser through a filtration process. The filtration system efficiently cleans and purifies the water, removing impurities and contaminants, making it safe for future consumption.
- **Return to Main Reservoir:** Filtered water then returns to the main reservoir, where it is stored and ready for the next use. This process ensures that water is conserved and utilized responsibly, addressing concerns of water wastage and promoting sustainable pet care practices. 

### Component Selection
- **Atmega328P Microcontroller:** The Atmega328P serves as the brain of the system, controlling and coordinating the various components
- **HC-SR04 Ultrasonic Sensor:** The HC-SR04 ultrasonic sensor detects the presence of animals in proximity to the dispenser. The ultrasonic transmitter and receiver detect the presence of an object 2cm to 400cm away. Its ultrasonic transmitter produces 40kHz signal and the receiver collects the reflected signal if the object is within range.
- **SEN18 Water Level Sensor:** This sensor has ten exposed conducting tracks, of which five alternate strips are power tracks and the other five are sensing tracks. When the sensor is submerged in water (vertically), bridges are created between the five pairs of power and sensing tracks due to water’s conductivity. Thus, the sensor works like a variable resistor whose value at the sensing pin changes with the change in water level. The value is high when the water level is high and low when water level is low. The sensor can be powered with 3.3V or 5V on-board DC supply. The SEN18 water level sensor is crucial for monitoring the water level in the main reservoir. It enables the system to detect when the water level is low, triggering an alert for the owner to refill the reservoir.
- **5V Relay Module:** The 5V relay module acts as a switch to control the 12V submersible water pump. It allows the microcontroller to activate and deactivate the pump efficiently, controlling the flow of water to the drinking plate.
- **12V/2A Power Adapter:** The 12V/2A power adapter converts AC 230V to DC 12V and supplies the necessary power to the system, ensuring smooth and reliable operation of all components.
- **12V Submersible Water Pump:** The 12V submersible water pump is responsible for pumping water from the main reservoir to the drinking plate when activated by the microcontroller. Its submersible design ensures efficient water transfer while maintaining a tidy appearance.

### Schematic Design

<p align="center">
<img src="https://github.com/CharuNish/Automatic-water-dispenser-for-pets/assets/60501756/9293d717-908c-4771-9535-484bdff2f4a7" width ="60%" />  
</p>

### BoM
  
| Component | Quantity |
| --------- | ---------|
|5V Relay Module  | 1 |
|12V Submergible water pump  | 1 |
|ATMega328P Microcontroller  | 1 |
|HC-SR04 Ultrasonic Sensor | 1 |
|SEN18 Water level sensor |	1 |
|12V Power Adapter | 1 |
|0.1µF Capacitor | 1 |
|0.33µF Capacitor |	1 |
|22pF Capacitor | 2 |
|L7805 Voltage regulator | 1 |
|16MHz Crystal Oscillator  |	1 |
|10kΩ resistor |	1 |
|Buzzer 	| 3 |
|JST Connectors (2port) |	2|
|JST Connectors (3port) |	1|
|JST Connectors (4port) |	1|
|JST Connectors (5port) |	1|



### PCB Design
Printed circuit board was designed with Altium Designer 23.3.1. It was a two-layer design. Manufacturing was done at JLCPCB in China. 

<p align="center">
<img src="https://github.com/CharuNish/Automatic-water-dispenser-for-pets/assets/60501756/735a50e7-c16d-442d-8f81-b138699b2542" width ="50%" />  
</p>


#### Top Layer
<p align="center">
<img width ="55%" src="https://github.com/CharuNish/Automatic-water-dispenser-for-pets/assets/60501756/adacda95-b830-4462-9b18-5125600ea515" width ="3%"/>
</p>

#### Bottom Layer
<p align="center">
<img width="55%" src="https://github.com/CharuNish/Automatic-water-dispenser-for-pets/assets/60501756/85de5954-5251-4519-9c06-0798ab19cafc" width ="3%"/>
</p>

### Enclosure Design
Enclosure design was designed with SOLIDWORKS 2020.enclosure consists of plate, sink and container. Plastic is used in the enclosure. 3mmx 5mm screws were used to connect parts. 


<div style="display: flex;">
  <img src="https://github.com/CharuNish/Automatic-water-dispenser-for-pets/assets/60501756/eb929068-bec1-4e23-b454-d578441cc74e" width="400" alt="1">
  <img src="https://github.com/CharuNish/Automatic-water-dispenser-for-pets/assets/60501756/c8a4bf83-09dd-4f9c-aade-37f826542079" width="400" alt="2">
</div>
