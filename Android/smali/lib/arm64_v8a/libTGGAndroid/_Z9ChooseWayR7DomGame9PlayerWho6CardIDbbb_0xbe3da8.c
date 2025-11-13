// 函数: _Z9ChooseWayR7DomGame9PlayerWho6CardIDbbb
// 地址: 0xbe3da8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0x1754)
int32_t var_ce0
uint64_t x21
int32_t x8_1

if (x8 == 0)
    x21 = 0
    x8_1 = *(arg1 + 0x1764)
    
    if (x8_1 != 0)
        (&var_ce0)[zx.q(x21.d)] = x8_1
        x21 = zx.q(x21.d + 1)
else
    x21 = 1
    var_ce0 = x8
    x8_1 = *(arg1 + 0x1764)
    
    if (x8_1 != 0)
        (&var_ce0)[zx.q(x21.d)] = x8_1
        x21 = zx.q(x21.d + 1)
int32_t x8_2 = *(arg1 + 0x1774)

if (x8_2 != 0)
    (&var_ce0)[zx.q(x21.d)] = x8_2
    x21 = zx.q(x21.d + 1)

int32_t x8_3 = *(arg1 + 0x1784)

if (x8_3 != 0)
    (&var_ce0)[zx.q(x21.d)] = x8_3
    x21 = zx.q(x21.d + 1)
