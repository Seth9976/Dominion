// 函数: _Z16ToggleFullscreenv
// 地址: 0x9ab394
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = GetLocalSettings()
uint32_t x9 = zx.d(*(x0 + 0x18))
uint32_t x8 = x9 ^ 1
*(x0 + 0x18) = x8.b

if (x9 == 1)
    int32_t x9_1 = *(x0 + 0x1c)
    uint64_t x8_1 = *gAppInterface
    int32_t x9_2
    
    x9_2 = x9_1 s> 0x300 ? x9_1 : 0x300
    
    *(x8_1 + 0x2c) = x9_2
    int32_t x11_1 = *(x0 + 0x14)
    int64_t x11_2
    
    if (*ASPECTS == x11_1)
        x11_2 = 0
    else if (*(ASPECTS + 0xc) == x11_1)
        x11_2 = 1
    else if (*(ASPECTS + 0x18) != x11_1)
        if (*(ASPECTS + 0x24) != x11_1)
            pthread_kill(pthread_self(), 6)
            XNoReturn()
            return ToggleWidescreen() __tailcall
        
        x11_2 = 3
    else
        x11_2 = 2
    
    void* x10_1 = ASPECTS + x11_2 * 0xc
    *(x8_1 + 0x28) = *(x10_1 + 4) * x9_2 s/ *(x10_1 + 8)
    x8 = zx.d(*(x0 + 0x18))

SetBorderlessFullscreen((x8 != 0 ? 1 : 0).b)
SaveLocalSettings()
void* result = GetClient()
*(result + 0x75cc) = 1
return result
