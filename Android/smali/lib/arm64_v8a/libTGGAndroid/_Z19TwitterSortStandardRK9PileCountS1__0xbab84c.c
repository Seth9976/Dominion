// 函数: _Z19TwitterSortStandardRK9PileCountS1_
// 地址: 0xbab84c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_2 = *arg1
int32_t x8_1
int32_t x9

if (x8_2 s> 0x4ff)
    if (x8_2 s<= 0x600)
        if (x8_2 == 0x500)
            x8_1 = 8
            x9 = *arg2
            
            if (x9 s<= 0x4ff)
                goto label_bab9d4
            
            goto label_bab97c
        
        if (x8_2 != 0x600)
            goto label_bab9c4
        
        x8_1 = 4
        x9 = *arg2
        
        if (x9 s<= 0x4ff)
            goto label_bab9d4
        
        goto label_bab97c
    
    if (x8_2 != 0x601)
        if (x8_2 != 0x923)
            goto label_bab9c4
        
        x8_1 = 0xa
        x9 = *arg2
        
        if (x9 s<= 0x4ff)
            goto label_bab9d4
        
        goto label_bab97c
    
    x8_1 = 0
    x9 = *arg2
    
    if (x9 s<= 0x4ff)
    label_bab9d4:
        uint64_t x10_2 = zx.q(x9 - 0x101)
        
        if (x10_2.d u<= 5)
            switch (x10_2)
                case 0
                    return zx.q(x8_1 s< 3 ? 1 : 0)
                case 1
                    return zx.q(x8_1 s< 2 ? 1 : 0)
                case 2
                    return zx.q(x8_1 s< 1 ? 1 : 0)
                case 3
                    return zx.q(x8_1 s< 7 ? 1 : 0)
                case 4
                    return zx.q(x8_1 s< 6 ? 1 : 0)
                case 5
                    return zx.q(x8_1 s< 5 ? 1 : 0)
    else
    label_bab97c:
        
        if (x9 == 0x500)
            return zx.q(x8_1 s< 8 ? 1 : 0)
        
        if (x9 == 0x600)
            return zx.q(x8_1 s< 4 ? 1 : 0)
        
        if (x9 == 0x601)
            return zx.q(x8_1 s< 0 ? 1 : 0)
else
    uint64_t x8 = zx.q(x8_2 - 0x100)
    
    if (x8.d u> 6)
    label_bab9c4:
        x8_1 = -1
        x9 = *arg2
        
        if (x9 s> 0x4ff)
            goto label_bab97c
        
        goto label_bab9d4
    
    switch (x8)
        case 0
            x8_1 = 9
            x9 = *arg2
            
            if (x9 s<= 0x4ff)
                goto label_bab9d4
            
            goto label_bab97c
        case 1
            x8_1 = 3
            x9 = *arg2
            
            if (x9 s<= 0x4ff)
                goto label_bab9d4
            
            goto label_bab97c
        case 2
            x8_1 = 2
            x9 = *arg2
            
            if (x9 s<= 0x4ff)
                goto label_bab9d4
            
            goto label_bab97c
        case 3
            x8_1 = 1
            x9 = *arg2
            
            if (x9 s<= 0x4ff)
                goto label_bab9d4
            
            goto label_bab97c
        case 4
            x8_1 = 7
            x9 = *arg2
            
            if (x9 s<= 0x4ff)
                goto label_bab9d4
            
            goto label_bab97c
        case 5
            x8_1 = 6
            x9 = *arg2
            
            if (x9 s<= 0x4ff)
                goto label_bab9d4
            
            goto label_bab97c
        case 6
            x8_1 = 5
            x9 = *arg2
            
            if (x9 s<= 0x4ff)
                goto label_bab9d4
            
            goto label_bab97c

int32_t x10_3

x10_3 = x9 == 0x923 ? 0xa : -1

int32_t x9_1

x9_1 = x9 == 0x100 ? 9 : x10_3

return zx.q(x8_1 s< x9_1 ? 1 : 0)
