// 函数: _ZN13StructureAnimD2Ev
// 地址: 0xc7cd78
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0

if ((XPooledShutdown() & 1) == 0)
    void* x0_1 = *(entry_x0 + 0xb0)
    
    if (x0_1 != 0)
        int32_t x8_1 = *(entry_x0 + 0xbc)
        *(entry_x0 + 0xb8) = 0
        XPooledFree(x0_1, x8_1 << 6)

if ((XPooledShutdown() & 1) == 0)
    void* x0_3 = *(entry_x0 + 0xa0)
    
    if (x0_3 != 0)
        int32_t x8_2 = *(entry_x0 + 0xac)
        *(entry_x0 + 0xa8) = 0
        XPooledFree(x0_3, x8_2 * 0x2c)

if ((XPooledShutdown() & 1) == 0)
    void* x0_5 = *(entry_x0 + 0x90)
    
    if (x0_5 != 0)
        int32_t x8_3 = *(entry_x0 + 0x9c)
        *(entry_x0 + 0x98) = 0
        XPooledFree(x0_5, x8_3 * 0x2c)

if ((XPooledShutdown() & 1) == 0)
    void* x0_7 = *(entry_x0 + 0x80)
    
    if (x0_7 != 0)
        int32_t x8_4 = *(entry_x0 + 0x8c)
        *(entry_x0 + 0x88) = 0
        XPooledFree(x0_7, x8_4 * 0x2c)

if ((XPooledShutdown() & 1) == 0)
    void* x0_9 = *(entry_x0 + 0x70)
    
    if (x0_9 != 0)
        int32_t x8_5 = *(entry_x0 + 0x7c)
        *(entry_x0 + 0x78) = 0
        XPooledFree(x0_9, x8_5 * 0x2c)

if ((XPooledShutdown() & 1) == 0)
    void* x0_11 = *(entry_x0 + 0x60)
    
    if (x0_11 != 0)
        int32_t x8_6 = *(entry_x0 + 0x6c)
        *(entry_x0 + 0x68) = 0
        XPooledFree(x0_11, x8_6 * 0x2c)

if ((XPooledShutdown() & 1) == 0)
    void* x0_13 = *(entry_x0 + 0x50)
    
    if (x0_13 != 0)
        int32_t x8_7 = *(entry_x0 + 0x5c)
        *(entry_x0 + 0x58) = 0
        XPooledFree(x0_13, x8_7 * 0x2c)

if ((XPooledShutdown() & 1) == 0)
    void* x0_15 = *(entry_x0 + 0x40)
    
    if (x0_15 != 0)
        int32_t x8_8 = *(entry_x0 + 0x4c)
        *(entry_x0 + 0x48) = 0
        XPooledFree(x0_15, x8_8 * 0x2c)

if ((XPooledShutdown() & 1) == 0)
    void* x0_17 = *(entry_x0 + 0x30)
    
    if (x0_17 != 0)
        int32_t x8_9 = *(entry_x0 + 0x3c)
        *(entry_x0 + 0x38) = 0
        XPooledFree(x0_17, x8_9 * 0x2c)

void* result = XPooledShutdown()

if ((result.d & 1) == 0)
    result = *(entry_x0 + 0x20)
    
    if (result != 0)
        int32_t x8_10 = *(entry_x0 + 0x2c)
        *(entry_x0 + 0x28) = 0
        result = XPooledFree(result, x8_10 << 6)

void* i = *(entry_x0 + 8)

while (i != 0)
    void* i_1 = i
    i = *(i + 8)
    result = XPooledFree(i_1, 0x18)

__builtin_memset(entry_x0 + 8, 0, 0x14)
return result
