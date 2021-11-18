Gameboy Cart Flasher Software
====================================

Changes
---------------------------------
- Re-introduction of Linux compatibility
- Support for 4MB roms on MBC30 based cartridges (Requires https://github.com/HDR/GBFlasher-Firmware)
- Support for 64K saves on MBC30 based cartridges
- Cleaner looking gui
- Higher baud (Standard is 375000baud, -lowspeed is 185000baud and -highspeed is 1000000baud)
- Darkmode (-darkmode)
- New icon
- No translations
- Upgraded to QT5
- Upgraded to 64Bit
- Internal code changes
- Auto selection of USB devices, no need to manually select a device
- Rom Patching in software (Not available on Linux)
- Firmware updates trough software (Not available on Linux)
- Progress is shown in the taskbar (Not available on Linux)
- High dpi monitor support
- Checks for firmware updates automatically
- See src/gbcflsh.cpp for more commandline parameters
