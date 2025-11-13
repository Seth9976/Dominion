// 函数: sub_9f5644
// 地址: 0x9f5644
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg2 + 4)
void* x22 = arg2

if (x8 == 5 || x8 == 9)
    *(x22 + 0x74) = **(arg3 + 0x10)
    return 

int32_t i_3 = *(x22 + 0x74)
int32_t x8_3 = *(x22 + 0x48)
DomGame* x21_1 = arg1
int32_t var_1960[0xd4]
uint64_t i_4

if (i_3 s< 1)
    i_4 = 0
    
    if (x8_3 == 2)
    label_9f5734:
        
        if (*(arg3 + 0x18) s< *(x22 + 0x64))
            *(x22 + 0x48) = 0x64
else
    if (x8_3 == 2)
        i_4 = 0
        void* x8_4 = x22 + 0x78
        uint64_t i_2
        
        if (i_3 s> 1)
            i_2 = zx.q(i_3)
        else
            i_2 = 1
        
        uint64_t i
        
        do
            uint64_t x12_1 = zx.q(*x8_4)
            
            if ((*(x21_1 + x12_1 * 0x68 + 0x1a74) & 0xfffffffe) == 0x3ea)
                var_1960[sx.q(i_4.d)] = x12_1.d
                i_4 = zx.q(i_4.d + 1)
            
            i = i_2
            i_2 -= 1
            x8_4 += 4
        while (i != 1)
        goto label_9f5734
    
    if (i_3 s> 1)
        i_4 = zx.q(i_3)
    else
        i_4 = 1
    
    memcpy(&var_1960, x22 + 0x78, i_4 << 2)

int32_t x8_6 = *(arg3 + 0x18)
*(x22 + 0x74) = x8_6

if (x8_6 s< 1)
    return 

int64_t i_1 = 0
void* x26_1 = x22 + 0x78
void* var_25e8_1 = x22

