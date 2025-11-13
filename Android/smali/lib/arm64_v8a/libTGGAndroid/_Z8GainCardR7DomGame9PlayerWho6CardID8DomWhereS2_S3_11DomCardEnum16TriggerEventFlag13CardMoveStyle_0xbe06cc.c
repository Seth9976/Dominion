// 函数: _Z8GainCardR7DomGame9PlayerWho6CardID8DomWhereS2_S3_11DomCardEnum16TriggerEventFlag13CardMoveStyle
// 地址: 0xbe06cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg3 & 0xffff
int32_t x25 = arg7
int32_t x27 = arg6
int32_t x23 = arg5
int32_t x24 = arg4
int32_t x26 = arg3
int32_t x21 = arg2
int32_t var_64 = arg3

if (x19 u>= 0x320)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_4 = *(x8_3 - 0x90)
    *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

if ((LimitGainableCards(arg1, zx.q(x21), zx.q(*(arg1 + mulu.dp.d(x19, 0x68) + 0x1a70))) & 1) == 0)
    uint64_t x28_1 = zx.q(x19)
    int32_t x8_7
    
    if (*(arg1 + 0x19d4) == x21)
        x8_7 = *(arg1 + 0x19d8)
    
    int32_t fp_1
    
    if (*(arg1 + 0x19d4) == x21 && x8_7 != x21)
        fp_1 = 0
        x24 = 0x476
        x21 = x8_7
        
        if (x27 == 0x476)
            goto label_be0890
        
        goto label_be07d0
    
    fp_1 = 1
    
    if (x27 == 0x476)
    label_be0890:
        
        if (x24 != 0x476)
            goto label_be08c8
        
        void* x9_10 = *(arg1 + mulu.dp.d(x26, 0x68) + 0x1a68)
        int64_t x10_1 = 0
        int32_t* x11_1 = x9_10 + 0xe0
        int32_t i = *x11_1
        int32_t var_d0_1
        void* __offset(DomGame, 0x1285) fp_2
        
        if (i == 0)
        label_be08c4:
            x24 = 0x3ec
        label_be08c8:
            var_d0_1 = fp_1
            fp_2 = arg1 + 0x1285
            
            if (x19 u>= 0x320)
            label_be08e0:
                void* x0_7 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_17 = x0_7 + sx.q(*(x0_7 + 0x13000)) * 0x98
                *(*(x8_17 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_18 = *(x8_17 - 0x90)
                *(x8_18 + 0x1a2c) = *(x8_18 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
        else
            while (i != 5)
                x10_1 += 1
                x11_1 = &x11_1[0x30]
                i = *x11_1
                
                if (i == 0)
                    goto label_be08c4
            
            x24 = *(x9_10 + (x10_1 & 0xffffffff) * 0xc0 + 0xf8)
            var_d0_1 = fp_1
            fp_2 = arg1 + 0x1285
            
            if (x19 u>= 0x320)
                goto label_be08e0
        
        void* x0_9 = __emutls_get_address(__emutls_v.gContextStack_tl)
        SnapshotGainTriggerInfo(arg1, zx.q(x21), zx.q(x26), 
            *(x0_9 + sx.q(*(x0_9 + 0x13000)) * 0x98 - 0x58))
        int32_t var_f0
        uint64_t x2_2
        
        if (x24 == 0x474)
            int32_t x19_1 = x23 & 0xffff
            
            if (x19_1 u>= 0x320)
                void* x0_12 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_24 = x0_12 + sx.q(*(x0_12 + 0x13000)) * 0x98
                *(*(x8_24 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_25 = *(x8_24 - 0x90)
                *(x8_25 + 0x1a2c) = *(x8_25 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
            
            if (*(arg1 + 0x150c) - 3 u>= 4 && zx.d(*(fp_2 + 0x283)) == 0)
                var_f0 = 0
                
                if (*(arg1 + 0x19d4) == x21)
                    x2_2 = zx.q(*(arg1 + 0x19d8))
                else
                    x2_2 = zx.q(x21)
                
                int32_t var_f8_1 = 0
                int32_t var_100_1 = *(arg1 + mulu.dp.d(x19_1, 0x68) + 0x1a70)
                DomAddLogEvent(arg1, zx.q(x21), x2_2, 0x23, zx.q(x25), &var_64, 1, 0x474)
        else if (*(arg1 + 0x150c) - 3 u>= 4 && zx.d(*(fp_2 + 0x283)) == 0)
            if (*(arg1 + 0x19d4) == x21)
                x2_2 = zx.q(*(arg1 + 0x19d8))
            else
                x2_2 = zx.q(x21)
            
            var_f0 = 0
            int32_t var_f8_2 = 0
            int32_t var_100_2 = 0
            DomAddLogEvent(arg1, zx.q(x21), x2_2, 0x22, zx.q(x25), &var_64, 1, 0)
        void* x9_17 = arg1 + muls.dp.d(x21, 0x5a30)
        int32_t x8_35 = var_64
        int64_t x10_3 = sx.q(*(x9_17 + 0x181a4))
        uint64_t x19_2 = zx.q(x8_35.w)
        *(x9_17 + 0x181a4) = x10_3.d + 1
        *(x9_17 + (x10_3 << 2) + 0x18218) = x8_35
        
        if (x19_2.d u>= 0x320)
            void* x0_15 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_38 = x0_15 + sx.q(*(x0_15 + 0x13000)) * 0x98
            *(*(x8_38 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_39 = *(x8_38 - 0x90)
            *(x8_39 + 0x1a2c) = *(x8_39 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        int32_t x0_17 = CardIsFast(arg1, zx.q(*(arg1 + x19_2 * 0x68 + 0x1a70)), 4)
        uint64_t x19_3 = zx.q(var_64.w)
        
        if (x19_3.d u>= 0x320)
            void* x0_19 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_43 = x0_19 + sx.q(*(x0_19 + 0x13000)) * 0x98
            *(*(x8_43 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_44 = *(x8_43 - 0x90)
            *(x8_44 + 0x1a2c) = *(x8_44 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        int64_t x19_4 = sx.q(x21)
        int32_t x0_21 = CardIsFast(arg1, zx.q(*(arg1 + x19_3 * 0x68 + 0x1a70)), 2)
        void* x8_48
        
        if ((x0_17 & 1) != 0)
            void* x8_46 = arg1 + x19_4 * 0x5a30
            *(x8_46 + 0x181a8) += 1
            
            if ((x0_21 & 1) != 0)
                goto label_be0bd4
            
            x8_48 = arg1 + x19_4 * 0x5a30
            *(x8_48 + 0x181b0) += 1
        else if ((x0_21 & 1) != 0)
        label_be0bd4:
            void* x8_47 = arg1 + x19_4 * 0x5a30
            *(x8_47 + 0x181ac) += 1
            x8_48 = arg1 + x19_4 * 0x5a30
            *(x8_48 + 0x181b0) += 1
        int32_t x8_50 = *(arg1 + 0x19f4)
        
        if ((x8_50 & 0xfffffffe) == 2 && zx.d(*(fp_2 + 0x75b)) != 0 && *(arg1 + 0x19d4) == x21)
            void* x8_49 = arg1 + x19_4 * 0x5a30
            int64_t x10_11 = sx.q(*(x8_49 + 0x181ec))
            int32_t x11_2 = var_64
            *(x8_49 + 0x181ec) = x10_11.d + 1
            *(x8_49 + (x10_11 << 2) + 0x1b418) = x11_2
            x8_50 = *(arg1 + 0x19f4)
        
        if ((x8_50 & 0xfffffffe) == 2)
            void* x8_52 = arg1 + x19_4 * 0x5a30
            *(x8_52 + 0x181d4) += 1
        
        uint64_t x22_1 = zx.q(var_64.w)
        
        if (x22_1.d u>= 0x320)
            void* x0_23 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_55 = x0_23 + sx.q(*(x0_23 + 0x13000)) * 0x98
            *(*(x8_55 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_56 = *(x8_55 - 0x90)
            *(x8_56 + 0x1a2c) = *(x8_56 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        if ((CardIsFast(arg1, zx.q(*(arg1 + x22_1 * 0x68 + 0x1a70)), 8) & 1) != 0)
            void* x8_58 = arg1 + x19_4 * 0x5a30
            *(x8_58 + 0x181d8) |= 1
        
        uint64_t x22_2 = zx.q(var_64.w)
        
        if (x22_2.d u>= 0x320)
            void* x0_27 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_61 = x0_27 + sx.q(*(x0_27 + 0x13000)) * 0x98
            *(*(x8_61 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_62 = *(x8_61 - 0x90)
            *(x8_62 + 0x1a2c) = *(x8_62 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        if (*(arg1 + x22_2 * 0x68 + 0x1a70) == 0x106)
            void* x8_65 = arg1 + x19_4 * 0x5a30
            *(x8_65 + 0x181d8) |= 2
            
            if (*(x9_17 + 0x181a4) s>= 3)
                goto label_be0f04
            
            goto label_be0db8
        
        uint64_t x22_3
        
        if (*(x9_17 + 0x181a4) s< 3)
        label_be0db8:
            x22_3 = zx.q(var_64.w)
            
            if (x22_3.d u>= 0x320)
            label_be0dcc:
                void* x0_29 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_70 = x0_29 + sx.q(*(x0_29 + 0x13000)) * 0x98
                *(*(x8_70 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_71 = *(x8_70 - 0x90)
                *(x8_71 + 0x1a2c) = *(x8_71 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
        else
        label_be0f04:
            void* x8_89 = arg1 + x19_4 * 0x5a30
            *(x8_89 + 0x181d8) |= 8
            x22_3 = zx.q(var_64.w)
            
            if (x22_3.d u>= 0x320)
                goto label_be0dcc
        
        if (*(arg1 + x22_3 * 0x68 + 0x1a70) != 0xf1c)
            *(arg1 + 0x19b0) = var_64
        
        int32_t x25_2 = arg9.d
        
        if (*(arg1 + 0x150c) - 3 u>= 3 && (*(arg1 + 0x19e8) - 1) s/ *(arg1 + 0xd40) s<= 1)
            uint64_t x22_4 = zx.q(var_64.w)
            
            if (x22_4.d u>= 0x320)
                void* x0_31 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_82 = x0_31 + sx.q(*(x0_31 + 0x13000)) * 0x98
                *(*(x8_82 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_83 = *(x8_82 - 0x90)
                *(x8_83 + 0x1a2c) = *(x8_83 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
            
            int32_t* x9_36 = arg1 + x19_4 * 0xc8 + 0x6080c
            int32_t x8_85 = *(arg1 + x22_4 * 0x68 + 0x1a70)
            int32_t x10_19 = *x9_36
            int64_t x8_86
            
            if (x10_19 == x8_85)
                x8_86 = 0
            label_be144c:
                void* x8_91 = arg1 + x19_4 * 0xc8 + (x8_86 << 3)
                *(x8_91 + 0x60810) += 1
            else
                int64_t x10_25
                
                if (x10_19 == 0)
                    x10_25 = 0
                label_be1474:
                    *x9_36 = x8_85
                    *(arg1 + x19_4 * 0xc8 + (x10_25 << 3) + 0x60810) = 1
                else
                    x9_36 = arg1 + x19_4 * 0xc8 + 0x60814
                    int32_t x10_24 = *x9_36
                    
                    if (x10_24 == x8_85)
                        x8_86 = 1
                        goto label_be144c
                    
                    if (x10_24 == 0)
                        x10_25 = 1
                        goto label_be1474
                    
                    x9_36 = arg1 + x19_4 * 0xc8 + 0x6081c
                    int32_t x10_26 = *x9_36
                    
                    if (x10_26 == x8_85)
                        x8_86 = 2
                        goto label_be144c
                    
                    if (x10_26 == 0)
                        x10_25 = 2
                        goto label_be1474
                    
                    x9_36 = arg1 + x19_4 * 0xc8 + 0x60824
                    int32_t x10_27 = *x9_36
                    
                    if (x10_27 == x8_85)
                        x8_86 = 3
                        goto label_be144c
                    
                    if (x10_27 == 0)
                        x10_25 = 3
                        goto label_be1474
                    
                    x9_36 = arg1 + x19_4 * 0xc8 + 0x6082c
                    int32_t x10_28 = *x9_36
                    
                    if (x10_28 == x8_85)
                        x8_86 = 4
                        goto label_be144c
                    
                    if (x10_28 == 0)
                        x10_25 = 4
                        goto label_be1474
                    
                    x9_36 = arg1 + x19_4 * 0xc8 + 0x60834
                    int32_t x10_29 = *x9_36
                    
                    if (x10_29 == x8_85)
                        x8_86 = 5
                        goto label_be144c
                    
                    if (x10_29 == 0)
                        x10_25 = 5
                        goto label_be1474
                    
                    x9_36 = arg1 + x19_4 * 0xc8 + 0x6083c
                    int32_t x10_30 = *x9_36
                    
                    if (x10_30 == x8_85)
                        x8_86 = 6
                        goto label_be144c
                    
                    if (x10_30 == 0)
                        x10_25 = 6
                        goto label_be1474
                    
                    x9_36 = arg1 + x19_4 * 0xc8 + 0x60844
                    int32_t x10_31 = *x9_36
                    
                    if (x10_31 == x8_85)
                        x8_86 = 7
                        goto label_be144c
                    
                    if (x10_31 == 0)
                        x10_25 = 7
                        goto label_be1474
                    
                    x9_36 = arg1 + x19_4 * 0xc8 + 0x6084c
                    int32_t x10_32 = *x9_36
                    
                    if (x10_32 == x8_85)
                        x8_86 = 8
                        goto label_be144c
                    
                    if (x10_32 == 0)
                        x10_25 = 8
                        goto label_be1474
                    
                    x9_36 = arg1 + x19_4 * 0xc8 + 0x60854
                    int32_t x10_33 = *x9_36
                    
                    if (x10_33 == x8_85)
                        x8_86 = 9
                        goto label_be144c
                    
                    if (x10_33 == 0)
                        x10_25 = 9
                        goto label_be1474
                    
                    x9_36 = arg1 + x19_4 * 0xc8 + 0x6085c
                    int32_t x10_34 = *x9_36
                    
                    if (x10_34 == x8_85)
                        x8_86 = 0xa
                        goto label_be144c
                    
                    if (x10_34 == 0)
                        x10_25 = 0xa
                        goto label_be1474
                    
                    x9_36 = arg1 + x19_4 * 0xc8 + 0x60864
                    int32_t x10_35 = *x9_36
                    
                    if (x10_35 == x8_85)
                        x8_86 = 0xb
                        goto label_be144c
                    
                    if (x10_35 == 0)
                        x10_25 = 0xb
                        goto label_be1474
                    
                    x9_36 = arg1 + x19_4 * 0xc8 + 0x6086c
                    int32_t x10_36 = *x9_36
                    
                    if (x10_36 == x8_85)
                        x8_86 = 0xc
                        goto label_be144c
                    
                    if (x10_36 == 0)
                        x10_25 = 0xc
                        goto label_be1474
                    
                    x9_36 = arg1 + x19_4 * 0xc8 + 0x60874
                    int32_t x10_37 = *x9_36
                    
                    if (x10_37 == x8_85)
                        x8_86 = 0xd
                        goto label_be144c
                    
                    if (x10_37 == 0)
                        x10_25 = 0xd
                        goto label_be1474
                    
                    x9_36 = arg1 + x19_4 * 0xc8 + 0x6087c
                    int32_t x10_38 = *x9_36
                    
                    if (x10_38 == x8_85)
                        x8_86 = 0xe
                        goto label_be144c
                    
                    if (x10_38 == 0)
                        x10_25 = 0xe
                        goto label_be1474
                    
                    x9_36 = arg1 + x19_4 * 0xc8 + 0x60884
                    int32_t x10_39 = *x9_36
                    
                    if (x10_39 == x8_85)
                        x8_86 = 0xf
                        goto label_be144c
                    
                    if (x10_39 == 0)
                        x10_25 = 0xf
                        goto label_be1474
                    
                    x9_36 = arg1 + x19_4 * 0xc8 + 0x6088c
                    int32_t x10_40 = *x9_36
                    
                    if (x10_40 == x8_85)
                        x8_86 = 0x10
                        goto label_be144c
                    
                    if (x10_40 == 0)
                        x10_25 = 0x10
                        goto label_be1474
                    
                    x9_36 = arg1 + x19_4 * 0xc8 + 0x60894
                    int32_t x10_41 = *x9_36
                    
                    if (x10_41 == x8_85)
                        x8_86 = 0x11
                        goto label_be144c
                    
                    if (x10_41 == 0)
                        x10_25 = 0x11
                        goto label_be1474
                    
                    x9_36 = arg1 + x19_4 * 0xc8 + 0x6089c
                    int32_t x10_42 = *x9_36
                    
                    if (x10_42 == x8_85)
                        x8_86 = 0x12
                        goto label_be144c
                    
                    if (x10_42 == 0)
                        x10_25 = 0x12
                        goto label_be1474
                    
                    x9_36 = arg1 + x19_4 * 0xc8 + 0x608a4
                    int32_t x10_43 = *x9_36
                    
                    if (x10_43 == x8_85)
                        x8_86 = 0x13
                        goto label_be144c
                    
                    if (x10_43 == 0)
                        x10_25 = 0x13
                        goto label_be1474
                    
                    x9_36 = arg1 + x19_4 * 0xc8 + 0x608ac
                    int32_t x10_44 = *x9_36
                    
                    if (x10_44 == x8_85)
                        x8_86 = 0x14
                        goto label_be144c
                    
                    if (x10_44 == 0)
                        x10_25 = 0x14
                        goto label_be1474
                    
                    x9_36 = arg1 + x19_4 * 0xc8 + 0x608b4
                    int32_t x10_45 = *x9_36
                    
                    if (x10_45 == x8_85)
                        x8_86 = 0x15
                        goto label_be144c
                    
                    if (x10_45 == 0)
                        x10_25 = 0x15
                        goto label_be1474
                    
                    x9_36 = arg1 + x19_4 * 0xc8 + 0x608bc
                    int32_t x10_46 = *x9_36
                    
                    if (x10_46 == x8_85)
                        x8_86 = 0x16
                        goto label_be144c
                    
                    if (x10_46 == 0)
                        x10_25 = 0x16
                        goto label_be1474
                    
                    x9_36 = arg1 + x19_4 * 0xc8 + 0x608c4
                    int32_t x10_47 = *x9_36
                    
                    if (x10_47 == x8_85)
                        x8_86 = 0x17
                        goto label_be144c
                    
                    if (x10_47 == 0)
                        x10_25 = 0x17
                        goto label_be1474
                    
                    x9_36 = arg1 + x19_4 * 0xc8 + 0x608cc
                    int32_t x10_48 = *x9_36
                    
                    if (x10_48 == x8_85)
                        x8_86 = 0x18
                        goto label_be144c
                    
                    if (x10_48 == 0)
                        x10_25 = 0x18
                        goto label_be1474
        
        int32_t x26_1 = var_64
        int32_t var_100_3
        char var_b4
        
        if (x24 != 0x474)
            int32_t var_e0_1 = 0
            int32_t var_f0_1 = 0
            int32_t var_f8_4 = 0
            char* var_e8_1 = &var_b4
            var_100_3 = 0
            MoveCardToSafe(arg1, zx.q(x21), zx.q(x26_1), zx.q(x25_2), zx.q(x24), 0, 0, 0)
        else
            uint64_t x22_5 = zx.q(x26_1.w)
            
            if (x22_5.d u>= 0x320)
                void* x0_33 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_95 = x0_33 + sx.q(*(x0_33 + 0x13000)) * 0x98
                *(*(x8_95 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_96 = *(x8_95 - 0x90)
                *(x8_96 + 0x1a2c) = *(x8_96 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
            
            int32_t var_f8_3 = 0
            var_f0.q = &var_b4
            var_100_3 = 1
            MoveCardToCard(arg1, zx.q(x21), zx.q(x26_1), zx.q(*(arg1 + x22_5 * 0x68 + 0x1a74)), 
                zx.q(x23), zx.q(x25_2), 0, 0)
        
        void* x8_98 = arg1 + x28_1 * 0x68
        *(x8_98 + 0x1a7c) = *(x8_98 + 0x1a74)
        
        if (zx.d(*fp_2) != 0)
            uint64_t x22_6 = zx.q(var_64.w)
            
            if (x22_6.d u>= 0x320)
                void* x0_37 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_102 = x0_37 + sx.q(*(x0_37 + 0x13000)) * 0x98
                *(*(x8_102 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_103 = *(x8_102 - 0x90)
                *(x8_103 + 0x1a2c) = *(x8_103 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
            
            uint64_t x22_7
            
            if (*(arg1 + x22_6 * 0x68 + 0x1a70) != 0x103)
                x22_7 = zx.q(var_64.w)
                
                if (x22_7.d u>= 0x320)
                    void* x0_39 = __emutls_get_address(__emutls_v.gContextStack_tl)
                    void* x8_108 = x0_39 + sx.q(*(x0_39 + 0x13000)) * 0x98
                    *(*(x8_108 - 0x90) + 0x1a28) = 0xffffffff
                    void* x8_109 = *(x8_108 - 0x90)
                    *(x8_109 + 0x1a2c) = *(x8_109 + 0x1a24)
                    XTrace("game thread yield (error)")
                    xco_yield()
                    XTrace("game thread resume (error)")
            
            if ((*(arg1 + x22_6 * 0x68 + 0x1a70) == 0x103
                    || *(arg1 + x22_7 * 0x68 + 0x1a70) == 0x601) && *(x9_17 + 0x181a4) s>= 2)
                int64_t i_1 = 0
                
                do
                    uint64_t x27_1 = zx.q(*(arg1 + x19_4 * 0x5a30 + 0x18218 + (i_1 << 2)))
                    
                    if (x27_1.d u> 0x31f)
                        void* x0_42 = __emutls_get_address(__emutls_v.gContextStack_tl)
                        void* x8_123 = x0_42 + sx.q(*(x0_42 + 0x13000)) * 0x98
                        *(*(x8_123 - 0x90) + 0x1a28) = 0xffffffff
                        void* x8_124 = *(x8_123 - 0x90)
                        *(x8_124 + 0x1a2c) = *(x8_124 + 0x1a24)
                        XTrace("game thread yield (error)")
                        xco_yield()
                        XTrace("game thread resume (error)")
                        void* x8_125 = arg1 + mulu.dp.d(x27_1.d, 0x68)
                        
                        if (*(x8_125 + 0x1a70) == 0x103)
                        label_be16ec:
                            int32_t var_f8_5 = 0
                            var_100_3 = 0xffffffff
                            AddTokens(arg1, zx.q(x21), 0x601, 4, 0x476, 0, 0, 0)
                        else
                            void* x0_44 = __emutls_get_address(__emutls_v.gContextStack_tl)
                            void* x8_128 = x0_44 + sx.q(*(x0_44 + 0x13000)) * 0x98
                            *(*(x8_128 - 0x90) + 0x1a28) = 0xffffffff
                            void* x8_129 = *(x8_128 - 0x90)
                            *(x8_129 + 0x1a2c) = *(x8_129 + 0x1a24)
                            XTrace("game thread yield (error)")
                            xco_yield()
                            XTrace("game thread resume (error)")
                            
                            if (*(x8_125 + 0x1a70) == 0x601)
                                goto label_be16ec
                    else
                        int32_t x8_120 = *(arg1 + x27_1 * 0x68 + 0x1a70)
                        
                        if (x8_120 == 0x103 || x8_120 == 0x601)
                            goto label_be16ec
                    
                    i_1 += 1
                while (i_1 s< sx.q(*(x9_17 + 0x181a4)) - 1)
        
        CalcScores(arg1)
        int64_t x3_4
        
        if (zx.d(var_b4) != 0)
            x3_4 = 2
        else
            x3_4 = 1
        
        int64_t var_c0 = 0x1300000008
        var_100_3.q = 0
        TriggerInfo var_b0
        TriggerEvents(arg1, zx.q(x21), &var_c0, x3_4, &var_b0, zx.q(arg8), &var_64, 1)
        return zx.q(var_d0_1)
    
label_be07d0:
    
    if (x19 u>= 0x320)
        void* x0_5 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_10 = x0_5 + sx.q(*(x0_5 + 0x13000)) * 0x98
        *(*(x8_10 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_11 = *(x8_10 - 0x90)
        *(x8_11 + 0x1a2c) = *(x8_11 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
    
    int32_t x8_13 = *(arg1 + x28_1 * 0x68 + 0x1a74)
    
    if (x8_13 != 0x3eb || *(arg1 + sx.q(*(arg1 + x28_1 * 0x68 + 0x1a94)) * 0x5a30 + 0x17f74) == x26)
        if (x27 != 7)
            if (x27 != 0x451)
                if (x8_13 == x27 || ((x27 == 0x3e9 ? 1 : 0) & (x8_13 == 0x451 ? 1 : 0)) != 0)
                    goto label_be0890
            else if (x8_13 == 0x3e9 || x8_13 == x27
                    || ((x27 == 0x3e9 ? 1 : 0) & (x8_13 == 0x451 ? 1 : 0)) != 0)
                goto label_be0890
        else if (x8_13 - 7 u< 0x41)
            goto label_be0890

return 0
