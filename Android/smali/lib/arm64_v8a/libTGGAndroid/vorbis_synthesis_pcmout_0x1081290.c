// 函数: vorbis_synthesis_pcmout
// 地址: 0x1081290
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = sx.q(*(arg1 + 0x28))

if ((x9.d & 0x80000000) != 0)
    return 0

int32_t x10 = *(arg1 + 0x24)
int32_t x8 = 0

if (x10 s> x9.d)
    if (arg2 != 0)
        int64_t x11_1 = sx.q(*(*(arg1 + 8) + 4))
        void* x8_2
        
        if (x11_1.d s<= 0)
            x8_2 = arg1 + 0x18
        else
            int64_t x12_1 = 0
            x8_2 = arg1 + 0x18
            
            do
                x12_1 += 1
                (*(arg1 + 0x18))[x12_1] = (*(arg1 + 0x10))[x12_1] + (x9 << 2)
            while (x12_1 s< x11_1)
        
        *arg2 = *x8_2
    
    x8 = x10 - x9.d

return zx.q(x8)
