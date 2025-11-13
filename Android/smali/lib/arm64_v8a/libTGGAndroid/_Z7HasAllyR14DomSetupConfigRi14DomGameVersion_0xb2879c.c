// 函数: _Z7HasAllyR14DomSetupConfigRi14DomGameVersion
// 地址: 0xb2879c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0xa0)

if (x8 != 0)
    int32_t x20_1 = arg3
    
    if (x8 == 1)
        if ((zx.d(*(DomDefGet(zx.q(*(arg1 + 0xa4)), zx.q(x20_1)) + 0xcc)) & 0x40) != 0)
        label_b28808:
            *arg2 = 0
            return 1
    else if (x8 == 3 && *(arg1 + 0xa8) == 0x4000000000)
        goto label_b28808
    
    int32_t x8_2 = *(arg1 + 0xe8)
    
    if (x8_2 == 3)
        if (*(arg1 + 0xf0) == 0x4000000000)
        label_b28890:
            *arg2 = 1
            return 1
        
    label_b28824:
        int32_t x8_5 = *(arg1 + 0x130)
        
        if (x8_5 != 0)
            if (x8_5 == 1)
                if ((zx.d(*(DomDefGet(zx.q(*(arg1 + 0x134)), zx.q(x20_1)) + 0xcc)) & 0x40) != 0)
                label_b288ac:
                    *arg2 = 2
                    return 1
            else if (x8_5 == 3 && *(arg1 + 0x138) == 0x4000000000)
                goto label_b288ac
            
            int32_t x8_7 = *(arg1 + 0x178)
            
            if (x8_7 == 1)
                if ((zx.d(*(DomDefGet(zx.q(*(arg1 + 0x17c)), zx.q(x20_1)) + 0xcc)) & 0x40) != 0)
                label_b288c8:
                    *arg2 = 3
                    return 1
            else if (x8_7 == 3 && *(arg1 + 0x180) == 0x4000000000)
                goto label_b288c8
    else
        if (x8_2 == 1)
            if ((zx.d(*(DomDefGet(zx.q(*(arg1 + 0xec)), zx.q(x20_1)) + 0xcc)) & 0x40) != 0)
                goto label_b28890
            
            goto label_b28824
        
        if (x8_2 != 0)
            goto label_b28824

return 0