do
    if (*(x22 + 0xd18) != 0)
        *(x22 + (i_1 << 2) + 0xd08) = *(*(arg3 + 0x10) + i_1 * 0xc + 8)
    
    int32_t x9_8 = *(x22 + 4)
    
    if (x9_8 - 7 u< 2 || x9_8 == 4)
        *(x22 + (i_1 << 2) + 0x78) = (*(arg3 + 0x10))[i_1 * 3]
    else if (x9_8 != 6)
        int32_t x9_17
        
        if (i_4.d s< 1)
            x9_17 = -1
        else
            int64_t j = 0
            int32_t x11_6 = 0
            x9_17 = -1
            
            do
                uint64_t x14_1 = zx.q(var_1960[j])
                int32_t temp1_1 = (x14_1.d s> x11_6 ? 1 : 0)
                    & (*(x21_1 + x14_1 * 0x68 + 0x1a70) == (*(arg3 + 0x10))[i_1 * 3] ? 1 : 0)
                
                if (temp1_1 != 0)
                    x9_17 = j.d
                
                j += 1
                
                if (temp1_1 != 0)
                    x11_6 = x14_1.d
            while (zx.q(i_4.d) != j)
        
        int64_t x9_20 = zx.q(x9_17) << 0x20 s>> 0x1e
        *(x22 + (i_1 << 2) + 0x78) = *(&var_1960 + x9_20)
        int32_t x11_8 = var_1960[sx.q(i_4.d) - 1]
        i_4 = zx.q(i_4.d - 1)
        *(&var_1960 + x9_20) = x11_8
    else
        uint64_t x24_1
        
        if (i_4.d s< 1)
            x24_1 = 0
        else
            x24_1 = 0
            
            while (true)
                if ((*(arg3 + 0x10))[i_1 * 3]
                        == AbilitySource(x21_1, zx.q(*(x26_1 + (x24_1 << 2)))).d)
                    uint64_t x23_1 = zx.q(*(x26_1 + (x24_1 << 2)))
                    
                    if (*(*(arg3 + 0x10) + i_1 * 0xc + 4)
                            == *(x21_1 + (x23_1 u>> 6 & 0xfff) * 0x68 + 0x1a70))
                        CardID var_25e0
                        arg1 =
                            AbilityGetAssociatedCards(x21_1, zx.q(*(x22 + 0x54)), x23_1, &var_25e0)
                        int32_t x22_1 = arg1.d
                        
                        if (arg1.d s<= 0 && AbilitySource(x21_1, x23_1).d == 0x1121)
                            x22_1 = CardsAtCard(x21_1, zx.q(AbilitySourceCard(x21_1, x23_1)), 
                                &var_25e0).d
                        
                        if (x22_1 != *(arg3 + 0x28))
                            x22 = var_25e8_1
                        else
                            int32_t var_ce0
                            void* x1_6 = &(&var_ce0)[sx.q(x22_1)]
                            
                            if (x22_1 s<= 0)
                                sub_a01d8c(&var_ce0, x1_6)
                                x22 = var_25e8_1
                                break
                            
                            int32_t* x23_2 = *(arg3 + 0x20)
                            uint64_t x19_2 = zx.q(x22_1)
                            int64_t j_5
                            
                            if (x22_1 != 1)
                                void var_cdc
                                void* x10_5 = &var_cdc
                                void var_25dc
                                void* x11_1 = &var_25dc
                                j_5 = x19_2 & 0xfffffffe
                                int64_t j_4 = j_5
                                int64_t j_1
                                
                                do
                                    uint64_t x12_2 = zx.q(*(x11_1 - 4))
                                    uint64_t x13_5 = zx.q(*x11_1)
                                    x11_1 += 8
                                    j_1 = j_4
                                    j_4 -= 2
                                    int32_t x13_7 = *(x21_1 + 0x1a68 + x13_5 * 0x68 + 8)
                                    *(x10_5 - 4) = *(x21_1 + 0x1a68 + x12_2 * 0x68 + 8)
                                    *x10_5 = x13_7
                                    x10_5 += 8
                                while (j_1 != 2)
                                
                                if (j_5 != x19_2)
                                    goto label_9f5950
                            else
                                j_5 = 0
                            label_9f5950:
                                int64_t j_3 = x19_2 - j_5
                                void* x9_13 = &var_25e0 + (j_5 << 2)
                                void* x10_7 = &(&var_ce0)[j_5]
                                int64_t j_2
                                
                                do
                                    uint64_t x11_2 = zx.q(*x9_13)
                                    x9_13 += 4
                                    j_2 = j_3
                                    j_3 -= 1
                                    *x10_7 = *(x21_1 + x11_2 * 0x68 + 0x1a70)
                                    x10_7 += 4
                                while (j_2 != 1)
                            sub_a01d8c(&var_ce0, x1_6)
                            
                            if (x22_1 s<= 0)
                                x22 = var_25e8_1
                                break
                            
                            if (var_ce0 != *x23_2)
                                x22 = var_25e8_1
                            else
                                int64_t x10_8 = 1
                                int64_t x9_15
                                
                                do
                                    x9_15 = x10_8
                                    
                                    if (x19_2 == x10_8)
                                        break
                                    
                                    x10_8 = x9_15 + 1
                                while ((&var_ce0)[x9_15] == x23_2[x9_15])
                                
                                x22 = var_25e8_1
                                
                                if (x9_15 s>= sx.q(x22_1))
                                    break
                
                x24_1 += 1
                
                if (x24_1 == zx.q(i_4.d))
                    x24_1 = zx.q(i_4.d)
                    break
        
        *(x26_1 + (i_1 << 2)) = var_1960[zx.q(x24_1.d)]
        int32_t x10_12 = var_1960[sx.q(i_4.d) - 1]
        i_4 = zx.q(i_4.d - 1)
        var_1960[zx.q(x24_1.d)] = x10_12
        x8_6 = *(x22 + 0x74)
    
    i_1 += 1
while (i_1 s< sx.q(x8_6))