label_be3e3c:
    int32_t var_d24_1 = arg2
    
    if ((arg6.d & 1) == 0)
        int32_t i = 0
        
        do
            uint64_t x22_3 = zx.q(*(&var_ce0 + (zx.q(i) << 0x20 s>> 0x1e)))
            
            if (x22_3.d u>= 0x320)
                void* x0_10 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_31 = x0_10 + sx.q(*(x0_10 + 0x13000)) * 0x98
                *(*(x8_31 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_32 = *(x8_31 - 0x90)
                *(x8_32 + 0x1a2c) = *(x8_32 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
            
            int32_t x28_3 = *(arg1 + x22_3 * 0x68 + 0x1a70)
            int32_t fp_2 = *(arg1 + 0xd50)
            int32_t x8_35 = (x28_3 + (fp_2 << 0x10)) s% 0x3e5
            int32_t* x9_20 = *(&data_1838a20 + (sx.q(x8_35) << 3))
            
            if (x9_20 != 0)
                while (*x9_20 != x28_3 || x9_20[1] != fp_2)
                    x9_20 = *(x9_20 + 0x10)
                    
                    if (x9_20 == 0)
                        goto label_be4108
                
                if ((zx.d(*(*(x9_20 + 8) + 0xcb)) & 0x10) == 0)
                    goto label_be4048
            else
            label_be4108:
                DomDefGetSlow(zx.q(x28_3), zx.q(fp_2))
                int32_t* x0_12 = malloc(0x18)
                int64_t x8_36 = sx.q(x8_35) << 3
                int64_t x9_21 = *(&data_1838a20 + x8_36)
                *x0_12 = x28_3
                x0_12[1] = fp_2
                *(&data_1838a20 + x8_36) = x0_12
                *(x0_12 + 0x10) = x9_21
                void* x0_14 = DomDefGetSlow(zx.q(x28_3), zx.q(fp_2))
                *(x0_12 + 8) = x0_14
                
                if ((zx.d(*(x0_14 + 0xcb)) & 0x10) == 0)
                label_be4048:
                    x21 = sx.q(x21.d) - 1
                    int64_t i_2 = sx.q(i)
                    i -= 1
                    (&var_ce0)[i_2] = (&var_ce0)[x21]
            
            i += 1
        while (i s< x21.d)
    else
        int32_t i_1 = 0
        
        do
            uint64_t x22_1 = zx.q(*(&var_ce0 + (zx.q(i_1) << 0x20 s>> 0x1e)))
            
            if (x22_1.d u>= 0x320)
                void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_9 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
                *(*(x8_9 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_10 = *(x8_9 - 0x90)
                *(x8_10 + 0x1a2c) = *(x8_10 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
            
            int32_t x28_1 = *(arg1 + x22_1 * 0x68 + 0x1a70)
            int32_t fp_1 = *(arg1 + 0xd50)
            int32_t x8_13 = (x28_1 + (fp_1 << 0x10)) s% 0x3e5
            int32_t* x9_10 = *(&data_1838a20 + (sx.q(x8_13) << 3))
            int64_t i_3
            
            if (x9_10 != 0)
                while (*x9_10 != x28_1 || x9_10[1] != fp_1)
                    x9_10 = *(x9_10 + 0x10)
                    
                    if (x9_10 == 0)
                        goto label_be3f28
                
                i_3 = sx.q(i_1)
                
                if ((zx.d(*(*(x9_10 + 8) + 0xcb)) & 0x10) == 0)
                    goto label_be3e68
                
                goto label_be3fa0
            
        label_be3f28:
            DomDefGetSlow(zx.q(x28_1), zx.q(fp_1))
            int32_t* x0_3 = malloc(0x18)
            int64_t x8_14 = sx.q(x8_13) << 3
            int64_t x9_11 = *(&data_1838a20 + x8_14)
            *x0_3 = x28_1
            x0_3[1] = fp_1
            *(&data_1838a20 + x8_14) = x0_3
            *(x0_3 + 0x10) = x9_11
            void* x0_5 = DomDefGetSlow(zx.q(x28_1), zx.q(fp_1))
            *(x0_3 + 8) = x0_5
            i_3 = sx.q(i_1)
            
            if ((zx.d(*(x0_5 + 0xcb)) & 0x10) == 0)
            label_be3e68:
                x21 = sx.q(x21.d) - 1
                i_1 -= 1
                (&var_ce0)[i_3] = (&var_ce0)[x21]
            else
            label_be3fa0:
                uint64_t x28_2 = zx.q((&var_ce0)[i_3].w)
                
                if (x28_2.d u>= 0x320)
                    void* x0_8 = __emutls_get_address(__emutls_v.gContextStack_tl)
                    void* x8_22 = x0_8 + sx.q(*(x0_8 + 0x13000)) * 0x98
                    *(*(x8_22 - 0x90) + 0x1a28) = 0xffffffff
                    void* x8_23 = *(x8_22 - 0x90)
                    *(x8_23 + 0x1a2c) = *(x8_23 + 0x1a24)
                    XTrace("game thread yield (error)")
                    xco_yield()
                    XTrace("game thread resume (error)")
                    
                    if (*(arg1 + x28_2 * 0x68 + 0x1a70) == 0xf3a)
                        goto label_be3e68
                else if (*(arg1 + x28_2 * 0x68 + 0x1a70) == 0xf3a)
                    goto label_be3e68
            
            i_1 += 1
        while (i_1 s< x21.d)
    
    if (x21.d != 0)
        int32_t x20_1
        
        if ((arg5.d & 1) != 0)
            x20_1 = 0
        else
            x20_1 = 2
        
        int32_t var_ce8 = 2
        int32_t var_ce4_1 = arg3
        int128_t var_d20
        __builtin_memset(&var_d20, 0, 0x30)
        var_d20.d = 0xbe
        int128_t var_d10
        var_d10:0xc.d = arg4.d & 1
        int128_t var_d00
        var_d00:8.q = 0
        int64_t var_cf0_1 = 0
        AllSame(arg1, &var_ce0, x21.d)
        uint64_t x3
        
        if (*(arg1 + 0x19d4) == var_d24_1)
            x3 = zx.q(*(arg1 + 0x19d8))
        else
            x3 = zx.q(var_d24_1)
        
        int32_t var_d48_1 = 0
        int32_t var_d50_1 = x20_1
        int32_t var_d58_1 = 0x18
        int128_t* var_d60_1 = &var_d20
        int32_t var_d68_1 = 0x22
        int32_t var_d70_1 = 0
        uint64_t result =
            DomNotifyYield(arg1, &var_ce8, zx.q(var_d24_1), x3, 1, &var_ce0, zx.q(x21.d), 1)
        
        if (result.d == 0)
            return result
        
        uint64_t x20_2 = zx.q(var_ce0.w)
        
        if (x20_2.d u>= 0x320)
            void* x0_19 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_44 = x0_19 + sx.q(*(x0_19 + 0x13000)) * 0x98
            *(*(x8_44 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_45 = *(x8_44 - 0x90)
            *(x8_45 + 0x1a2c) = *(x8_45 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        if (*(arg1 + 0x150c) - 3 u>= 3)
            int32_t x21_1 = *(arg1 + x20_2 * 0x68 + 0x1a70)
            int32_t x0_21 = PileSource(arg1, zx.q(x21_1))
            int64_t x9_27 = -0x410
            
            while (true)
                void* x10_7 = arg1 + x9_27
                int32_t x8_49 = *(x10_7 + 0x19ac)
                
                if (x8_49 == x21_1)
                    x8_49 = x21_1
                else if (x8_49 != x0_21 && *(x10_7 + 0x19b0) != x21_1)
                    int64_t temp0_1 = x9_27
                    x9_27 += 0x10
                    
                    if (temp0_1 == -0x10)
                        break
                    
                    continue
                
                if (x8_49 == 0)
                    break
                
                int64_t x9_28 = -0x1b00000000
                int64_t x10_9 = -0x410
                
                while (true)
                    void* x12_1 = arg1 + x10_9
                    
                    if (*(x12_1 + 0x19ac) == x8_49 || *(x12_1 + 0x19b0) == x8_49)
                        if (x10_9.d == 0xfffffb80)
                            break
                        
                        void* x8_51 = arg1 + (sx.q(var_d24_1) << 4) + (x9_28 s>> 0x1e)
                        *(x8_51 + 0x60cbc) += 1
                        break
                    
                    int64_t temp1_1 = x10_9
                    x10_9 += 0x10
                    x9_28 += 0x100000000
                    
                    if (temp1_1 == -0x10)
                        break
                    
                    continue
                
                break
        
        return zx.q(var_ce0)
else if (x21.d s>= 1)
    goto label_be3e3c

return 0
