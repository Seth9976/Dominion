// 函数: _Z16stbtt_FindSVGDocPK14stbtt_fontinfoi
// 地址: 0x1006dfc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t i_3 = zx.q(*(arg1 + 0x34))
int64_t x8 = *(arg1 + 8)

if ((i_3.d & 0x80000000) != 0)
    uint64_t x10_1 = zx.q(*(arg1 + 0x10))
    i_3 = _byteswap(zx.q(*(x8 + x10_1 + 4)) << 0x30)
    
    if (i_3.d != 0)
        int32_t x10_2 = x10_1.d + 0xc
        uint64_t i
        
        do
            char* x11_1 = x8 + zx.q(x10_2)
            
            if (zx.d(*x11_1) == 0x53 && zx.d(x11_1[1]) == 0x56 && zx.d(x11_1[2]) == 0x47
                    && zx.d(x11_1[3]) == 0x20)
                i_3 = _byteswap(zx.q(*(x11_1 + 8)) << 0x20)
                
                if (i_3.d != 0)
                    i_3 = zx.q(_byteswap(*(x8 + i_3 + 2)) + i_3.d)
                
                break
            
            i = i_3
            i_3 -= 1
            x10_2 += 0x10
        while (i != 1)
    
    *(arg1 + 0x34) = i_3.d

int16_t* x0 = x8 + sx.q(i_3.d)
void* result = &x0[1]
uint64_t i_2 = _byteswap(zx.q(*x0) << 0x30)

if (i_2.d != 0)
    uint64_t i_1
    
    do
        if (_byteswap(zx.d(*result) << 0x10) s<= arg2
                && _byteswap(zx.d(*(result + 2)) << 0x10) s>= arg2)
            return result
        
        i_1 = i_2
        i_2 -= 1
        result += 0xc
    while (i_1 != 1)

return nullptr
