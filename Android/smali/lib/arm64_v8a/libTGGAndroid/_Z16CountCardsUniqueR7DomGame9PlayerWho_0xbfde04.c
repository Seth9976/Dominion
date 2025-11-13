// 函数: _Z16CountCardsUniqueR7DomGame9PlayerWho
// 地址: 0xbfde04
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t j_3

if (*(arg1 + 0x1528) s< 2)
    j_3 = 0
else
    j_3 = 0
    int32_t i = 1
    
    do
        int32_t x22_1 = i & 0xffff
        
        if (x22_1 u>= 0x320)
            void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_4 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
            *(*(x8_4 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_5 = *(x8_4 - 0x90)
            *(x8_5 + 0x1a2c) = *(x8_5 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        void* x23_1 = arg1 + mulu.dp.d(x22_1, 0x68)
        int32_t x25_1 = *(x23_1 + 0x1a70)
        int32_t x26_1 = *(arg1 + 0xd50)
        int32_t x8_7 = (x25_1 + (x26_1 << 0x10)) s% 0x3e5
        int32_t* x9_7 = *(&data_1838a20 + (sx.q(x8_7) << 3))
        void* x0_5
        
        if (x9_7 != 0)
            while (*x9_7 != x25_1 || x9_7[1] != x26_1)
                x9_7 = *(x9_7 + 0x10)
                
                if (x9_7 == 0)
                    goto label_bfdf10
            
            x0_5 = *(x9_7 + 8)
        else
        label_bfdf10:
            DomDefGetSlow(zx.q(x25_1), zx.q(x26_1))
            int32_t* x0_3 = malloc(0x18)
            int64_t x8_8 = sx.q(x8_7) << 3
            int64_t x9_8 = *(&data_1838a20 + x8_8)
            *x0_3 = x25_1
            x0_3[1] = x26_1
            *(&data_1838a20 + x8_8) = x0_3
            *(x0_3 + 0x10) = x9_8
            x0_5 = DomDefGetSlow(zx.q(x25_1), zx.q(x26_1))
            *(x0_3 + 8) = x0_5
        
        if ((*(x0_5 + 0xc8) & 0x9407f000400) == 0 && *(arg1 + zx.q(x22_1) * 0x68 + 0x1a94) == arg2)
            int32_t x8_14 = *(x23_1 + 0x1a70)
            int32_t var_ce0[0x320]
            uint64_t j_2
            
            if (j_3 s<= 0)
                j_2 = sx.q(j_3)
            else
                j_2 = zx.q(j_3)
                int32_t (* x10_4)[0x320] = &var_ce0
                uint64_t j_1 = j_2
                uint64_t j
                
                do
                    if (*x10_4 == x8_14)
                        goto label_bfde60
                    
                    j = j_1
                    j_1 -= 1
                    x10_4 = &(*x10_4)[1]
                while (j != 1)
            
            j_3 += 1
            var_ce0[j_2] = x8_14
        
    label_bfde60:
        i += 1
    while (i s< *(arg1 + 0x1528))

return zx.q(j_3)
