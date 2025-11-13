// 函数: _Z18ToLandscapeEntriesRK14DomSetupConfigP14LandscapeSetup
// 地址: 0xb2d1b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v8
int64_t var_60 = v8
memcpy(arg2, arg1 + 0xa0, 0x120)
int32_t x22

if (*(arg1 + 0xa0) == 0)
    x22 = 0
    
    if (*(arg1 + 0xbd0) s>= 1)
    label_b2d260:
        int32_t i = 0
        void* x21_1 = arg2 + muls.dp.d(x22, 0x48) + 0x10
        
        do
            if (x22 + i == 4)
                x22 = 4
                
                if (*(arg1 + 0xbd8) s< 1)
                    goto label_b2d320
                
                goto label_b2d2c8
            
            *(x21_1 - 8) = 0x400
            *(x21_1 - 0x10) = 0x141000000003
            ClearReferenceCards(x21_1)
            i += 1
            x21_1 += 0x48
        while (i s< *(arg1 + 0xbd0))
        
        x22 += i
else if (*(arg1 + 0xe8) == 0)
    x22 = 1
    
    if (*(arg1 + 0xbd0) s>= 1)
        goto label_b2d260
else if (*(arg1 + 0x130) == 0)
    x22 = 2
    
    if (*(arg1 + 0xbd0) s>= 1)
        goto label_b2d260
else
    if (*(arg1 + 0x178) == 0)
        x22 = 3
    else
        x22 = -1
    
    if (*(arg1 + 0xbd0) s>= 1)
        goto label_b2d260

if (*(arg1 + 0xbd8) s>= 1)
label_b2d2c8:
    int32_t x24_1
    
    x24_1 = x22 s> 4 ? x22 : 4
    
    int32_t i_1 = 0
    void* x21_2 = arg2 + muls.dp.d(x22, 0x48) + 0x10
    
    do
        if (x22 - x24_1 == neg.d(i_1))
            x22 = x24_1
            
            if (*(arg1 + 0xbe0) s< 1)
                goto label_b2d39c
            
            goto label_b2d344
        
        *(x21_2 - 8) = 0x20000000
        *(x21_2 - 0x10) = 0x141100000003
        ClearReferenceCards(x21_2)
        i_1 += 1
        x21_2 += 0x48
    while (i_1 s< *(arg1 + 0xbd8))
    
    x22 += i_1

label_b2d320:

if (*(arg1 + 0xbe0) s>= 1)
label_b2d344:
    int32_t x24_2
    
    x24_2 = x22 s> 4 ? x22 : 4
    
    int32_t i_2 = 0
    void* x21_3 = arg2 + muls.dp.d(x22, 0x48) + 0x10
    
    do
        if (x22 - x24_2 == neg.d(i_2))
            x22 = x24_2
            
            if (*(arg1 + 0xbe8) s< 1)
                goto label_b2d418
            
            goto label_b2d3c0
        
        *(x21_3 - 8) = 0x8000000
        *(x21_3 - 0x10) = 0x141200000003
        ClearReferenceCards(x21_3)
        i_2 += 1
        x21_3 += 0x48
    while (i_2 s< *(arg1 + 0xbe0))
    
    x22 += i_2

label_b2d39c:

if (*(arg1 + 0xbe8) s>= 1)
label_b2d3c0:
    int32_t x24_3
    
    x24_3 = x22 s> 4 ? x22 : 4
    
    int32_t i_3 = 0
    void* x21_4 = arg2 + muls.dp.d(x22, 0x48) + 0x10
    
    do
        if (x22 - x24_3 == neg.d(i_3))
            x22 = x24_3
            
            if (*(arg1 + 0xbf0) s< 1)
                goto label_b2d4a4
            
            goto label_b2d43c
        
        *(x21_4 - 8) = 0x10000000
        *(x21_4 - 0x10) = 0x141300000003
        ClearReferenceCards(x21_4)
        i_3 += 1
        x21_4 += 0x48
    while (i_3 s< *(arg1 + 0xbe8))
    
    x22 += i_3

label_b2d418:

if (*(arg1 + 0xbf0) s>= 1)
label_b2d43c:
    int32_t x24_4
    
    x24_4 = x22 s> 4 ? x22 : 4
    
    int32_t x23_1 = 0
    void* x21_5 = arg2 + muls.dp.d(x22, 0x48) + 0x10
    
    while (true)
        if (x22 - x24_4 == neg.d(x23_1))
            x22 = x24_4
            break
        
        *(x21_5 - 8) = 0x10000000000
        *(x21_5 - 0x10) = 0x141500000003
        ClearReferenceCards(x21_5)
        x23_1 += 1
        x21_5 += 0x48
        
        if (x23_1 s>= *(arg1 + 0xbf0))
            x22 += x23_1
            break

label_b2d4a4:
int32_t x8_27 = *V2I1

if (zx.d(*(arg1 + 0xbf8)) == 0 || x8_27 s< 1)
    goto label_b2d530

int32_t x24_5

x24_5 = x22 s> 4 ? x22 : 4

if (x24_5 == x22)
    x22 = x24_5
label_b2d530:
    
    if (zx.d(*(arg1 + 0xbf9)) != 0)
    label_b2d534:
        
        if (x8_27 s>= 1)
            int32_t x21_7
            
            x21_7 = x22 s> 4 ? x22 : 4
            
            int32_t x20_1 = 0
            void* x19_1 = arg2 + muls.dp.d(x22, 0x48) + 0x10
            
            while (true)
                if (x22 - x21_7 == neg.d(x20_1))
                    x22 = x21_7
                    break
                
                *(x19_1 - 8) = 0x80000000000
                *(x19_1 - 0x10) = 0x141700000003
                ClearReferenceCards(x19_1)
                x20_1 += 1
                x19_1 += 0x48
                
                if (x20_1 s>= *V2I1)
                    x22 += x20_1
                    break
else
    void* x21_6 = arg2 + muls.dp.d(x22, 0x48) + 0x10
    int32_t x26_1 = 1
    
    do
        *(x21_6 - 8) = 0x4000000000
        *(x21_6 - 0x10) = 0x141400000003
        ClearReferenceCards(x21_6)
        x8_27 = *V2I1
        
        if (x26_1 s>= x8_27)
            x22 += x26_1
            
            if (zx.d(*(arg1 + 0xbf9)) != 0)
                goto label_b2d534
            
            goto label_b2d5a0
        
        x26_1 += 1
        x21_6 += 0x48
    while (x22 - x24_5 + x26_1 != 1)
    
    x22 = x24_5
    
    if (zx.d(*(arg1 + 0xbf9)) != 0)
        goto label_b2d534

label_b2d5a0:

if (x22 == 0xffffffff)
    return 4

return zx.q(x22)
