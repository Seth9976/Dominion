// 函数: _Z30AbilityCanTriggerMultipleTimesR7DomGame9AbilityID
// 地址: 0xbd8538
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = arg2 & 0x30

if (x8 == 0x30)
    return 1

int64_t result

if (x8 != 0)
    int64_t x20_1 = arg2 & 0xffffffff
    int32_t* x0_4 = AbilityGetStatic(arg1, x20_1)
    
    if (*x0_4 != 6)
        void* x0_6 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_5 = x0_6 + sx.q(*(x0_6 + 0x13000)) * 0x98
        *(*(x8_5 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_6 = *(x8_5 - 0x90)
        *(x8_6 + 0x1a2c) = *(x8_6 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
    
    if ((zx.d(*(x0_4 + 0xb5)) & 1) != 0)
        return 5
    
    int32_t x21_2 = x0_4[1]
    int32_t x0_8 = AbilitySource(arg1, x20_1)
    
    if (x21_2 != 0)
        if (x0_8 == 0x801)
            return 3
        
        return 1
    
    result = 0
    
    if (x0_8 s> 0x80c)
        if (x0_8 s> 0xe0a)
            if (x0_8 != 0xe0b && x0_8 != 0x1134)
            label_bd86ec:
                int32_t x0_13 = AbilitySource(arg1, x20_1)
                result = 4
                
                if (x0_13 == 0x806 || x0_13 == 0x1115)
                    return 2
                
                if (x0_13 == 0x418 || x0_13 == 0x507)
                    return 2
        else if (x0_8 != 0x80d && x0_8 != 0xd01)
            goto label_bd86ec
    else if (x0_8 s> 0x603)
        if (x0_8 != 0x604 && x0_8 != 0x807)
            goto label_bd86ec
    else if (x0_8 != 0x202 && x0_8 != 0x31a)
        goto label_bd86ec
else
    int32_t x0_1 = AbilitySource(arg1, arg2 & 0xffffffff)
    result = 1
    
    if (x0_1 == 0x1115 || x0_1 == 0x806)
        return 2
    
    if (x0_1 == 0x418 || x0_1 == 0x507)
        return 2

return result
