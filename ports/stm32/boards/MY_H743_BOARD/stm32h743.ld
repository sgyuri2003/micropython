MEMORY
{
    FLASH (rx) : ORIGIN = 0x08000000, LENGTH = 2048K
    RAM (xrw)  : ORIGIN = 0x24000000, LENGTH = 512K
    DTCM (xrw) : ORIGIN = 0x20000000, LENGTH = 128K
}

_estack = ORIGIN(RAM) + LENGTH(RAM);
_heap_start = _ebss;
_heap_end = ORIGIN(RAM) + LENGTH(RAM);
