// 函数: _Z17CardHasAllOngoingR10AbilityIDsR7DomGame9PlayerWhoS3_6CardID
// 地址: 0xbc47cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x12 = *(arg2 + mulu.dp.d(arg5, 0x68) + 0x1a68)
int32_t i = *(x12 + 0xe0)

if (i == 0)
    return 

int32_t x8_1 = 0x10 | (0x3fff & arg5) << 0x12
int32_t x11_1 = 0
void* x12_1 = x12 + 0x1a0

if (arg4 == arg3)
    do
        if ((zx.d(*(x12_1 - 0x1c)) & 2) == 0)
        label_bc4848:
            
            if ((zx.d(*(x12_1 - 0xc)) & 4) != 0)
                if (i == 7 && zx.d(*(arg2 + 0x19e0)) != 0 && *(arg2 + 0x19d4) == arg4)
                    goto label_bc4804
            else if (i == 7)
            label_bc4804:
                int64_t x10 = sx.q(*(arg1 + 0x400))
                *(arg1 + 0x400) = x10.d + 1
                *(arg1 + (x10 << 2)) = x8_1 | (x11_1 & 0xf)
        else if (zx.d(*(arg2 + 0x19e0)) != 0 && *(arg2 + 0x19d4) == arg4)
            goto label_bc4848
        
        i = *x12_1
        x12_1 += 0xc0
        x11_1 += 1
    while (i != 0)
else
    do
        int32_t x13_9 = *(x12_1 - 0x1c)
        
        if ((x13_9 & 1) != 0)
            if ((x13_9 & 2) == 0)
            label_bc48c0:
                
                if ((zx.d(*(x12_1 - 0xc)) & 4) != 0)
                    if (i == 7 && zx.d(*(arg2 + 0x19e0)) != 0 && *(arg2 + 0x19d4) == arg3)
                        goto label_bc4878
                else if (i == 7)
                label_bc4878:
                    int64_t x10_3 = sx.q(*(arg1 + 0x400))
                    *(arg1 + 0x400) = x10_3.d + 1
                    *(arg1 + (x10_3 << 2)) = x8_1 | (x11_1 & 0xf)
            else if (zx.d(*(arg2 + 0x19e0)) != 0 && *(arg2 + 0x19d4) == arg4)
                goto label_bc48c0
        
        i = *x12_1
        x12_1 += 0xc0
        x11_1 += 1
    while (i != 0)
