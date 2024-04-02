# Door Lock Indication AUTOSAR Project

### Developed an AUTOSAR application to monitor the car door's status. Upon detecting an open door, it triggers the activation of an internal LED illumination, this project comprises two SWCs.
### First application SWC includes one runnable responsible for algorithm execution.
### Second SWC manages ECU abstraction, which includes two runnables, one dedicated to door status monitoring and the other to control the LED light.
### Inter-SWC communication through RTE and all runnable are assigned to tasks within the RTOS.

### For this project, I utilized several tools to facilitate development, generation, debugging, simulation and testing:
1. 𝐄𝐜𝐥𝐢𝐩𝐬𝐞: Used for writing the ARXML (AUTOSAR XML) file.
2. 𝐀𝐑𝐔𝐍𝐈𝐓: Employed for graphing the ARXML files, aiding in visualizing the AUTOSAR architecture and components.
3. 𝐀𝐑𝐓𝐎𝐏: Utilized to generate the RTE (Runtime Environment) layer.
4. 𝐒𝐓𝐌𝐜𝐮𝐛𝐞 𝐈𝐃𝐄: for STM microcontroller development.
5. 𝐊𝐞𝐢𝐥 µ𝐕𝐢𝐬𝐢𝐨𝐧: Leveraged for debugging and simulating code execution.
