// 函数: _Z19DoLandscapeTrackingR7DomGame9PlayerWho11DomCardEnumi
// 地址: 0xbe447c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x150c) - 3 u< 3)
    return 

int32_t x22_1 = arg3
DomGame& x20_1 = arg1
arg1 = PileSource(arg1, zx.q(arg3))
int64_t x9_1 = -0x410

while (true)
    void* x10_1 = x20_1 + x9_1
    int32_t x8_2 = *(x10_1 + 0x19ac)
    
    if (x8_2 == x22_1)
        x8_2 = x22_1
    else if (x8_2 != arg1.d && *(x10_1 + 0x19b0) != x22_1)
        int64_t temp0_1 = x9_1
        x9_1 += 0x10
        
        if (temp0_1 == -0x10)
            break
        
        continue
    
    if (x8_2 == 0)
        break
    
    int64_t x9_2 = -0x1b00000000
    int64_t x10_3 = -0x410
    
    while (true)
        void* x12_1 = x20_1 + x10_3
        
        if (*(x12_1 + 0x19ac) == x8_2 || *(x12_1 + 0x19b0) == x8_2)
            if (x10_3.d == 0xfffffb80)
                break
            
            void* x8_4 = x20_1 + (sx.q(arg2) << 4) + (x9_2 s>> 0x1e)
            *(x8_4 + 0x60cbc) += arg4
            return 
        
        int64_t temp1_1 = x10_3
        x10_3 += 0x10
        x9_2 += 0x100000000
        
        if (temp1_1 == -0x10)
            break
        
        continue
    
    break
