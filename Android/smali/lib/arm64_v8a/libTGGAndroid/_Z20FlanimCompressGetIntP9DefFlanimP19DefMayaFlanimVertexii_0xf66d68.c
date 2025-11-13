// 函数: _Z20FlanimCompressGetIntP9DefFlanimP19DefMayaFlanimVertexii
// 地址: 0xf66d68
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x10 = zx.q(arg4 - 4)

if (x10.d u> 3)
    pthread_kill(pthread_self(), 6)
    DefMayaFlanimVertex* x0_5
    DefFlanimCompressedData* x1
    int32_t x2
    x0_5, x1, x2 = XNoReturn()
    return FlanimCompressAllVec2(x0_5, x1, x2) __tailcall

int64_t x9 = *arg2
int64_t x10_1 = sx.q(arg3)

switch (x10)
    case 0
        return zx.q(*(x9 + x10_1 * 0x38 + 0x20))
    case 1
        return zx.q(*(x9 + x10_1 * 0x38 + 0x24))
    case 2
        uint64_t result = zx.q(*(arg1 + 0x48))
        int64_t x9_2 = *(x9 + x10_1 * 0x38 + 0x28)
        int64_t x10_2 = *(arg1 + 0x40)
        
        if (result.d s>= 1)
            int64_t x11_1 = 0
            
            do
                if (*(x10_2 + (x11_1 << 3)) == x9_2)
                    return zx.q(x11_1.d)
                
                x11_1 += 1
            while (result != x11_1)
        
        *(x10_2 + (sx.q(result.d) << 3)) = x9_2
        *(arg1 + 0x48) += 1
        return result
    case 3
        return zx.q(*(x9 + x10_1 * 0x38 + 0x30))
