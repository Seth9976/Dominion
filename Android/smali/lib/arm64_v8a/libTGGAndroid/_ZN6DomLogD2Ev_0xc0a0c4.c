// 函数: _ZN6DomLogD2Ev
// 地址: 0xc0a0c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0

if ((XPooledShutdown() & 1) == 0)
    void* x0_1 = *(entry_x0 + 0x28)
    
    if (x0_1 != 0)
        int32_t x8_1 = *(entry_x0 + 0x34)
        *(entry_x0 + 0x30) = 0
        XPooledFree(x0_1, x8_1 << 3)
        *(entry_x0 + 0x34) = 0

if ((XPooledShutdown() & 1) == 0)
    void* x0_3 = *(entry_x0 + 0x18)
    
    if (x0_3 != 0)
        int32_t x8_2 = *(entry_x0 + 0x24)
        *(entry_x0 + 0x20) = 0
        XPooledFree(x0_3, x8_2 << 4)
        *(entry_x0 + 0x24) = 0

void* result = XPooledShutdown()

if ((result.d & 1) == 0)
    result = *(entry_x0 + 8)
    
    if (result != 0)
        int32_t x8_3 = *(entry_x0 + 0x14)
        *(entry_x0 + 0x10) = 0
        result = XPooledFree(result, x8_3 << 6)
        *(entry_x0 + 0x14) = 0

return result
