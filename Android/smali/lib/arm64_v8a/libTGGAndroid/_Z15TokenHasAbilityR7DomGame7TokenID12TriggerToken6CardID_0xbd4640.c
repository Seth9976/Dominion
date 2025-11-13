// 函数: _Z15TokenHasAbilityR7DomGame7TokenID12TriggerToken6CardID
// 地址: 0xbd4640
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg2
int32_t x21 = arg3

if (*(arg1 + 0x19ac) s<= arg2)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_4 = *(x8_3 - 0x90)
    *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

if ((x20 & 0x80000000) != 0)
    void* x0_3 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_7 = x0_3 + sx.q(*(x0_3 + 0x13000)) * 0x98
    *(*(x8_7 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_8 = *(x8_7 - 0x90)
    *(x8_8 + 0x1a2c) = *(x8_8 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

int32_t x8_11 = *(arg1 + (sx.q(x20) << 5) + 0x15f68)
int64_t var_28 = 0
int32_t x9_6

if (x8_11 s< 0)
    x9_6 = x8_11 + 0xff
else
    x9_6 = x8_11

int32_t x22_1 = x8_11 - (x9_6 & 0xffffff00)
DomExpGetTokens(zx.q(x9_6 s>> 8), &var_28)
int64_t x8_12 = var_28
int32_t x9_9 = *(x8_12 + muls.dp.d(x22_1, 0x638) + 0x38)

if (x9_9 != 0)
    int64_t x9_10 = sx.q(x22_1)
    
    if (x9_9 == 6 && *(x8_12 + x9_10 * 0x638 + 0x3c) == 7 && *(x8_12 + x9_10 * 0x638 + 0x44) == x21)
        return (0x3ffff & zx.q((arg4 & 0xfff) << 6)) | zx.q((0x3fff & x20) << 0x12) | 0x30
    
    int32_t x10_6 = *(x8_12 + x9_10 * 0x638 + 0xf8)
    
    if (x10_6 != 0)
        if (x10_6 == 6 && *(x8_12 + x9_10 * 0x638 + 0xfc) == 7
                && *(x8_12 + x9_10 * 0x638 + 0x104) == x21)
            return (0x3ffff & zx.q((arg4 & 0xfff) << 6)) | zx.q((0x3fff & x20) << 0x12) | 1 | 0x30
        
        int32_t x10_12 = *(x8_12 + x9_10 * 0x638 + 0x1b8)
        
        if (x10_12 != 0)
            if (x10_12 == 6 && *(x8_12 + x9_10 * 0x638 + 0x1bc) == 7
                    && *(x8_12 + x9_10 * 0x638 + 0x1c4) == x21)
                return (0x3ffff & zx.q((arg4 & 0xfff) << 6)) | zx.q((0x3fff & x20) << 0x12) | 2
                    | 0x30
            
            int32_t x10_18 = *(x8_12 + x9_10 * 0x638 + 0x278)
            
            if (x10_18 != 0)
                if (x10_18 == 6 && *(x8_12 + x9_10 * 0x638 + 0x27c) == 7
                        && *(x8_12 + x9_10 * 0x638 + 0x284) == x21)
                    return (0x3ffff & zx.q((arg4 & 0xfff) << 6)) | zx.q((0x3fff & x20) << 0x12) | 3
                        | 0x30
                
                int32_t x10_24 = *(x8_12 + x9_10 * 0x638 + 0x338)
                
                if (x10_24 != 0)
                    if (x10_24 == 6 && *(x8_12 + x9_10 * 0x638 + 0x33c) == 7
                            && *(x8_12 + x9_10 * 0x638 + 0x344) == x21)
                        return (0x3ffff & zx.q((arg4 & 0xfff) << 6)) | zx.q((0x3fff & x20) << 0x12)
                            | 4 | 0x30
                    
                    int32_t x10_30 = *(x8_12 + x9_10 * 0x638 + 0x3f8)
                    
                    if (x10_30 != 0)
                        if (x10_30 == 6 && *(x8_12 + x9_10 * 0x638 + 0x3fc) == 7
                                && *(x8_12 + x9_10 * 0x638 + 0x404) == x21)
                            return (0x3ffff & zx.q((arg4 & 0xfff) << 6))
                                | zx.q((0x3fff & x20) << 0x12) | 5 | 0x30
                        
                        int32_t x10_36 = *(x8_12 + x9_10 * 0x638 + 0x4b8)
                        
                        if (x10_36 != 0)
                            if (x10_36 == 6 && *(x8_12 + x9_10 * 0x638 + 0x4bc) == 7
                                    && *(x8_12 + x9_10 * 0x638 + 0x4c4) == x21)
                                return (0x3ffff & zx.q((arg4 & 0xfff) << 6))
                                    | zx.q((0x3fff & x20) << 0x12) | 6 | 0x30
                            
                            if (*(x8_12 + x9_10 * 0x638 + 0x578) == 6
                                    && *(x8_12 + x9_10 * 0x638 + 0x57c) == 7
                                    && *(x8_12 + x9_10 * 0x638 + 0x584) == x21)
                                return (0x3ffff & zx.q((arg4 & 0xfff) << 6))
                                    | zx.q((0x3fff & x20) << 0x12) | 7 | 0x30

return 0xffffffff
