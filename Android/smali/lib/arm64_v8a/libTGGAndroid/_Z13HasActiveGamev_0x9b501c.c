// 函数: _Z13HasActiveGamev
// 地址: 0x9b501c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = GetClient()
int32_t x8 = *(x0 + 0x5068)

if (x8 != 0)
    if (x8 != 2)
        return 1
    
    int32_t x8_1 = *(x0 + 0x506c)
    
    if (x8_1 != 0)
        uint64_t x9_1 = zx.q(x8_1.w)
        
        if (x9_1.d u< *(x0 + 0x5088) && *(*(x0 + 0x5080) + x9_1 * 0x1338 + 0x1330) == x8_1)
            return 1

return 0
