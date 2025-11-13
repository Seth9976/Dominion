// 函数: _ZN15OpenGLInterface23RenderStateGetRegistersER24ShaderDynamicStateHolderR17MaterialRegisters
// 地址: 0xf8ebf8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* entry_x2
__builtin_memset(entry_x2, 0xff, 0x2c)
int32_t* x11 = *(arg2 + 0x358)

if (x11[0x196] s< 1)
    return 

int64_t i = 0
int64_t x9_1 = 0x664

do
    uint64_t x12_4 = zx.q(*(x11 + x9_1 - 4) - 0x53)
    
    if (x12_4.d u<= 0x29)
        switch (x12_4)
            case 0, 1, 2, 3, 5, 6
                entry_x2[sx.q(x12_4.d) + 3] = *(x11 + x9_1)
            case 4, 0x29
                entry_x2[7] = *(x11 + x9_1)
            case 0xa
                *entry_x2 = *(x11 + x9_1)
            case 0xb
                entry_x2[1] = *(x11 + x9_1)
            case 0xc
                entry_x2[2] = *(x11 + x9_1)
            case 0x15
                entry_x2[8] = *(x11 + x9_1)
            case 0x27
                entry_x2[9] = *(x11 + x9_1 - 0x650)
            case 0x28
                entry_x2[0xa] = *(x11 + x9_1 - 0x650)
    
    x11 = *(arg2 + 0x358)
    i += 1
    x9_1 += 0x20
while (i s< sx.q(x11[0x196]))
