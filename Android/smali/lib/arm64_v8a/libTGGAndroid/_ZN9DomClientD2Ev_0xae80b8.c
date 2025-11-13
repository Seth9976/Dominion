// 函数: _ZN9DomClientD2Ev
// 地址: 0xae80b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0

if ((XPooledShutdown() & 1) == 0)
    void* x0_1 = *(entry_x0 + 0x20638)
    
    if (x0_1 != 0)
        int32_t x8_1 = *(entry_x0 + 0x20644)
        *(entry_x0 + 0x20640) = 0
        XPooledFree(x0_1, x8_1 * 0x38)
        *(entry_x0 + 0x20644) = 0

if ((XPooledShutdown() & 1) == 0)
    void* x0_3 = *(entry_x0 + 0x20620)
    
    if (x0_3 != 0)
        int32_t x8_2 = *(entry_x0 + 0x2062c)
        *(entry_x0 + 0x20628) = 0
        XPooledFree(x0_3, x8_2 * 0x48)
        *(entry_x0 + 0x2062c) = 0

void* result = XPooledShutdown()

if ((result.d & 1) == 0)
    result = *(entry_x0 + 0x20608)
    
    if (result != 0)
        int32_t x8_4 = *(entry_x0 + 0x20614)
        *(entry_x0 + 0x20610) = 0
        return XPooledFree(result, x8_4 << 3) __tailcall

return result
