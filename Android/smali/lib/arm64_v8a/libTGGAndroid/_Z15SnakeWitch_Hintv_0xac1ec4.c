// 函数: _Z15SnakeWitch_Hintv
// 地址: 0xac1ec4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0_1 = CardWhere(ThisCard(false, nullptr))
int32_t x19 = 1

if ((x0_1 - 0x45c u> 0xf || (1 << (x0_1 - 0x45c) & 0xe001) == 0) && x0_1 != 0x3ea && x0_1 != 0x3ec)
    x19 = 0

int32_t var_1920[0x240]
void var_ca0
int32_t i_2 = CountCardTypesWhere(0x3ea, &var_ca0, &var_1920)

if (i_2 s>= 1)
    uint64_t i_1 = zx.q(i_2)
    
    if ((x19 & 1) == 0)
        int32_t (* x9_2)[0x240] = &var_1920
        
        while (true)
            if (*x9_2 s> 1)
                return 0
            
            uint64_t i_3 = i_1
            i_1 -= 1
            x9_2 = &(*x9_2)[1]
            
            if (i_3 == 1)
                return 1
    else
        void* x9_1 = &var_ca0
        int32_t (* x10_1)[0x240] = &var_1920
        uint64_t i
        
        do
            int32_t x12_1 = *x10_1
            
            if (*x9_1 != 0x1201)
                if (x12_1 s> 1)
                    return 0
            else if (x12_1 s> 2)
                return 0
            
            x9_1 += 4
            i = i_1
            i_1 -= 1
            x10_1 = &(*x10_1)[1]
        while (i != 1)

return 1
