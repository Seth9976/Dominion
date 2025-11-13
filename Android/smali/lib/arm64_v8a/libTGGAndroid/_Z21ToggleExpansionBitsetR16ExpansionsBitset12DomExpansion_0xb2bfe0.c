// 函数: _Z21ToggleExpansionBitsetR16ExpansionsBitset12DomExpansion
// 地址: 0xb2bfe0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg2
int32_t var_c0[0x28]
int32_t x0_1 = DomExpansionsFromBitset(zx.q(*arg1), &var_c0)
uint64_t x1_1 = zx.q(x0_1)
uint64_t i_2

if (x0_1 s< 1)
    i_2 = sx.q(x1_1.d)
else
    i_2 = zx.q(x1_1.d)
    int32_t (* x9_1)[0x28] = &var_c0
    uint64_t i_3 = i_2
    
    while (true)
        if (*x9_1 == x20)
            x1_1 = sx.q(x1_1.d) - 1
            *x9_1 = var_c0[x1_1]
            goto label_b2c084
        
        uint64_t i_4 = i_3
        i_3 -= 1
        x9_1 = &(*x9_1)[1]
        
        if (i_4 == 1)
            int32_t (* x9_2)[0x28] = &var_c0
            uint64_t i_1 = i_2
            uint64_t i
            
            do
                if (*x9_2 == x20)
                    goto label_b2c084
                
                i = i_1
                i_1 -= 1
                x9_2 = &(*x9_2)[1]
            while (i != 1)
            break

x1_1 = zx.q(x1_1.d + 1)
var_c0[i_2] = x20
label_b2c084:
int64_t result = DomExpansionsBitsetFromExpansions(&var_c0, x1_1.d)
*arg1 = result.d
return result
