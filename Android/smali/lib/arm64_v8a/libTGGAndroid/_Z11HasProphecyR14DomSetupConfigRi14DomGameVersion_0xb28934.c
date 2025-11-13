// 函数: _Z11HasProphecyR14DomSetupConfigRi14DomGameVersion
// 地址: 0xb28934
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0xa0)

if (x8 != 0)
    int32_t x20_1 = arg3
    
    if (x8 == 1)
        if ((zx.d(*(DomDefGet(zx.q(*(arg1 + 0xa4)), zx.q(x20_1)) + 0xcd)) & 8) != 0)
        label_b289a0:
            *arg2 = 0
            return 1
    else if (x8 == 3 && *(arg1 + 0xa8) == 0x80000000000)
        goto label_b289a0
    
    int32_t x8_2 = *(arg1 + 0xe8)
    
    if (x8_2 == 3)
        if (*(arg1 + 0xf0) == 0x80000000000)
        label_b28a28:
            *arg2 = 1
            return 1
        
    label_b289bc:
        int32_t x8_5 = *(arg1 + 0x130)
        
        if (x8_5 != 0)
            if (x8_5 == 1)
                if ((zx.d(*(DomDefGet(zx.q(*(arg1 + 0x134)), zx.q(x20_1)) + 0xcd)) & 8) != 0)
                label_b28a44:
                    *arg2 = 2
                    return 1
            else if (x8_5 == 3 && *(arg1 + 0x138) == 0x80000000000)
                goto label_b28a44
            
            int32_t x8_7 = *(arg1 + 0x178)
            
            if (x8_7 == 1)
                if ((zx.d(*(DomDefGet(zx.q(*(arg1 + 0x17c)), zx.q(x20_1)) + 0xcd)) & 8) != 0)
                label_b28a60:
                    *arg2 = 3
                    return 1
            else if (x8_7 == 3 && *(arg1 + 0x180) == 0x80000000000)
                goto label_b28a60
    else
        if (x8_2 == 1)
            if ((zx.d(*(DomDefGet(zx.q(*(arg1 + 0xec)), zx.q(x20_1)) + 0xcd)) & 8) != 0)
                goto label_b28a28
            
            goto label_b289bc
        
        if (x8_2 != 0)
            goto label_b289bc

return 0
