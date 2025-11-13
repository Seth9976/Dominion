// 函数: _Z15BoardPileSourceRK7DomGame11DomCardEnumb
// 地址: 0xbc3560
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg2.d
int32_t x0 = PileSource(arg1, arg2)
int64_t i_1 = -0x410
int32_t x8_2

if ((arg3.d & 1) != 0)
    int64_t i
    
    do
        void* x8_1 = arg1 + i_1
        
        if ((zx.d(*(x8_1 + 0x19b8)) & 2) == 0)
            x8_2 = *(x8_1 + 0x19ac)
            
            if (x8_2 == x19)
                return zx.q(x19)
            
            if (x8_2 == x0 || *(arg1 + i_1 + 0x19b0) == x19)
                return zx.q(x8_2)
        
        i = i_1
        i_1 += 0x10
    while (i != -0x10)
    return 0

while (true)
    void* x10_1 = arg1 + i_1
    x8_2 = *(x10_1 + 0x19ac)
    
    if (x8_2 == x19)
        return zx.q(x19)
    
    if (x8_2 == x0)
        return zx.q(x8_2)
    
    if (*(x10_1 + 0x19b0) == x19)
        return zx.q(x8_2)
    
    int64_t i_2 = i_1
    i_1 += 0x10
    
    if (i_2 == -0x10)
        return 0
