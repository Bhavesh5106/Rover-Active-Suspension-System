Rover Active Suspension System

Why I Built This & What It Does
   
My project is a 1-axis Active Suspension System. A potentiometer acts as a simulated gyroscope, sending tilt data to an Arduino, which then calculates the necessary correction using a mapping algorithm. The system then triggers two servo motors to move in opposite directions—pushing down on the low side and pulling up on the high side—to dynamically counter the slope. It’s a simple but effective demonstration of closed-loop control, showing how a rover can mechanically adapt to obstacles to protect its onboard sensors and maintain stability.At first glance, this might look like a simple knob and motor setup, but it’s actually a fundamental building block for autonomous rover navigation.This 1-axis model is just the foundation. The logic I've built here is designed to be scaled into a full 2-axis suspension system by adding a second sensor and two more actuators.

Components used and their roles
   
1. Arduino Uno R3: The microcontroller that handles the real-time math.
2. Potentiometer: Since I'm in a simulator, I used this to act as my Gyroscope or IMU. Turning the knob simulates the rover tilting left or right.
3. Two Micro Servo Motors: These represent the left and right suspension arms. They receive the correction signals from the Arduino to lift or lower the chassis.

Challenges Faced during the Project

Initially, when I turned the sensor, both servos moved in the same direction, which just tilted the whole rover further. I had to rewrite my math so the servos worked in Differential Actuation meaning if the left side pushes down, the right side must pull up to keep the chassis flat.
