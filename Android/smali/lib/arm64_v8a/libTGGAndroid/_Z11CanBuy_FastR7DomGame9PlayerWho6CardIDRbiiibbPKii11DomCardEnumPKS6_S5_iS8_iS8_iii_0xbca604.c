// 函数: _Z11CanBuy_FastR7DomGame9PlayerWho6CardIDRbiiibbPKii11DomCardEnumPKS6_S5_iS8_iS8_iii
// 地址: 0xbca604
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg3 & 0xffff
int32_t x26 = arg3
int32_t var_70 = arg2
*arg4 = false

if (x20 u>= 0x320)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_4 = *(x8_3 - 0x90)
    *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

void* x21 = arg1 + mulu.dp.d(x20, 0x68)
int32_t x24 = *(x21 + 0x1a70)

if (arg11 s>= 1)
    int32_t const* x8_5 = arg10
    uint64_t i_7 = zx.q(arg11)
    uint64_t i
    
    do
        if (*x8_5 == x24)
            return 0
        
        i = i_7
        i_7 -= 1
        x8_5 = &x8_5[1]
    while (i != 1)

int32_t x0_3

if ((arg8.d & 1) != 0)
    x0_3 = IsLandscape(arg1, zx.q(x26))

if ((arg8.d & 1) == 0 || (x0_3 & 1) != 0)
    if ((zx.d(arg9) & 1) == 0)
    label_bca788:
        DomCardEnum const* fp_1 = arg16
        DomCardEnum const* x27_1 = arg13
        int32_t const* x28_1 = arg14
        int64_t x8_11 = 0
        int32_t x9_8 = arg12.d
        uint64_t x11_2 = zx.q(x20)
        uint64_t x12_1 = zx.q(x26)
        void* x9_9 = arg1 + mulu.dp.d(x26, 0x68)
        int32_t* x21_1 = *(x9_9 + 0x1a68)
        int64_t x9_10 = 0xe0
        uint64_t var_68
        
        for (int32_t i_1 = x21_1[0x38]; i_1 != 0; i_1 = *(x21_1 + x9_10))
            if (i_1 == 4)
                int64_t x26_1 = *(x21_1 + (x8_11 & 0xffffffff) * 0xc0 + 0x188)
                
                if (x26_1 != 0)
                    if (x20 u>= 0x320)
                        void* x0_9 = __emutls_get_address(__emutls_v.gContextStack_tl)
                        void* x8_16 = x0_9 + sx.q(*(x0_9 + 0x13000)) * 0x98
                        *(*(x8_16 - 0x90) + 0x1a28) = 0xffffffff
                        void* x8_17 = *(x8_16 - 0x90)
                        *(x8_17 + 0x1a2c) = *(x8_17 + 0x1a24)
                        XTrace("game thread yield (error)")
                        xco_yield()
                        XTrace("game thread resume (error)")
                    
                    var_68 = zx.q(x12_1.d) | zx.q(*(arg1 + x11_2 * 0x68 + 0x1a78)) << 0x20
                    DomPushContext(arg1, zx.q(var_70), &var_68)
                    int32_t x0_11 = x26_1()
                    int32_t* x8_20 = __emutls_get_address(__emutls_v.gContextStack_tl) + 0x13000
                    *x8_20 -= 1
                    
                    if ((x0_11 & 1) != 0)
                        return 1
                    
                    x21_1 = *(x9_9 + 0x1a68)
                
                break
            
            x8_11 += 1
            x9_10 += 0xc0
        
        int32_t x26_4 = x21_1[0x31]
        char var_6c = 0
        int32_t x8_21 = x21_1[0x38]
        uint64_t var_a0_2 = (zx.q(x26_4 u>> 0x12) & 1) << 0x20
        
        if (x8_21 != 0)
            int64_t x8_22
            
            if (x8_21 != 3)
                int32_t x8_23 = x21_1[0x68]
                
                if (x8_23 != 0)
                    if (x8_23 == 3)
                        x8_22 = 1
                        goto label_bca9b0
                    
                    int32_t x8_24 = x21_1[0x98]
                    
                    if (x8_24 != 0)
                        if (x8_24 == 3)
                            x8_22 = 2
                            goto label_bca9b0
                        
                        int32_t x8_25 = x21_1[0xc8]
                        
                        if (x8_25 != 0)
                            if (x8_25 == 3)
                                x8_22 = 3
                                goto label_bca9b0
                            
                            int32_t x8_26 = x21_1[0xf8]
                            
                            if (x8_26 != 0)
                                if (x8_26 == 3)
                                    x8_22 = 4
                                    goto label_bca9b0
                                
                                int32_t x8_27 = x21_1[0x128]
                                
                                if (x8_27 != 0)
                                    if (x8_27 == 3)
                                        x8_22 = 5
                                        goto label_bca9b0
                                    
                                    int32_t x8_28 = x21_1[0x158]
                                    
                                    if (x8_28 != 0)
                                        if (x8_28 == 3)
                                            x8_22 = 6
                                            goto label_bca9b0
                                        
                                        if (x21_1[0x188] == 3)
                                            x8_22 = 7
                                            goto label_bca9b0
            else
                x8_22 = 0
            label_bca9b0:
                int64_t x25_2 = *(x21_1 + x8_22 * 0xc0 + 0xf8)
                
                if (x25_2 != 0)
                    if (x20 u>= 0x320)
                        void* x0_16 = __emutls_get_address(__emutls_v.gContextStack_tl)
                        void* x8_33 = x0_16 + sx.q(*(x0_16 + 0x13000)) * 0x98
                        *(*(x8_33 - 0x90) + 0x1a28) = 0xffffffff
                        void* x8_34 = *(x8_33 - 0x90)
                        *(x8_34 + 0x1a2c) = *(x8_34 + 0x1a24)
                        XTrace("game thread yield (error)")
                        xco_yield()
                        XTrace("game thread resume (error)")
                    
                    var_68 = (0xffffffff & x12_1) | zx.q(*(arg1 + x11_2 * 0x68 + 0x1a78)) << 0x20
                    DomPushContext(arg1, zx.q(var_70), &var_68)
                    int64_t x0_19 = x25_2(&var_6c)
                    x26_4 = x0_19.d
                    var_a0_2 = (x0_19 & 0x100000) | (1 & x0_19 u>> 0x12) << 0x20
                    int32_t* x8_38 = __emutls_get_address(__emutls_v.gContextStack_tl) + 0x13000
                    *x8_38 -= 1
        
        if (x20 u>= 0x320)
            void* x0_23 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_41 = x0_23 + sx.q(*(x0_23 + 0x13000)) * 0x98
            *(*(x8_41 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_42 = *(x8_41 - 0x90)
            *(x8_42 + 0x1a2c) = *(x8_42 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        int32_t x20_1 = x26_4 & 0xff
        int32_t i_2 = PileSource(arg1, zx.q(*(x21 + 0x1a70)))
        
        if (arg19 s< 1)
            goto label_bcab08
        
        int32_t x19_5
        
        if (*arg18 != i_2)
            uint64_t x8_46 = zx.q(arg19)
            int64_t x10_3 = 1
            int64_t x9_28
            
            do
                x9_28 = x10_3
                
                if (x8_46 == x10_3)
                    break
                
                x10_3 = x9_28 + 1
            while (*(arg18 + (x9_28 << 2)) != i_2)
            
            if (x9_28 u< x8_46)
                x20_1 = 0
            
            x19_5 = x26_4 u>> 0x10 & 1
            
            if (zx.d(var_6c) != 0)
                goto label_bcab10
            
            goto label_bcab64
        
        x20_1 = 0
    label_bcab08:
        x19_5 = x26_4 u>> 0x10 & 1
        bool& x26_5
        int32_t x27_2
        int32_t x28_2
        int32_t fp_2
        
        if (zx.d(var_6c) == 0)
        label_bcab64:
            int32_t x8_48
            
            x8_48 = x20_1 s> 2 ? x20_1 : 2
            
            bool z_1
            
            if (i_2 == x9_8)
                z_1 = x9_8 == 0
            else
                z_1 = true
            
            if (not(z_1))
                x20_1 = x8_48 - 2
            
            int32_t i_8
            
            if (arg15 s< 1)
                i_8 = arg17
            else
                i_8 = arg17
                uint64_t i_5 = zx.q(arg15)
                uint64_t i_3
                
                do
                    if (*x27_1 == i_2)
                        int32_t x9_32 = x20_1 - *x28_1
                        x20_1 = x9_32 & not.d(x9_32 s>> 0x1f)
                    
                    x28_1 = &x28_1[1]
                    i_3 = i_5
                    i_5 -= 1
                    x27_1 += 4
                while (i_3 != 1)
            
            if (i_8 s< 1)
                x26_5 = arg4
                x28_2 = arg5
                x27_2 = arg6
                
                if (arg21 s>= 1)
                label_bcac00:
                    fp_2 = arg7
                    
                    if (x24 != 0 && (CardIsFast(arg1, zx.q(x24), 4) & 1) != 0)
                        int32_t x8_53 = x20_1 - arg21
                        x20_1 = x8_53 & not.d(x8_53 s>> 0x1f)
                else
                    fp_2 = arg7
            else
                x26_5 = arg4
                x28_2 = arg5
                x27_2 = arg6
                uint64_t i_6 = zx.q(i_8)
                uint64_t i_4
                
                do
                    int32_t x9_33 = *fp_1
                    fp_1 += 4
                    int32_t x10_6
                    
                    if (x20_1 s> 0)
                        x10_6 = x20_1 - 1
                    else
                        x10_6 = 0
                    
                    if (x9_33 == i_2)
                        x20_1 = x10_6
                    
                    i_4 = i_6
                    i_6 -= 1
                while (i_4 != 1)
                
                if (arg21 s>= 1)
                    goto label_bcac00
                
                fp_2 = arg7
            
            int32_t x24_1 = x21_1[0x30]
            int32_t x23_1 = *(arg1 + 0xd50)
            int32_t x8_59 = (x24_1 + (x23_1 << 0x10)) s% 0x3e5
            int32_t* x9_34 = *(&data_1838a20 + (sx.q(x8_59) << 3))
            void* x0_30
            
            if (x9_34 != 0)
                while (*x9_34 != x24_1 || x9_34[1] != x23_1)
                    x9_34 = *(x9_34 + 0x10)
                    
                    if (x9_34 == 0)
                        goto label_bcac90
                
                x0_30 = *(x9_34 + 8)
            else
            label_bcac90:
                DomDefGetSlow(zx.q(x24_1), zx.q(x23_1))
                int32_t* x0_28 = malloc(0x18)
                int64_t x8_60 = sx.q(x8_59) << 3
                int64_t x9_35 = *(&data_1838a20 + x8_60)
                *x0_28 = x24_1
                x0_28[1] = x23_1
                *(&data_1838a20 + x8_60) = x0_28
                *(x0_28 + 0x10) = x9_35
                x0_30 = DomDefGetSlow(zx.q(x24_1), zx.q(x23_1))
                *(x0_28 + 8) = x0_30
            
            if ((*(x0_30 + 0xc8) & 0x9407f000400) == 0)
                int32_t x8_63 = x20_1 - arg20
                x20_1 = x8_63 & not.d(x8_63 s>> 0x1f)
        else
        label_bcab10:
            x26_5 = arg4
            x28_2 = arg5
            x27_2 = arg6
            fp_2 = arg7
        
        if (x19_5 s> fp_2 || (var_a0_2 u>> 0x20).d != 0)
            return 0
        
        if (x20_1 s<= x28_2)
            *x26_5 = false
            return 1
        
        if (x20_1 s<= x27_2 + x28_2)
            *x26_5 = true
            return 1
    else
        if (x20 u>= 0x320)
            void* x0_5 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_9 = x0_5 + sx.q(*(x0_5 + 0x13000)) * 0x98
            *(*(x8_9 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_10 = *(x8_9 - 0x90)
            *(x8_10 + 0x1a2c) = *(x8_10 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        if ((CardIsFast(arg1, zx.q(*(x21 + 0x1a70)), 4) & 1) == 0)
            goto label_bca788

return 0
