// 函数: _Z24FlanimDefGetActionFramesP6XAssetPKcPiS3_Pf
// 地址: 0xf64c64
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0 = FlanimGetDef(arg1)
int64_t result
void* x24_1

if (arg2 == 0)
    *arg3 = 0
    x24_1 = x0 + 0x54
    *arg4 = x0[0xb].d
    result = 1
else
    uint64_t x25_1 = zx.q(x0[1].d)
    
    if (x25_1.d s< 1)
    label_f64cc0:
        *arg3 = 0
        result = 0
        x24_1 = x0 + 0x54
        *arg4 = x0[0xb].d
    else
        x24_1 = *x0 + 0x10
        
        while (true)
            if (strcasecmp(arg2, *(x24_1 - 0x10)) == 0)
                *arg3 = *(x24_1 - 8)
                break
            
            uint64_t temp0_1 = x25_1
            x25_1 -= 1
            x24_1 += 0x18
            
            if (temp0_1 == 1)
                goto label_f64cc0
        
        *arg4 = *(x24_1 - 4) - *(x24_1 - 8) + 1
        result = 1

*arg5 = *x24_1
return result
