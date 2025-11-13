// 函数: _Z20CalcActiveExpansionsP12DomExpansion
// 地址: 0xbacd94
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19

if (*(GetClient() + 0x5068) == 0)
    x19 = 0
else
    x19 = 0
    
    for (int64_t i = 0x13; i != 0x26; i += 1)
        uint64_t x0_1 = zx.q(*(gDomClient + (i << 4) + 0x21c54))
        
        if (x0_1.d != 0)
            int32_t var_34
            int32_t x0_2 = DomCardExp(x0_1, &var_34)
            uint64_t j_2
            
            if (x19 s<= 0)
                j_2 = sx.q(x19)
            else
                j_2 = zx.q(x19)
                DomExpansion* x9_1 = arg1
                uint64_t j_1 = j_2
                uint64_t j
                
                do
                    if (*x9_1 == x0_2)
                        goto label_bacde0
                    
                    j = j_1
                    j_1 -= 1
                    x9_1 += 4
                while (j != 1)
            
            x19 += 1
            *(arg1 + (j_2 << 2)) = x0_2
        
    label_bacde0:
    
    if (*(gDomClient + 0x82050) == 1)
        uint64_t x8_3
        
        if (x19 s<= 0)
            x8_3 = sx.q(x19)
        label_bace88:
            x19 += 1
            *(arg1 + (x8_3 << 2)) = 9
        else
            x8_3 = zx.q(x19)
            DomExpansion* x9_2 = arg1
            uint64_t x10_1 = x8_3
            
            while (*x9_2 != 9)
                uint64_t temp1_1 = x10_1
                x10_1 -= 1
                x9_2 += 4
                
                if (temp1_1 == 1)
                    goto label_bace88
    
    if (*(gDomClient + 0x8204c) == 1)
        uint64_t i_3
        
        if (x19 s<= 0)
            i_3 = sx.q(x19)
        else
            i_3 = zx.q(x19)
            DomExpansion* x9_3 = arg1
            uint64_t i_2 = i_3
            uint64_t i_1
            
            do
                if (*x9_3 == 6)
                    return zx.q(x19)
                
                i_1 = i_2
                i_2 -= 1
                x9_3 += 4
            while (i_1 != 1)
        
        x19 += 1
        *(arg1 + (i_3 << 2)) = 6

return zx.q(x19)
