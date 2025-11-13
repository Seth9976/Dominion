// 函数: _ZNSt6__ndk19money_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE8__do_getERS4_S4_bRKNS_6localeEjRjRbRKNS_5ctypeIcEERNS_10unique_ptrIcPFvPvEEERPcSM_
// 地址: 0x10c14ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = _ReadMSR(tpidr_el0)
int64_t* x22 = arg2
int64_t var_70 = *(x9 + 0x28)
int64_t var_288
__builtin_memset(&var_288, 0, 0x78)
int64_t var_270
int64_t* var_310 = &var_270
int32_t var_28c
int32_t* var_308 = &var_28c
int64_t var_258
int64_t var_240
int64_t var_228
char var_210
char var_20c
char var_208[0x3]
std::__ndk1::__money_get<char>::__gather_info(zx.q(arg3.d) & 1, arg4, &var_208, &var_20c, &var_210, 
    &var_228, &var_240, &var_258)
void* x10_1 = &var_240 | 1
void* x12 = &var_258 | 1
void* x11 = &var_270 | 1
char* var_2c8 = nullptr
char* x27 = arg11
void var_200
void* oldmem_2 = &var_200
int64_t (* const var_2a8)(void*) = std::__ndk1::__do_nothing
int64_t x25 = 0
void* oldmem_8 = &var_200
int64_t* var_2a0 = &var_70
*arg10 = *arg9
int32_t x21_1

