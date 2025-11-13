// 函数: _Z19VoipBounceClientAddii5NetIDS_P14NetworkMessage
// 地址: 0x105f4e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x11 = nullptr
void* x8 = *gVoipServer
uint64_t x9 = zx.q(*(gVoipServer + 8))
int64_t x12 = x8 + x9 * 0x34

while (true)
    if (x11 == 0)
        x11 = x8
    else
        x11 += 0x34
    
    if (x11 u>= x12)
    label_105f554:
        uint64_t x11_2 = zx.q(*(gVoipServer + 0x10))
        int32_t x12_2
        
        if (x11_2.d != x9.d)
            x12_2 = *(x8 + x11_2 * 0x34 + 0x30)
            x9 = x11_2
        else
            x12_2 = x9.d + 1
            *(gVoipServer + 8) = x12_2
        
        *(gVoipServer + 0x10) = x12_2
        int128_t v0
        v0.q = 0
        v0:8.q = 0
        int32_t* x12_3 = x8 + x9 * 0x34
        __builtin_memset(x12_3, 0, 0x30)
        x12_3[0xc] = x11_2.d | *(gVoipServer + 0x18) << 0x10
        int32_t x11_4 = *(gVoipServer + 0x18)
        int32_t x11_5
        
        if (x11_4 == 0xffff)
            x11_5 = 1
        else
            x11_5 = x11_4 + 1
        
        *(gVoipServer + 0x14) += 1
        *(gVoipServer + 0x18) = x11_5
        x12_3[1] = arg3
        x12_3[2] = arg4
        *x12_3 = arg1
        x12_3[0xb] = arg2
        
        if (arg5 == 0)
            __builtin_memset(x8 + x9 * 0x34 + 0xc, 0, 0x20)
            break
        
        int128_t v1 = *(arg5 + 0xed48)
        void* x8_3 = x8 + x9 * 0x34
        *(x8_3 + 0x1c) = *(arg5 + 0xed58)
        *(x8_3 + 0xc) = v1
        return 
    
    while (zx.d(*(x11 + 0x32)) == 0)
        x11 += 0x34
        
        if (x11 u>= x12)
            goto label_105f554
    
    if (*x11 == arg1)
        if (*(x11 + 0x2c) != arg2)
            return XTraceAndLog("VoipBounceClientAdd didn't match") __tailcall
        
        break
