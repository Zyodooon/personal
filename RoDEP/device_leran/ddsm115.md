# DDSM11
===

## features
- This is servo motor, so this has high precision.
- This has little noise.
- This can fast response without delay.
- Integrate motor and driver, so this structure is simple.
- This has electric brake.
- It operate with no mechanical friction and offers exceptionally high electrical efficiency.
- The encoder of this servo motor provides 4096 pulses oer revolution, allowing precise position detection.
- The system offers a relative accuracy of 1024, enabling fine resolution in measurements.

## How to use
- Connect the DATA+ of the motor to the A+ of the converter.
- Connect the DATA- of the motor to the B- of the converter.
- Connect the GND of the motor to the GND of the converter.
- Connect the VCC of the motor to the 18V DC power supply.

## Communication Protocol
- This baud rate is 115200bps. 
- Data bit is 8bit, stop bit is 2bit, parity is none.
- Data length which is number of bytes to send and receive is 10 bytes.
- When this motor receive one command, it send the response one answer.
- In **Current Loop Mode**, a signed 16-bit integer ranging from -32767 to 32767 corresponds to a current range of -8A to +8A.
- In **Speed Loop Mode**, we can control the speed from -330rpm to +330rpm using a singed 16-bit.
- In **Position Loop Mode**, an unsigned 16-bit integer from 0 to 32767 corresponds to an angle range of 0° to 360°.
- We must write CRC value into the DATA[8] of the command frame. The CRC is calculated using the CRC-8 algorithm with the polynomial 
`x^8 + x^5 + x^4 + 1 (0x31)` and an initial value of 0xFF.

## Communication
1. Switch to velocity loop
- This command has no feedback.
```bash
01 A0 00 00 00 00 00 00 00 02
```

DATA[0]:ID
DATA[1]:Command(A0: Switch to velocity loop)
DATA[2]~DATA[7]:Reserved(00)
DATA[8]:Specified velocity mode

2.  Query feedback the current mode
```bash
01 74 00 00 00 00 00 00 00 04
```





## Notes
- Rated is　定格
- Detection is 検出
- **Baud rate** is speed of changing the signal. Unit of this is bps(bit/second).
- **Rate** is frequency of communication and control. Unit of this is Hz(time/second).
- Parity is a method for error detection in data transmission.
- 電源、モータードライバ、モーターの順で電流が流れる。この時に、各機器の定格電流を超えないように注意する必要がある。それぞれのしきい値が、3A,8A,8A?ここについては聞く必要がある
