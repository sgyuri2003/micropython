MY_H743_BOARD - Micropython board files (auto-generated)

This directory was generated from your EasyEDA schematic JSON (best-effort).
Files:
- mpconfigboard.h       - Micropython board configuration (HSE=12MHz, SDRAM enabled, USB-CDC REPL)
- mpconfigboard.mk      - Build settings
- pins.csv              - Suggested pin mapping (typical FMC/SD/DCMI pins). VERIFY against your PCB!
- sdram_data.c          - SDRAM init structure (IS42S16160G typical timings). May need tuning.
- board_init.c          - Board startup skeleton (USB + camera init placeholders)

IMPORTANT - VERIFY THESE BEFORE BUILDING
---------------------------------------
This was generated automatically and uses a *typical* STM32H7 FMC pinout for IS42S16160G.
You MUST check pins.csv and verify that the MCU pin names match the actual nets on your PCB.
If the EasyEDA schematic contained explicit MCU pin-to-net mapping, those were used where detectable.
However, many camera/DCMI and SDMMC mappings are board-specific and were filled with suggested typical pins.

Suggested next steps:
1) Copy this folder into your micropython repo:
   cp -r /path/to/this/folder micropython/ports/stm32/boards/MY_H743_BOARD

2) Build:
   cd micropython/ports/stm32
   make BOARD=MY_H743_BOARD

3) Flash (example using st-flash):
   st-flash write build-MY_H743_BOARD/firmware.bin 0x08000000

4) Use USB CDC REPL:
   After reset, the board should enumerate as a virtual COM (e.g. /dev/ttyACM0).
   Use Thonny, PyCharm, or a terminal to connect at 115200.

Notes about SDRAM:
- The SDRAM base address is set to 0xC0000000 and size 8MB in mpconfigboard.h.
- Timings in sdram_data.c are placeholders for IS42S16160G. If SDRAM fails, tune timings or consult STM32Cube examples.

If you want, I can:
- attempt a deeper extraction of exact MCU pin-to-net mapping from the JSON (if you confirm the sheet names to target), or
- update pins.csv to reflect exact nets found in the schematic.

Generated on: 2025-11-03