while (true)
    int64_t* x26_1 = *arg1
    
    if (x26_1 != 0 && x26_1[3] == x26_1[4])
        if ((*(*x26_1 + 0x48))(x26_1) != 0xffffffff)
            x26_1 = *arg1
            
            if (x22 != 0)
                goto label_10c1628
            
            goto label_10c167c
        
        x26_1 = nullptr
        *arg1 = 0
        
        if (x22 != 0)
            goto label_10c1628
        
        goto label_10c167c
    
    void* var_278
    void* var_260
    void* var_248
    void* var_230
    uint64_t var_220
    
    if (x22 == 0)
    label_10c167c:
        x22 = nullptr
        
        if (x26_1 != 0)
        label_10c1688:
            uint64_t x8_9 = zx.q(var_208[x25])
            
            if (x8_9.d u> 4)
                goto label_10c15fc
            
            switch (x8_9)
                case 0
                    SystemHintOp_BTI()
                    
                    if (x25 != 3)
                    label_10c1b44:
                        
                        while (true)
                            int64_t* x26_4 = *arg1
                            
                            if (x26_4 != 0 && x26_4[3] == x26_4[4])
                                if ((*(*x26_4 + 0x48))(x26_4) != 0xffffffff)
                                    x26_4 = *arg1
                                    
                                    if (x22 != 0)
                                        goto label_10c1b64
                                    
                                    goto label_10c1bb8
                                
                                x26_4 = nullptr
                                *arg1 = 0
                                
                                if (x22 != 0)
                                    goto label_10c1b64
                                
                                goto label_10c1bb8
                            
                            if (x22 == 0)
                            label_10c1bb8:
                                x22 = nullptr
                                
                                if (x26_4 == 0)
                                    break
                            else
                            label_10c1b64:
                                int32_t x0_26
                                
                                if (x22[3] == x22[4])
                                    x0_26 = (*(*x22 + 0x48))(x22)
                                
                                if (x22[3] == x22[4] && x0_26 == 0xffffffff)
                                    goto label_10c1bb8
                                
                                if (x26_4 != 0)
                                    break
                            
                            int64_t* x0_29 = *arg1
                            char* x8_61 = x0_29[3]
                            uint32_t x0_30
                            
                            if (x8_61 == x0_29[4])
                                x0_30 = (*(*x0_29 + 0x48))()
                            else
                                x0_30 = zx.d(*x8_61)
                            
                            if ((x0_30 & 0x80) != 0)
                                break
                            
                            if (((*(*(arg8 + 0x10) + ((zx.q(x0_30) & 0xff) << 3))).d & 1) == 0)
                                break
                            
                            int64_t* x0_31 = *arg1
                            char* x8_66 = x0_31[3]
                            
                            if (x8_66 != x0_31[4])
                                x0_31[3] = &x8_66[1]
                                *x8_66
                            else
                                (*(*x0_31 + 0x50))()
                            
                            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                                &var_288)
                        
                        goto label_10c15fc
                case 1
                    SystemHintOp_BTI()
                    
                    if (x25 != 3)
                        int64_t* x0_18 = *arg1
                        char* x8_44 = x0_18[3]
                        uint32_t x0_19
                        
                        if (x8_44 == x0_18[4])
                            x0_19 = (*(*x0_18 + 0x48))()
                        else
                            x0_19 = zx.d(*x8_44)
                        
                        if ((x0_19 & 0x80) != 0
                            || ((*(*(arg8 + 0x10) + ((zx.q(x0_19) & 0xff) << 3))).d & 1) == 0)
                        label_10c257c:
                            x21_1 = 0
                            *arg6 |= 4
                            
                            if ((zx.d(var_288.b) & 1) == 0)
                                goto label_10c2554
                            
                            goto label_10c2598
                        
                        int64_t* x0_21 = *arg1
                        char* x8_52 = x0_21[3]
                        
                        if (x8_52 == x0_21[4])
                            (*(*x0_21 + 0x50))()
                        else
                            x0_21[3] = &x8_52[1]
                            *x8_52
                        
                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                            &var_288)
                        goto label_10c1b44
                case 2
                    SystemHintOp_BTI()
                    uint32_t x8_41
                    void* x9_19
                    int32_t x10_6
                    
                    if (x25 u< 2 || var_2c8 != 0)
                        x8_41 = zx.d(var_240.b)
                        int32_t temp0_1 = x8_41 & 1
                        
                        x9_19 = temp0_1 == 0 ? x10_1 : var_230
                        
                        x10_6 = temp0_1 == 0 ? 1 : 0
                        void* x20_2 = x9_19
                        uint64_t var_238
                        
                        if (x25 != 0)
                        label_10c1a58:
                            
                            if (zx.d(var_208[zx.q(x25.d - 1)]) u> 1)
                            label_10c1c48:
                                x20_2 = x9_19
                            else
                                x20_2 = x9_19
                                uint64_t x11_9
                                
                                if (x10_6 != 0)
                                    x11_9 = zx.q(x8_41 u>> 1)
                                else
                                    x11_9 = var_238
                                
                                if (x11_9 != 0)
                                    void* x12_4 = x9_19 + x11_9
                                    x20_2 = x9_19
                                    
                                    while (true)
                                        int32_t x14_2 = sx.d(*x20_2)
                                        
                                        if ((x14_2 & 0x80000000) != 0)
                                            break
                                        
                                        if (((*(*(arg8 + 0x10) + (zx.q(x14_2.b) << 3))).d & 1) == 0)
                                            break
                                        
                                        uint64_t temp3_1 = x11_9
                                        x11_9 -= 1
                                        x20_2 += 1
                                        
                                        if (temp3_1 == 1)
                                            x20_2 = x12_4
                                            break
                                
                                uint64_t x12_5 = zx.q(var_288.b)
                                int64_t x11_10 = x20_2 - x9_19
                                uint64_t x12_6
                                void* x13_5
                                void* x14_5
                                
                                if ((x12_5.d & 1) != 0)
                                    uint64_t var_280
                                    x12_6 = var_280
                                    
                                    if (x11_10 u> x12_6)
                                        goto label_10c1c48
                                    
                                    x13_5 = var_278
                                    x14_5 = x13_5 + x12_6
                                else
                                    x12_6 = x12_5 u>> 1
                                    
                                    if (x11_10 u> x12_6)
                                        goto label_10c1c48
                                    
                                    x14_5 = &var_288 + x12_6 + 1
                                    x13_5 = &var_288 | 1
                                
                                void* x11_18 = x14_5 - x11_10
                                
                                if (x11_18 != x13_5 + x12_6)
                                    int64_t i = 0
                                    
                                    do
                                        if (zx.d(*(x11_18 + i)) != zx.d(*(x9_19 + i)))
                                            goto label_10c1c48
                                        
                                        i += 1
                                    while (x13_5 + x12_6 + x20_2 - x14_5 - x9_19 != i)
                        
                        uint64_t x8_70
                        
                        if (x10_6 != 0)
                            x8_70 = zx.q(x8_41 u>> 1)
                        else
                            x8_70 = var_238
                        
                        void* x8_74
                        uint64_t x9_34
                        
                        for (void* i_1 = x9_19 + x8_70; x20_2 != i_1; i_1 = x8_74 + x9_34)
                            int64_t* x26_5 = *arg1
                            
                            if (x26_5 != 0 && x26_5[3] == x26_5[4])
                                if ((*(*x26_5 + 0x48))(x26_5) != 0xffffffff)
                                    x26_5 = *arg1
                                    
                                    if (x22 != 0)
                                        goto label_10c1cb8
                                    
                                    goto label_10c1d0c
                                
                                x26_5 = nullptr
                                *arg1 = 0
                                
                                if (x22 != 0)
                                    goto label_10c1cb8
                                
                                goto label_10c1d0c
                            
                            if (x22 == 0)
                            label_10c1d0c:
                                x22 = nullptr
                                
                                if (x26_5 == 0)
                                    break
                            else
                            label_10c1cb8:
                                int32_t x0_36
                                
                                if (x22[3] == x22[4])
                                    x0_36 = (*(*x22 + 0x48))(x22)
                                
                                if (x22[3] == x22[4] && x0_36 == 0xffffffff)
                                    goto label_10c1d0c
                                
                                if (x26_5 != 0)
                                    break
                            
                            int64_t* x0_39 = *arg1
                            char* x8_81 = x0_39[3]
                            char x0_40
                            
                            if (x8_81 == x0_39[4])
                                x0_40 = (*(*x0_39 + 0x48))()
                            else
                                x0_40 = *x8_81
                            
                            if (zx.d(*x20_2) != zx.d(x0_40))
                                break
                            
                            int64_t* x0_41 = *arg1
                            int64_t x8_85 = x0_41[3]
                            
                            if (x8_85 != x0_41[4])
                                x0_41[3] = x8_85 + 1
                            else
                                (*(*x0_41 + 0x50))()
                            
                            uint64_t x8_72 = zx.q(var_240.b)
                            x20_2 += 1
                            int32_t temp4_1 = x8_72.d & 1
                            
                            x8_74 = temp4_1 == 0 ? x10_1 : var_230
                            
                            if (temp4_1 == 0)
                                x9_34 = x8_72 u>> 1
                            else
                                x9_34 = var_238
                        
                        if ((arg5 & 0x200) == 0)
                            goto label_10c15fc
                        
                        uint64_t x8_88 = zx.q(var_240.b)
                        int32_t temp2_1 = x8_88.d & 1
                        void* x8_90
                        
                        x8_90 = temp2_1 == 0 ? x10_1 : var_230
                        
                        uint64_t x9_40
                        
                        if (temp2_1 == 0)
                            x9_40 = x8_88 u>> 1
                        else
                            x9_40 = var_238
                        
                        if (x20_2 == x8_90 + x9_40)
                            goto label_10c15fc
                        
                        goto label_10c257c
                    
                    char var_205
                    
                    if ((((x25 == 2 ? 1 : 0) & (zx.d(var_205) != 0 ? 1 : 0)) | (arg5 u>> 9 & 1))
                            == 1)
                        x8_41 = zx.d(var_240.b)
                        int32_t temp1_1 = x8_41 & 1
                        x10_6 = temp1_1 == 0 ? 1 : 0
                        
                        x9_19 = temp1_1 == 0 ? x10_1 : var_230
                        
                        goto label_10c1a58
                    
                    var_2c8 = nullptr
                label_10c15fc:
                    x25 += 1
                    
                    if (x25 != 4)
                        continue
                case 3
                    SystemHintOp_BTI()
                    uint64_t x9_20 = zx.q(var_258.b)
                    uint64_t x8_42 = zx.q(var_270.b)
                    int32_t x10_7 = x9_20.d & 1
                    uint64_t var_250
                    uint64_t x13_2
                    
                    if (x10_7 == 0)
                        x13_2 = x9_20 u>> 1
                    else
                        x13_2 = var_250
                    
                    int32_t x11_4 = x8_42.d & 1
                    uint64_t var_268
                    uint64_t x12_2
                    
                    if (x11_4 == 0)
                        x12_2 = x8_42 u>> 1
                    else
                        x12_2 = var_268
                    
                    if (x13_2 == neg.q(x12_2))
                        goto label_10c15fc
                    
                    uint64_t x8_151
                    
                    if (x13_2 == 0)
                        int64_t* x0_33 = *arg1
                        char* x9_32 = x0_33[3]
                        char x0_34
                        
                        if (x9_32 == x0_33[4])
                            x0_34 = (*(*x0_33 + 0x48))()
                            x8_42 = zx.q(var_270.b)
                            x11_4 = x8_42.d & 1
                        else
                            x0_34 = *x9_32
                        
                        void* x9_42
                        
                        if ((x11_4 & 0xff) == 0)
                            x9_42 = x11
                        else
                            x9_42 = var_260
                        
                        if (zx.d(*x9_42) != zx.d(x0_34))
                            goto label_10c15fc
                        
                        int64_t* x0_44 = *arg1
                        int64_t x9_44 = x0_44[3]
                        
                        if (x9_44 == x0_44[4])
                            (*(*x0_44 + 0x50))()
                            x8_42 = zx.q(var_270.b)
                            x11_4 = x8_42.d & 1
                        else
                            x0_44[3] = x9_44 + 1
                        
                        *arg7 = true
                        
                        if ((x11_4 & 0xff) == 0)
                            x8_151 = zx.q(x8_42.d u>> 1)
                        else
                            x8_151 = var_268
                    else
                        int64_t* x0_16 = *arg1
                        char* x8_43 = x0_16[3]
                        int64_t x11_5 = x0_16[4]
                        
                        if (x12_2 == 0)
                            char x0_42
                            
                            if (x8_43 == x11_5)
                                x0_42 = (*(*x0_16 + 0x48))()
                                x9_20 = zx.q(var_258.b)
                                x10_7 = x9_20.d & 1
                            else
                                x0_42 = *x8_43
                            
                            void* x8_142
                            
                            if ((x10_7 & 0xff) == 0)
                                x8_142 = x12
                            else
                                x8_142 = var_248
                            
                            if (zx.d(*x8_142) != zx.d(x0_42))
                                *arg7 = true
                                goto label_10c15fc
                            
                            int64_t* x0_64 = *arg1
                            int64_t x8_144 = x0_64[3]
                            
                            if (x8_144 == x0_64[4])
                                (*(*x0_64 + 0x50))()
                            label_10c22d4:
                                x9_20 = zx.q(var_258.b)
                                x10_7 = x9_20.d & 1
                                goto label_10c22e8
                            
                            x0_64[3] = x8_144 + 1
                        label_10c22e8:
                            uint64_t x8_160
                            
                            if ((x10_7 & 0xff) == 0)
                                x8_160 = zx.q(x9_20.d u>> 1)
                            else
                                x8_160 = var_250
                            
                            char* x8_162
                            
                            x8_162 = x8_160 u> 1 ? &var_258 : var_2c8
                            
                            var_2c8 = x8_162
                            goto label_10c15fc
                        
                        char x0_17
                        
                        if (x8_43 == x11_5)
                            x0_17 = (*(*x0_16 + 0x48))()
                            x9_20 = zx.q(var_258.b)
                            x10_7 = x9_20.d & 1
                        else
                            x0_17 = *x8_43
                        
                        int64_t* x8_94 = *arg1
                        void* x11_15
                        
                        if ((x10_7 & 0xff) == 0)
                            x11_15 = x12
                        else
                            x11_15 = var_248
                        
                        char* x11_16 = x8_94[3]
                        int64_t x12_8 = x8_94[4]
                        
                        if (zx.d(*x11_15) == zx.d(x0_17))
                            if (x11_16 == x12_8)
                                (*(*x8_94 + 0x50))(x8_94)
                                goto label_10c22d4
                            
                            x8_94[3] = &x11_16[1]
                            goto label_10c22e8
                        
                        char x0_43
                        
                        if (x11_16 == x12_8)
                            x0_43 = (*(*x8_94 + 0x48))(x8_94)
                        else
                            x0_43 = *x11_16
                        
                        uint32_t x8_149 = zx.d(var_270.b)
                        int32_t x9_67 = x8_149 & 1
                        void* x10_19
                        
                        x10_19 = x9_67 == 0 ? x11 : var_260
                        
                        if (zx.d(*x10_19) != zx.d(x0_43))
                            goto label_10c257c
                        
                        int64_t* x0_67 = *arg1
                        int64_t x10_21 = x0_67[3]
                        
                        if (x10_21 == x0_67[4])
                            (*(*x0_67 + 0x50))()
                            x8_149 = zx.d(var_270.b)
                            x9_67 = x8_149 & 1
                        else
                            x0_67[3] = x10_21 + 1
                        
                        *arg7 = true
                        
                        if ((x9_67 & 0xff) == 0)
                            x8_151 = zx.q(x8_149 u>> 1)
                        else
                            x8_151 = var_268
                    
                    char* x8_156
                    
                    x8_156 = x8_151 u> 1 ? &var_270 : var_2c8
                    
                    var_2c8 = x8_156
                    goto label_10c15fc
                case 4
                    SystemHintOp_BTI()
                    int32_t x20_1 = 0
                    
                    while (true)
                        int64_t* x26_2 = *arg1
                        
                        if (x26_2 != 0 && x26_2[3] == x26_2[4])
                            if ((*(*x26_2 + 0x48))(x26_2) != 0xffffffff)
                                x26_2 = *arg1
                                
                                if (x22 != 0)
                                    goto label_10c16f0
                                
                                goto label_10c1744
                            
                            x26_2 = nullptr
                            *arg1 = 0
                            
                            if (x22 != 0)
                                goto label_10c16f0
                            
                            goto label_10c1744
                        
                        if (x22 == 0)
                        label_10c1744:
                            x22 = nullptr
                            
                            if (x26_2 == 0)
                                break
                        else
                        label_10c16f0:
                            int32_t x0_6
                            
                            if (x22[3] == x22[4])
                                x0_6 = (*(*x22 + 0x48))(x22)
                            
                            if (x22[3] == x22[4] && x0_6 == 0xffffffff)
                                goto label_10c1744
                            
                            if (x26_2 != 0)
                                break
                        
                        int64_t* x0_9 = *arg1
                        char* x8_17 = x0_9[3]
                        uint32_t x26_3
                        
                        if (x8_17 != x0_9[4])
                            x26_3 = zx.d(*x8_17)
                            
                            if ((x26_3 & 0x80) == 0
                                    && ((*(*(arg8 + 0x10) + ((zx.q(x26_3) & 0xff) << 3))).d & 0x40)
                                    != 0)
                                goto label_10c1808
                            
                            goto label_10c178c
                        
                        x26_3 = (*(*x0_9 + 0x48))()
                        
                        if ((x26_3 & 0x80) != 0
                            || ((*(*(arg8 + 0x10) + ((zx.q(x26_3) & 0xff) << 3))).d & 0x40) == 0)
                        label_10c178c:
                            uint64_t x8_22 = zx.q(var_228.b)
                            uint64_t x8_23
                            
                            if ((x8_22.d & 1) == 0)
                                x8_23 = x8_22 u>> 1
                            else
                                x8_23 = var_220
                            
                            if (zx.d(var_210) != zx.d(x26_3.b))
                                break
                            
                            if (x20_1 == 0)
                                break
                            
                            if (x8_23 == 0)
                                break
                            
                            if (oldmem_8 == var_2a0)
                                int64_t x19 = var_2a0 - oldmem_2
                                size_t bytes_4
                                
                                if (var_2a0 == oldmem_2)
                                    bytes_4 = 4
                                else
                                    bytes_4 = x19 << 1
                                
                                size_t bytes
                                
                                bytes = x19 u< 0x7fffffffffffffff ? bytes_4 : -1
                                
                                void* oldmem_6
                                
                                if (var_2a8 == std::__ndk1::__do_nothing)
                                    oldmem_6 = malloc(bytes)
                                    
                                    if (oldmem_6 == 0)
                                    label_10c2628:
                                        void* oldmem_3 = oldmem_2
                                        std::__throw_bad_alloc()
                                        noreturn
                                else
                                    oldmem_6 = realloc(oldmem_2, bytes)
                                    
                                    if (oldmem_6 == 0)
                                        goto label_10c2628
                                
                                var_2a0 = oldmem_6 + (bytes & 0xfffffffffffffffc)
                                oldmem_8 = oldmem_6 + x19
                                oldmem_2 = oldmem_6
                                var_2a8 = free
                            
                            *oldmem_8 = x20_1
                            oldmem_8 += 4
                            x20_1 = 0
                        else
                        label_10c1808:
                            char* x8_28 = *arg10
                            char*& x10_5
                            
                            if (x8_28 == x27)
                                int64_t oldmem = *arg9
                                void* x28 = x27 - oldmem
                                size_t bytes_6
                                
                                if (x27 != oldmem)
                                    bytes_6 = x28 << 1
                                else
                                    bytes_6 = 1
                                
                                size_t bytes_3
                                
                                bytes_3 = x28 u< 0x7fffffffffffffff ? bytes_6 : -1
                                
                                void* x0_12
                                
                                if (*(arg9 + 8) == std::__ndk1::__do_nothing)
                                    x0_12 = malloc(bytes_3)
                                    
                                    if (x0_12 == 0)
                                        std::__throw_bad_alloc()
                                        noreturn
                                else
                                    x0_12 = realloc(oldmem, bytes_3)
                                    
                                    if (x0_12 == 0)
                                        std::__throw_bad_alloc()
                                        noreturn
                                
                                void** x9_12 = arg9
                                *x9_12 = x0_12
                                x10_5 = arg10
                                x9_12[1] = free
                                x8_28 = x0_12 + x28
                                *x10_5 = x8_28
                                x27 = *x9_12 + bytes_3
                            else
                                x10_5 = arg10
                            
                            x20_1 += 1
                            *x10_5 = &x8_28[1]
                            *x8_28 = x26_3.b
                        
                        int64_t* x0_15 = *arg1
                        int64_t x8_33 = x0_15[3]
                        
                        if (x8_33 != x0_15[4])
                            x0_15[3] = x8_33 + 1
                        else
                            (*(*x0_15 + 0x50))()
                    
                    if (oldmem_2 != oldmem_8 && x20_1 != 0)
                        if (oldmem_8 == var_2a0)
                            int64_t x19_1 = var_2a0 - oldmem_2
                            size_t bytes_5
                            
                            if (var_2a0 == oldmem_2)
                                bytes_5 = 4
                            else
                                bytes_5 = x19_1 << 1
                            
                            size_t bytes_1
                            
                            bytes_1 = x19_1 u< 0x7fffffffffffffff ? bytes_5 : -1
                            
                            void* oldmem_7
                            
                            if (var_2a8 == std::__ndk1::__do_nothing)
                                oldmem_7 = malloc(bytes_1)
                                
                                if (oldmem_7 == 0)
                                label_10c263c:
                                    void* oldmem_5 = oldmem_2
                                    std::__throw_bad_alloc()
                                    noreturn
                            else
                                oldmem_7 = realloc(oldmem_2, bytes_1)
                                
                                if (oldmem_7 == 0)
                                    goto label_10c263c
                            
                            var_2a0 = oldmem_7 + (bytes_1 & 0xfffffffffffffffc)
                            oldmem_8 = oldmem_7 + x19_1
                            oldmem_2 = oldmem_7
                            var_2a8 = free
                        
                        *oldmem_8 = x20_1
                        oldmem_8 += 4
                    
                    if (var_28c s>= 1)
                        int64_t* x26_6 = *arg1
                        
                        if (x26_6 != 0 && x26_6[3] == x26_6[4])
                            if ((*(*x26_6 + 0x48))(x26_6) != 0xffffffff)
                                x26_6 = *arg1
                                
                                if (x22 != 0)
                                    goto label_10c1ef4
                                
                                goto label_10c1f48
                            
                            x26_6 = nullptr
                            *arg1 = 0
                            
                            if (x22 != 0)
                                goto label_10c1ef4
                            
                            goto label_10c1f48
                        
                        if (x22 == 0)
                        label_10c1f48:
                            
                            if (x26_6 == 0)
                                goto label_10c257c
                            
                            x22 = nullptr
                        else
                        label_10c1ef4:
                            int32_t x0_47
                            
                            if (x22[3] == x22[4])
                                x0_47 = (*(*x22 + 0x48))(x22)
                            
                            if (x22[3] == x22[4] && x0_47 == 0xffffffff)
                                goto label_10c1f48
                            
                            if (x26_6 != 0)
                                goto label_10c257c
                        
                        int64_t* x0_50 = *arg1
                        char* x8_106 = x0_50[3]
                        char x0_51
                        
                        if (x8_106 == x0_50[4])
                            x0_51 = (*(*x0_50 + 0x48))()
                        else
                            x0_51 = *x8_106
                        
                        if (zx.d(var_20c) != zx.d(x0_51))
                            goto label_10c257c
                        
                        int64_t* x0_52 = *arg1
                        int64_t x8_110 = x0_52[3]
                        
                        if (x8_110 == x0_52[4])
                            (*(*x0_52 + 0x50))()
                        else
                            x0_52[3] = x8_110 + 1
                        
                        if (var_28c s>= 1)
                            while (true)
                                int64_t* x26_7 = *arg1
                                
                                if (x26_7 != 0 && x26_7[3] == x26_7[4])
                                    if ((*(*x26_7 + 0x48))(x26_7) != 0xffffffff)
                                        x26_7 = *arg1
                                        
                                        if (x22 != 0)
                                            goto label_10c2000
                                        
                                        goto label_10c2054
                                    
                                    x26_7 = nullptr
                                    *arg1 = 0
                                    
                                    if (x22 != 0)
                                        goto label_10c2000
                                    
                                    goto label_10c2054
                                
                                if (x22 == 0)
                                label_10c2054:
                                    
                                    if (x26_7 == 0)
                                        goto label_10c257c
                                    
                                    x22 = nullptr
                                else
                                label_10c2000:
                                    int32_t x0_54
                                    
                                    if (x22[3] == x22[4])
                                        x0_54 = (*(*x22 + 0x48))(x22)
                                    
                                    if (x22[3] == x22[4] && x0_54 == 0xffffffff)
                                        goto label_10c2054
                                    
                                    if (x26_7 != 0)
                                        goto label_10c257c
                                
                                int64_t* x0_57 = *arg1
                                char* x8_123 = x0_57[3]
                                uint32_t x0_58
                                
                                if (x8_123 == x0_57[4])
                                    x0_58 = (*(*x0_57 + 0x48))()
                                else
                                    x0_58 = zx.d(*x8_123)
                                
                                if ((x0_58 & 0x80) != 0)
                                    goto label_10c257c
                                
                                if (((*(*(arg8 + 0x10) + ((zx.q(x0_58) & 0xff) << 3))).d & 0x40)
                                        == 0)
                                    goto label_10c257c
                                
                                char* x8_129 = *arg10
                                
                                if (x8_129 == x27)
                                    int64_t oldmem_1 = *arg9
                                    void* x20_3 = x27 - oldmem_1
                                    size_t bytes_7
                                    
                                    if (x27 != oldmem_1)
                                        bytes_7 = x20_3 << 1
                                    else
                                        bytes_7 = 1
                                    
                                    size_t bytes_2
                                    
                                    bytes_2 = x20_3 u< 0x7fffffffffffffff ? bytes_7 : -1
                                    
                                    void* x0_59
                                    char*& x9_58
                                    
                                    if (*(arg9 + 8) == std::__ndk1::__do_nothing)
                                        x0_59 = malloc(bytes_2)
                                        x9_58 = arg10
                                        
                                        if (x0_59 == 0)
                                        label_10c2634:
                                            void* oldmem_4 = oldmem_2
                                            std::__throw_bad_alloc()
                                            noreturn
                                    else
                                        x0_59 = realloc(oldmem_1, bytes_2)
                                        x9_58 = arg10
                                        
                                        if (x0_59 == 0)
                                            goto label_10c2634
                                    
                                    *arg9 = x0_59
                                    *(arg9 + 8) = free
                                    x8_129 = x0_59 + x20_3
                                    *x9_58 = x8_129
                                    x27 = *arg9 + bytes_2
                                
                                int64_t* x0_61 = *arg1
                                char* x9_60 = x0_61[3]
                                char x0_62
                                void** x10_16
                                
                                if (x9_60 == x0_61[4])
                                    x0_62 = (*(*x0_61 + 0x48))()
                                    x10_16 = arg10
                                    x8_129 = *x10_16
                                else
                                    x0_62 = *x9_60
                                    x10_16 = arg10
                                
                                *x10_16 = &x8_129[1]
                                *x8_129 = x0_62
                                int32_t x8_135 = var_28c - 1
                                var_28c = x8_135
                                int64_t* x0_63 = *arg1
                                int64_t x9_62 = x0_63[3]
                                
                                if (x9_62 != x0_63[4])
                                    x0_63[3] = x9_62 + 1
                                    
                                    if (x8_135 s<= 0)
                                        break
                                else
                                    (*(*x0_63 + 0x50))()
                                    
                                    if (var_28c s<= 0)
                                        break
                    
                    if (*arg10 != *arg9)
                        goto label_10c15fc
                    
                    goto label_10c257c
    else
    label_10c1628:
        int32_t x0_2
        
        if (x22[3] == x22[4])
            x0_2 = (*(*x22 + 0x48))(x22)
        
        if (x22[3] == x22[4] && x0_2 == 0xffffffff)
            goto label_10c167c
        
        if (x26_1 == 0)
            goto label_10c1688
    
    if (var_2c8 != 0)
        int32_t x23_1 = 1
        
        while (true)
            uint64_t x8_164 = zx.q(*var_2c8)
            uint64_t x24_1 = zx.q(x23_1)
            
            if ((x8_164.d & 1) != 0)
                if (*(var_2c8 + 8) u<= x24_1)
                    break
            else if (x8_164 u>> 1 u<= x24_1)
                break
            
            int64_t* x23_2 = *arg1
            
            if (x23_2 != 0 && x23_2[3] == x23_2[4])
                if ((*(*x23_2 + 0x48))(x23_2) != 0xffffffff)
                    x23_2 = *arg1
                    
                    if (x22 != 0)
                        goto label_10c2368
                    
                    goto label_10c23bc
                
                x23_2 = nullptr
                *arg1 = 0
                
                if (x22 != 0)
                    goto label_10c2368
                
                goto label_10c23bc
            
            if (x22 == 0)
            label_10c23bc:
                
                if (x23_2 == 0)
                    goto label_10c257c
                
                x22 = nullptr
            else
            label_10c2368:
                int32_t x0_69
                
                if (x22[3] == x22[4])
                    x0_69 = (*(*x22 + 0x48))(x22)
                
                if (x22[3] == x22[4] && x0_69 == 0xffffffff)
                    goto label_10c23bc
                
                if (x23_2 != 0)
                    goto label_10c257c
            
            int64_t* x0_72 = *arg1
            char* x8_173 = x0_72[3]
            char x0_73
            
            if (x8_173 == x0_72[4])
                x0_73 = (*(*x0_72 + 0x48))()
            else
                x0_73 = *x8_173
            
            void* x8_176 = &var_2c8[1]
            
            if ((zx.d(*var_2c8) & 1) != 0)
                x8_176 = *(var_2c8 + 0x10)
            
            if (zx.d(*(x8_176 + x24_1)) != zx.d(x0_73))
                goto label_10c257c
            
            int64_t* x0_74 = *arg1
            x23_1 = x24_1.d + 1
            int64_t x8_178 = x0_74[3]
            
            if (x8_178 != x0_74[4])
                x0_74[3] = x8_178 + 1
            else
                (*(*x0_74 + 0x50))()
    
    char* var_218
    
    if (oldmem_2 == oldmem_8)
        x21_1 = 1
        oldmem_2 = oldmem_8
        
        if ((zx.d(var_288.b) & 1) == 0)
        label_10c2554:
            
            if ((zx.d(var_270.b) & 1) != 0)
                goto label_10c25a8
            
            goto label_10c255c
        
    label_10c2598:
        operator delete(var_278)
        
        if ((zx.d(var_270.b) & 1) != 0)
        label_10c25a8:
            operator delete(var_260)
            
            if ((zx.d(var_258.b) & 1) == 0)
                goto label_10c2564
            
            goto label_10c25b8
        
    label_10c255c:
        
        if ((zx.d(var_258.b) & 1) == 0)
        label_10c2564:
            
            if ((zx.d(var_240.b) & 1) != 0)
                goto label_10c25c8
            
            goto label_10c256c
        
    label_10c25b8:
        operator delete(var_248)
        
        if ((zx.d(var_240.b) & 1) != 0)
        label_10c25c8:
            operator delete(var_230)
            
            if ((zx.d(var_228.b) & 1) == 0)
                goto label_10c2570
            
            goto label_10c25d8
        
    label_10c256c:
        
        if ((zx.d(var_228.b) & 1) != 0)
        label_10c25d8:
            operator delete(var_218)
            
            if (oldmem_2 == 0)
                break
        else
        label_10c2570:
            
            if (oldmem_2 == 0)
                break
        
        var_2a8(oldmem_2)
        break
    
    uint64_t x9_76 = zx.q(var_228.b)
    uint64_t x8_182
    
    if ((x9_76.d & 1) == 0)
        x8_182 = x9_76 u>> 1
    else
        x8_182 = var_220
    
    if (x8_182 == 0 || oldmem_8 - oldmem_2 s< 5)
    label_10c2544:
        x21_1 = 1
    else
        char* x9_79
        
        if (oldmem_8 - 4 u> oldmem_2)
            void* x9_77 = oldmem_2 + 4
            void* x10_26 = oldmem_8 - 4
            bool cond:7_1
            
            do
                int32_t x12_13 = *(x9_77 - 4)
                *(x9_77 - 4) = *x10_26
                *x10_26 = x12_13
                x10_26 -= 4
                cond:7_1 = x9_77 u< x10_26
                x9_77 += 4
            while (cond:7_1)
            uint64_t x10_27 = zx.q(var_228.b)
            
            if ((x10_27.d & 1) == 0)
                x9_79 = &var_228 | 1
            else
                x9_79 = var_218
            
            if (oldmem_8 - 4 u> oldmem_2)
                uint64_t x10_28
                
                if ((x10_27.d & 1) == 0)
                    x10_28 = x10_27 u>> 1
                else
                    x10_28 = var_220
                
                void* i_2 = oldmem_2
                
                do
                    uint32_t x12_16 = zx.d(*x9_79)
                    
                    if (x12_16 != 0 && x12_16 != 0xff && *i_2 != x12_16)
                        goto label_10c257c
                    
                    i_2 += 4
                    
                    if (&x9_79[x10_28] - x9_79 s> 1)
                        x9_79 = &x9_79[1]
                while (i_2 u< oldmem_8 - 4)
        else if ((x9_76.d & 1) == 0)
            x9_79 = &var_228 | 1
        else
            x9_79 = var_218
        
        uint32_t x9_80 = zx.d(*x9_79)
        x21_1 = 1
        
        if (x9_80 != 0 && x9_80 != 0xff)
            if (*(oldmem_8 - 4) - 1 u>= x9_80)
                goto label_10c257c
            
            goto label_10c2544
    
    if ((zx.d(var_288.b) & 1) != 0)
        goto label_10c2598
    
    goto label_10c2554

if (*(x9 + 0x28) == var_70)
    return zx.q(x21_1)

__stack_chk_fail()
noreturn
