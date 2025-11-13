// 函数: _Z14GetNumSelected12DomExpansion
// 地址: 0xb3cb84
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
GetKingdomConfig(GetActiveGameSetup())
int32_t i_2
int32_t i_1 = i_2
int32_t x20
int32_t var_19c4
int32_t i_3
int32_t i

if (i_1 == 0)
    x20 = 0
    i = i_3
    
    if (i != 0)
    label_b3cc0c:
        int64_t x21_2 = 0
        void var_191c
        void* x22_2 = &var_191c
        
        do
            if (i == 1 && DomCardExp(zx.q(*x22_2), &var_19c4) == x19)
                x20 += 1
            
            if (x21_2 u> 2)
                break
            
            i = *(x22_2 + 0x44)
            x21_2 += 1
            x22_2 += 0x48
        while (i != 0)
else
    int64_t x21_1 = 0
    x20 = 0
    void var_19b0
    void* x22_1 = &var_19b0
    
    do
        if (i_1 == 1 && DomCardExp(zx.q(*(x22_1 - 0xc)), &var_19c4) == x19)
            x20 += 1
        
        i_1 = *x22_1
        x22_1 += 0x10
        
        if (x21_1 u> 8)
            break
        
        x21_1 += 1
    while (i_1 != 0)
    
    i = i_3
    
    if (i != 0)
        goto label_b3cc0c
return zx.q(x20)
