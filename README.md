# DoorLock"I have developed a project named 'Door Lock Indication' within the AUTOSAR framework. This application, deployed at the application layer, is designed to monitor the car door's status. Upon detecting an open door, it triggers the activation of an internal LED illumination. The project comprises two Software Components (SWCs), each serving distinct functions. The first SWC encapsulates the Runnable responsible for algorithm execution, while the second SWC manages ECU abstraction. Inside the second SWC, there are two Runnables: one dedicated to door status monitoring and the other to control the LED light. Inter-SWC communication is facilitated through the Runtime Environment (RTE), and all Runnables are assigned specific tasks within the Real-Time Operating System (RTOS)."

For this project, I utilized several tools to facilitate development, generation,debugging, simulation and testing:

1. 𝐄𝐜𝐥𝐢𝐩𝐬𝐞: Used for writing the ARXML (AUTOSAR XML) file.

2. 𝐀𝐑𝐔𝐍𝐈𝐓: Employed for graphing the ARXML files, aiding in visualizing the AUTOSAR architecture and components.

3. 𝐀𝐑𝐓𝐎𝐏: Utilized to generate the RTE (Runtime Environment) layer.

4. 𝐒𝐓𝐌𝐜𝐮𝐛𝐞 𝐈𝐃𝐄: for STM microcontroller development.

5. 𝐊𝐞𝐢𝐥 µ𝐕𝐢𝐬𝐢𝐨𝐧: Leveraged for debugging and simulating the project.Indication_AUTOSAR_Project
Door Lock Indication AUTOSAR Project
