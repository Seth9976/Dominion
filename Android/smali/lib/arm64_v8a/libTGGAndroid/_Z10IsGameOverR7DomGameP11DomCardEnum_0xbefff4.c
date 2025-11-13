// 函数: _Z10IsGameOverR7DomGameP11DomCardEnum
// 地址: 0xbefff4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_3

if (*(arg1 + 0x150c) - 3 u>= 2)
    x8_3 = *(arg1 + 0x19e4)
else
    if (zx.d(*(arg1 + 0x1a0c)) != 0)
        return 8
    
    x8_3 = *(arg1 + 0x19e4)
    
    if (x8_3 s> 0x3e8)
        return 8
    
    if (*(arg1 + 0x19ec) s> 0xbb8)
        return 8

if (x8_3 s> 0x63)
    return 7

if ((SupplyExists(arg1, 0x601) & 1) != 0 && (SupplyIsEmpty(arg1, 0x601) & 1) != 0)
    return 1

if ((SupplyIsEmpty(arg1, 0x103) & 1) != 0)
    return 2

int32_t x21_1 = *(arg1 + 0xd40)
int32_t x0_11 = NumEmptySupplyPiles(arg1)
int64_t result

if (x21_1 s< 5)
    if (x0_11 s< 3)
        return 0
    
    int32_t x8_5 = 0
    int64_t i_3 = -0x1a0
    result = 3
    int64_t i
    
    do
        void* x11_4 = arg1 + i_3
        int32_t x10_2 = *(x11_4 + 0x173c)
        
        if (x10_2 != 0 && *(x11_4 + 0x1744) == 0)
            bool cond:0_1 = x8_5 != 2
            *(arg2 + (sx.q(x8_5) << 2)) = x10_2
            x8_5 += 1
            
            if (not(cond:0_1))
                return 3
        
        i = i_3
        i_3 += 0x10
    while (i != -0x10)
else
    if (x0_11 s< 4)
        return 0
    
    int32_t x8_4 = 0
    int64_t i_2 = -0x1a0
    result = 4
    int64_t i_1
    
    do
        void* x11_1 = arg1 + i_2
        int32_t x10_1 = *(x11_1 + 0x173c)
        
        if (x10_1 != 0 && *(x11_1 + 0x1744) == 0)
            bool cond:1_1 = x8_4 != 3
            *(arg2 + (sx.q(x8_4) << 2)) = x10_1
            x8_4 += 1
            
            if (not(cond:1_1))
                return 4
        
        i_1 = i_2
        i_2 += 0x10
    while (i_1 != -0x10)

return result
