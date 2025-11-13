// 函数: _ZN15OpenGLInterface30GraphicsInterfaceDisposeForAppEv
// 地址: 0xf8a5c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0

if (*(entry_x0 + 0x4248) == 0)
    return 

void* x9_1 = nullptr
void* x0

while (true)
    if (x9_1 == 0)
        x0 = *(entry_x0 + 0x4248)
        x9_1 = x0
    else
        x0 = *(entry_x0 + 0x4248)
        x9_1 += 0x158
    
    int64_t x11_5 = x0 + zx.q(*(entry_x0 + 0x4250)) * 0x158
    
    if (x9_1 u>= x11_5)
        break
    
    while (true)
        int32_t x12_2 = *(x9_1 + 0x150)
        
        if (x12_2 u>> 0x10 != 0)
            int32_t x11_1 = *(entry_x0 + 0x4258)
            *(entry_x0 + 0x4258) = x12_2 & 0xffff
            *(x9_1 + 0x150) = x11_1
            *(entry_x0 + 0x425c) -= 1
            break
        
        x9_1 += 0x158
        
        if (x9_1 u>= x11_5)
            goto label_f8a654

label_f8a654:
*(entry_x0 + 0x4250) = 0
*(entry_x0 + 0x4258) = 0
XFree(x0)
*(entry_x0 + 0x4268) = 0
__builtin_memset(entry_x0 + 0x4248, 0, 0x18)
