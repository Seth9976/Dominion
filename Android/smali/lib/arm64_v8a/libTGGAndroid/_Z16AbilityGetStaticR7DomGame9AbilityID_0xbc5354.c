// 函数: _Z16AbilityGetStaticR7DomGame9AbilityID
// 地址: 0xbc5354
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x19 = arg2

if ((arg2 & 0x30) == 0)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_4 = *(x8_3 - 0x90)
    *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

switch (x19.d u>> 4 & 3)
    case 0
        pthread_kill(pthread_self(), 6)
        DomGame* x0_13
        int64_t x1_3
        x0_13, x1_3 = XNoReturn()
        return AbilityGetOngoingParam(x0_13, x1_3) __tailcall
    case 1
        return *(arg1 + (x19 u>> 0x12 & 0x3fff) * 0x68 + 0x1a68) + (x19 & 0xf) * 0xc0 + 0xe0
    case 2
        int32_t x20_1 = *(arg1 + 0xd50)
        uint32_t x21_1 = x19.d u>> 0x12
        int32_t x8_14 = (zx.d(x21_1.w) | (0xffff & x20_1) << 0x10) s% 0x3e5
        int32_t* x9_4 = *(&data_1838a20 + (sx.q(x8_14) << 3))
        int64_t x0_5
        
        if (x9_4 != 0)
            while (*x9_4 != x21_1 || x9_4[1] != x20_1)
                x9_4 = *(x9_4 + 0x10)
                
                if (x9_4 == 0)
                    goto label_bc5454
            
            x0_5 = *(x9_4 + 8)
        else
        label_bc5454:
            DomDefGetSlow(zx.q(x21_1), zx.q(x20_1))
            uint32_t* x0_3 = malloc(0x18)
            int64_t x8_15 = sx.q(x8_14) << 3
            int64_t x9_5 = *(&data_1838a20 + x8_15)
            *x0_3 = x21_1
            x0_3[1] = x20_1
            *(&data_1838a20 + x8_15) = x0_3
            *(x0_3 + 0x10) = x9_5
            x0_5 = DomDefGetSlow(zx.q(x21_1), zx.q(x20_1))
            *(x0_3 + 8) = x0_5
        
        return x0_5 + (x19 & 0xf) * 0xc0 + 0xe0
    case 3
        int32_t x8_20 = *(arg1 + ((x19 u>> 0x12 & 0x3fff) << 5) + 0x15f68)
        int64_t var_38 = 0
        int32_t x9_7
        
        if (x8_20 s< 0)
            x9_7 = x8_20 + 0xff
        else
            x9_7 = x8_20
        
        int32_t x22_2 = x8_20 - (x9_7 & 0xffffff00)
        DomExpGetTokens(zx.q(x9_7 s>> 8), &var_38)
        int64_t x20_2 = var_38
        int64_t x21_2 = x19 & 0xf
        int32_t* result = x20_2 + muls.dp.d(x22_2, 0x638) + x21_2 * 0xc0 + 0x38
        
        if (*result != 6)
            void* x0_8 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_25 = x0_8 + sx.q(*(x0_8 + 0x13000)) * 0x98
            *(*(x8_25 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_26 = *(x8_25 - 0x90)
            *(x8_26 + 0x1a2c) = *(x8_26 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        if (*(x20_2 + sx.q(x22_2) * 0x638 + x21_2 * 0xc0 + 0x3c) != 7)
            void* x0_10 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_31 = x0_10 + sx.q(*(x0_10 + 0x13000)) * 0x98
            *(*(x8_31 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_32 = *(x8_31 - 0x90)
            *(x8_32 + 0x1a2c) = *(x8_32 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        return result
