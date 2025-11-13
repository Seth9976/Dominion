// 函数: _ZNSt6__ndk19money_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE8__do_getERS4_S4_bRKNS_6localeEjRjRbRKNS_5ctypeIwEERNS_10unique_ptrIwPFvPvEEERPwSM_
// 地址: 0x10c31f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = _ReadMSR(tpidr_el0)
uint32_t x20 = arg5
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
wchar_t var_210
wchar_t var_20c
char var_208[0x3]
std::__ndk1::__money_get<wchar_t>::__gather_info(zx.q(arg3.d) & 1, arg4, &var_208, &var_20c, 
    &var_210, &var_228, &var_240, &var_258)
int32_t x9_2 = x20 u>> 9 & 1
void* i_3 = &var_240 | 4
void* x12 = &var_258 | 4
void* x9_3 = &var_270 | 4
char* var_2c8 = nullptr
wchar_t* x27 = arg11
void var_200
void* oldmem = &var_200
int64_t x25 = 0
int64_t* var_298 = &var_70
void* oldmem_7 = &var_200
int64_t (* const var_2b8)(void*) = std::__ndk1::__do_nothing
*arg10 = *arg9
uint32_t var_2bc = x20
void* var_278
void* var_260
void* var_248
void* i_6
char* var_218
void* oldmem_5
int32_t x21_1

while (true)
    int64_t* x0_1 = *arg1
    
    if (x0_1 == 0)
        goto label_10c3378
    
    int32_t* x8_4 = x0_1[3]
    int32_t x0_2
    
    if (x8_4 == x0_1[4])
        x0_2 = (*(*x0_1 + 0x48))()
    else
        x0_2 = *x8_4
    
    int32_t x24_1
    
    if (x0_2 != 0xffffffff)
        x24_1 = *arg1 == 0 ? 1 : 0
        
        if (x22 != 0)
            goto label_10c3380
        
        goto label_10c33b4
    
    *arg1 = 0
label_10c3378:
    x24_1 = 1
    
    if (x22 != 0)
    label_10c3380:
        int32_t* x8_8 = x22[3]
        int32_t x0_3
        
        if (x8_8 == x22[4])
            x0_3 = (*(*x22 + 0x48))(x22)
        else
            x0_3 = *x8_8
        
        if (x0_3 == 0xffffffff)
            goto label_10c33b4
        
        if ((x24_1 & 1) != 0)
            goto label_10c33c0
        
        goto label_10c40f4
    
label_10c33b4:
    x22 = nullptr
    uint32_t& x9_72
    uint64_t var_220
    
    if ((x24_1 & 1) != 0)
    label_10c40f4:
        
        if (var_2c8 != 0)
            int32_t x23_1 = 1
            
            while (true)
                uint64_t x8_170 = zx.q(*var_2c8)
                uint64_t x23_2 = zx.q(x23_1)
                
                if ((x8_170.d & 1) != 0)
                    if (*(var_2c8 + 8) u<= x23_2)
                        goto label_10c4304
                else if (x8_170 u>> 1 u<= x23_2)
                    goto label_10c4304
                
                int64_t* x0_80 = *arg1
                
                if (x0_80 == 0)
                    goto label_10c4184
                
                int32_t* x8_173 = x0_80[3]
                int32_t x0_81
                
                if (x8_173 == x0_80[4])
                    x0_81 = (*(*x0_80 + 0x48))()
                else
                    x0_81 = *x8_173
                
                int32_t x24_6
                
                if (x0_81 != 0xffffffff)
                    x24_6 = *arg1 == 0 ? 1 : 0
                    
                    if (x22 != 0)
                        goto label_10c418c
                    
                    goto label_10c4174
                
                *arg1 = 0
            label_10c4184:
                x24_6 = 1
                
                if (x22 == 0)
                label_10c4174:
                    
                    if ((x24_6 & 1) != 0)
                        break
                    
                    x22 = nullptr
                else
                label_10c418c:
                    int32_t* x8_177 = x22[3]
                    int32_t x0_82
                    
                    if (x8_177 == x22[4])
                        x0_82 = (*(*x22 + 0x48))(x22)
                    else
                        x0_82 = *x8_177
                    
                    if (x0_82 == 0xffffffff)
                        x22 = nullptr
                    
                    if (x24_6 == (x0_82 == 0xffffffff ? 1 : 0))
                        break
                
                int64_t* x0_84 = *arg1
                int32_t* x8_181 = x0_84[3]
                int32_t x0_85
                
                if (x8_181 == x0_84[4])
                    x0_85 = (*(*x0_84 + 0x48))()
                else
                    x0_85 = *x8_181
                
                void* x8_184 = &var_2c8[4]
                
                if ((zx.d(*var_2c8) & 1) != 0)
                    x8_184 = *(var_2c8 + 0x10)
                
                if (x0_85 != *(x8_184 + (x23_2 << 2)))
                    break
                
                int64_t* x0_86 = *arg1
                x23_1 = x23_2.d + 1
                int64_t x8_186 = x0_86[3]
                
                if (x8_186 != x0_86[4])
                    x0_86[3] = x8_186 + 4
                else
                    (*(*x0_86 + 0x50))()
            
            goto label_10c4228
        
    label_10c4304:
        oldmem_5 = oldmem
        
        if (oldmem_5 == oldmem_7)
            x21_1 = 1
            oldmem_5 = oldmem_7
            break
        
        uint64_t x9_74 = zx.q(var_228.b)
        uint64_t x8_204
        
        if ((x9_74.d & 1) == 0)
            x8_204 = x9_74 u>> 1
        else
            x8_204 = var_220
        
        if (x8_204 == 0 || oldmem_7 - oldmem_5 s< 5)
            x21_1 = 1
            break
        
        char* x9_77
        
        if (oldmem_7 - 4 u<= oldmem_5)
            if ((x9_74.d & 1) == 0)
                x9_77 = &var_228 | 1
            else
                x9_77 = var_218
            
            goto label_10c43f8
        
        void* x9_75 = oldmem_5 + 4
        void* x10_21 = oldmem_7 - 4
        bool cond:6_1
        
        do
            int32_t x12_14 = *(x9_75 - 4)
            *(x9_75 - 4) = *x10_21
            *x10_21 = x12_14
            x10_21 -= 4
            cond:6_1 = x9_75 u< x10_21
            x9_75 += 4
        while (cond:6_1)
        uint64_t x10_22 = zx.q(var_228.b)
        
        if ((x10_22.d & 1) == 0)
            x9_77 = &var_228 | 1
        else
            x9_77 = var_218
        
        if (oldmem_7 - 4 u<= oldmem_5)
        label_10c43f8:
            uint32_t x9_78 = zx.d(*x9_77)
            x21_1 = 1
            
            if (x9_78 == 0)
                break
            
            if (x9_78 == 0xff)
                break
            
            if (*(oldmem_7 - 4) - 1 u< x9_78)
                x21_1 = 1
                break
            
            x9_72 = arg6
        else
            uint64_t x10_23
            
            if ((x10_22.d & 1) == 0)
                x10_23 = x10_22 u>> 1
            else
                x10_23 = var_220
            
            void* oldmem_6 = oldmem_5
            
            while (true)
                uint32_t x12_17 = zx.d(*x9_77)
                
                if (x12_17 != 0 && x12_17 != 0xff && *oldmem_6 != x12_17)
                    break
                
                oldmem_6 += 4
                
                if (&x9_77[x10_23] - x9_77 s> 1)
                    x9_77 = &x9_77[1]
                
                if (oldmem_6 u>= oldmem_7 - 4)
                    goto label_10c43f8
            
            x9_72 = arg6
    else
    label_10c33c0:
        uint64_t x8_11 = zx.q(var_208[x25])
        
        if (x8_11.d u> 4)
            goto label_10c3324
        
        switch (x8_11)
            case 0
                SystemHintOp_BTI()
                
                if (x25 == 3)
                    goto label_10c40f4
                
            label_10c3884:
                
                while (true)
                    int64_t* x0_31 = *arg1
                    
                    if (x0_31 == 0)
                        goto label_10c38cc
                    
                    int32_t* x8_60 = x0_31[3]
                    int32_t x0_32
                    
                    if (x8_60 == x0_31[4])
                        x0_32 = (*(*x0_31 + 0x48))()
                    else
                        x0_32 = *x8_60
                    
                    int32_t x24_3
                    
                    if (x0_32 != 0xffffffff)
                        x24_3 = *arg1 == 0 ? 1 : 0
                        
                        if (x22 != 0)
                            goto label_10c38d4
                        
                        goto label_10c3908
                    
                    *arg1 = 0
                label_10c38cc:
                    x24_3 = 1
                    
                    if (x22 == 0)
                    label_10c3908:
                        x22 = nullptr
                        
                        if ((x24_3 & 1) != 0)
                            break
                    else
                    label_10c38d4:
                        int32_t* x8_64 = x22[3]
                        int32_t x0_33
                        
                        if (x8_64 == x22[4])
                            x0_33 = (*(*x22 + 0x48))(x22)
                        else
                            x0_33 = *x8_64
                        
                        if (x0_33 == 0xffffffff)
                            goto label_10c3908
                        
                        if (x24_3 == 0)
                            break
                    
                    int64_t* x0_35 = *arg1
                    int32_t* x8_67 = x0_35[3]
                    uint64_t x2_4
                    
                    if (x8_67 == x0_35[4])
                        x2_4 = zx.q((*(*x0_35 + 0x48))())
                    else
                        x2_4 = zx.q(*x8_67)
                    
                    if (((*(*arg8 + 0x18))(arg8, 1, x2_4) & 1) == 0)
                        break
                    
                    int64_t* x0_39 = *arg1
                    int32_t* x8_72 = x0_39[3]
                    
                    if (x8_72 != x0_39[4])
                        x0_39[3] = &x8_72[1]
                        *x8_72
                    else
                        (*(*x0_39 + 0x50))()
                    
                    std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::push_back(
                        &var_288)
                
                goto label_10c3324
            case 1
                SystemHintOp_BTI()
                
                if (x25 == 3)
                    goto label_10c40f4
                
                int64_t* x0_20 = *arg1
                int32_t* x8_46 = x0_20[3]
                uint64_t x2_2
                
                if (x8_46 == x0_20[4])
                    x2_2 = zx.q((*(*x0_20 + 0x48))())
                else
                    x2_2 = zx.q(*x8_46)
                
                if (((*(*arg8 + 0x18))(arg8, 1, x2_2) & 1) != 0)
                    int64_t* x0_27 = *arg1
                    int32_t* x8_57 = x0_27[3]
                    
                    if (x8_57 == x0_27[4])
                        (*(*x0_27 + 0x50))()
                    else
                        x0_27[3] = &x8_57[1]
                        *x8_57
                    
                    std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::push_back(
                        &var_288)
                    goto label_10c3884
                
            label_10c4228:
                x9_72 = arg6
                oldmem_5 = oldmem
            case 2
                SystemHintOp_BTI()
                uint64_t var_238
                uint64_t x8_43
                int32_t x9_21
                void* i_4
                void* i_5
                int32_t x11_2
                void* i_1
                char var_205
                
                if (x25 u< 2 || var_2c8 != 0)
                    x8_43 = zx.q(var_240.b)
                    i_4 = i_6
                    x9_21 = x8_43.d & 1
                    x11_2 = x9_21 == 0 ? 1 : 0
                    
                    i_1 = x9_21 == 0 ? i_3 : i_4
                    
                    if (x25 == 0 || zx.d(var_208[zx.q(x25.d - 1)]) u> 1)
                    label_10c3804:
                        i_5 = i_1
                    label_10c3b18:
                        uint64_t x8_81
                        
                        if ((x9_21 & 0xff) == 0)
                            x8_81 = zx.q(x8_43.d u>> 1)
                        else
                            x8_81 = var_238
                        
                        void* i_7
                        uint64_t x9_38
                        
                        for (void* i = i_5 + (x8_81 << 2); i_1 != i; i = i_7 + (x9_38 << 2))
                            int64_t* x0_48 = *arg1
                            
                            if (x0_48 == 0)
                                goto label_10c3ba0
                            
                            int32_t* x8_85 = x0_48[3]
                            int32_t x0_49
                            
                            if (x8_85 == x0_48[4])
                                x0_49 = (*(*x0_48 + 0x48))()
                            else
                                x0_49 = *x8_85
                            
                            int32_t x26_3
                            
                            if (x0_49 != 0xffffffff)
                                x26_3 = *arg1 == 0 ? 1 : 0
                                
                                if (x22 != 0)
                                    goto label_10c3ba8
                                
                                goto label_10c3bdc
                            
                            *arg1 = 0
                        label_10c3ba0:
                            x26_3 = 1
                            
                            if (x22 == 0)
                            label_10c3bdc:
                                x22 = nullptr
                                
                                if ((x26_3 & 1) != 0)
                                    break
                            else
                            label_10c3ba8:
                                int32_t* x8_89 = x22[3]
                                int32_t x0_50
                                
                                if (x8_89 == x22[4])
                                    x0_50 = (*(*x22 + 0x48))(x22)
                                else
                                    x0_50 = *x8_89
                                
                                if (x0_50 == 0xffffffff)
                                    goto label_10c3bdc
                                
                                if (x26_3 == 0)
                                    break
                            
                            int64_t* x0_52 = *arg1
                            int32_t* x8_92 = x0_52[3]
                            int32_t x0_53
                            
                            if (x8_92 == x0_52[4])
                                x0_53 = (*(*x0_52 + 0x48))()
                            else
                                x0_53 = *x8_92
                            
                            if (x0_53 != *i_1)
                                break
                            
                            int64_t* x0_54 = *arg1
                            int64_t x8_96 = x0_54[3]
                            
                            if (x8_96 != x0_54[4])
                                x0_54[3] = x8_96 + 4
                            else
                                (*(*x0_54 + 0x50))()
                            
                            uint64_t x8_83 = zx.q(var_240.b)
                            i_1 += 4
                            int32_t temp1_1 = x8_83.d & 1
                            
                            i_7 = temp1_1 == 0 ? i_3 : i_6
                            
                            if (temp1_1 == 0)
                                x9_38 = x8_83 u>> 1
                            else
                                x9_38 = var_238
                        
                        if ((x20 & 0x200) == 0)
                            goto label_10c3324
                        
                        uint64_t x8_99 = zx.q(var_240.b)
                        int32_t temp0_1 = x8_99.d & 1
                        void* i_8
                        
                        i_8 = temp0_1 == 0 ? i_3 : i_6
                        
                        uint64_t x9_44
                        
                        if (temp0_1 == 0)
                            x9_44 = x8_99 u>> 1
                        else
                            x9_44 = var_238
                        
                        if (i_1 == i_8 + (x9_44 << 2))
                            goto label_10c3324
                        
                        goto label_10c4228
                else if ((((x25 == 2 ? 1 : 0) & (zx.d(var_205) != 0 ? 1 : 0)) | x9_2) != 1)
                    var_2c8 = nullptr
                label_10c3324:
                    x25 += 1
                    
                    if (x25 == 4)
                        goto label_10c40f4
                    
                    continue
                else
                    x8_43 = zx.q(var_240.b)
                    i_4 = i_6
                    x9_21 = x8_43.d & 1
                    x11_2 = x9_21 == 0 ? 1 : 0
                    
                    i_1 = x9_21 == 0 ? i_3 : i_4
                    
                    if (zx.d(var_208[zx.q(x25.d - 1)]) u> 1)
                        goto label_10c3804
                uint64_t x11_6
                
                if (x11_2 != 0)
                    x11_6 = zx.q(x8_43.d u>> 1)
                else
                    x11_6 = var_238
                
                if (x11_6 != 0)
                    uint64_t x11_8
                    void* i_9
                    
                    do
                        if (((*(*arg8 + 0x18))(arg8, 1, zx.q(*i_1)) & 1) == 0)
                            x8_43 = zx.q(var_240.b)
                            i_4 = i_6
                            x9_21 = x8_43.d & 1
                            break
                        
                        x8_43 = zx.q(var_240.b)
                        i_4 = i_6
                        i_1 += 4
                        x9_21 = x8_43.d & 1
                        
                        i_9 = x9_21 == 0 ? i_3 : i_4
                        
                        if (x9_21 == 0)
                            x11_8 = x8_43 u>> 1
                        else
                            x11_8 = var_238
                    while (i_1 != i_9 + (x11_8 << 2))
                
                uint64_t x12_9 = zx.q(var_288.b)
                
                if ((x9_21 & 0xff) == 0)
                    i_5 = i_3
                else
                    i_5 = i_4
                
                void* x11_11 = i_1 - i_5
                int64_t x13_5 = x11_11 s>> 2
                uint64_t x12_10
                void* x14_3
                void* x15_1
                
                if ((x12_9.d & 1) != 0)
                    uint64_t var_280
                    x12_10 = var_280
                    
                    if (x13_5 u<= x12_10)
                        x15_1 = var_278
                        x14_3 = x15_1 + (x12_10 << 2)
                    label_10c3ab0:
                        void* x13_7 = x14_3 - (x13_5 << 2)
                        
                        if (x13_7 != x15_1 + (x12_10 << 2))
                            void* x0_46
                            
                            x0_46 = x11_11 s>= 0 ? x11_11 : -ffffffffffffffff
                            
                            void* x17_1 = i_5 - i_1
                            void* x0_47
                            
                            x0_47 = x0_46 s< 1 ? x0_46 : 1
                            
                            void* x11_16
                            
                            x11_16 = x17_1 s> x11_11 ? x17_1 : x11_11
                            
                            int64_t i_2 = 0
                            
                            do
                                if (*(x13_7 + i_2) != *(i_5 + i_2))
                                    goto label_10c39f4_1
                                
                                i_2 += 4
                            while (x15_1 + ((x12_10 + x0_47 * (x11_16 u>> 2)) << 2) - x14_3 != i_2)
                    else
                    label_10c39f4:
                        i_1 = i_5
                else
                    x12_10 = x12_9 u>> 1
                    
                    if (x13_5 u<= x12_10)
                        x15_1 = &var_288 | 4
                        x14_3 = &var_288 + (x12_10 << 2) + 4
                        goto label_10c3ab0
                    
                label_10c39f4_1:
                    i_1 = i_5
                goto label_10c3b18
            case 3
                SystemHintOp_BTI()
                uint64_t x9_22 = zx.q(var_258.b)
                uint64_t x8_44 = zx.q(var_270.b)
                int32_t x10_4 = x9_22.d & 1
                uint64_t var_250
                uint64_t x13_2
                
                if (x10_4 == 0)
                    x13_2 = x9_22 u>> 1
                else
                    x13_2 = var_250
                
                int32_t x11_4 = x8_44.d & 1
                uint64_t var_268
                uint64_t x12_3
                
                if (x11_4 == 0)
                    x12_3 = x8_44 u>> 1
                else
                    x12_3 = var_268
                
                if (x13_2 == neg.q(x12_3))
                    goto label_10c3324
                
                uint64_t x8_157
                
                if (x13_2 == 0)
                    int64_t* x0_41 = *arg1
                    int32_t* x9_31 = x0_41[3]
                    int32_t x0_42
                    
                    if (x9_31 == x0_41[4])
                        x0_42 = (*(*x0_41 + 0x48))()
                        x8_44 = zx.q(var_270.b)
                        x11_4 = x8_44.d & 1
                    else
                        x0_42 = *x9_31
                    
                    void* x9_33
                    
                    if ((x11_4 & 0xff) == 0)
                        x9_33 = x9_3
                    else
                        x9_33 = var_260
                    
                    if (x0_42 != *x9_33)
                        goto label_10c3324
                    
                    int64_t* x0_45 = *arg1
                    int64_t x9_35 = x0_45[3]
                    
                    if (x9_35 == x0_45[4])
                        (*(*x0_45 + 0x50))()
                        x8_44 = zx.q(var_270.b)
                        x11_4 = x8_44.d & 1
                    else
                        x0_45[3] = x9_35 + 4
                    
                    *arg7 = true
                    
                    if ((x11_4 & 0xff) == 0)
                        x8_157 = zx.q(x8_44.d u>> 1)
                    else
                        x8_157 = var_268
                else
                    int64_t* x0_18 = *arg1
                    int32_t* x8_45 = x0_18[3]
                    int64_t x11_5 = x0_18[4]
                    
                    if (x12_3 == 0)
                        int32_t x0_43
                        
                        if (x8_45 == x11_5)
                            x0_43 = (*(*x0_18 + 0x48))()
                            x9_22 = zx.q(var_258.b)
                            x10_4 = x9_22.d & 1
                        else
                            x0_43 = *x8_45
                        
                        void* x8_148
                        
                        if ((x10_4 & 0xff) == 0)
                            x8_148 = x12
                        else
                            x8_148 = var_248
                        
                        if (x0_43 != *x8_148)
                            *arg7 = true
                            goto label_10c3324
                        
                        int64_t* x0_76 = *arg1
                        int64_t x8_150 = x0_76[3]
                        
                        if (x8_150 == x0_76[4])
                            (*(*x0_76 + 0x50))()
                        label_10c40c0:
                            x9_22 = zx.q(var_258.b)
                            x10_4 = x9_22.d & 1
                            goto label_10c40d8
                        
                        x0_76[3] = x8_150 + 4
                    label_10c40d8:
                        uint64_t x8_166
                        
                        if ((x10_4 & 0xff) == 0)
                            x8_166 = zx.q(x9_22.d u>> 1)
                        else
                            x8_166 = var_250
                        
                        char* x8_168
                        
                        x8_168 = x8_166 u> 1 ? &var_258 : var_2c8
                        
                        var_2c8 = x8_168
                        goto label_10c3324
                    
                    int32_t x0_19
                    
                    if (x8_45 == x11_5)
                        x0_19 = (*(*x0_18 + 0x48))()
                        x9_22 = zx.q(var_258.b)
                        x10_4 = x9_22.d & 1
                    else
                        x0_19 = *x8_45
                    
                    int64_t* x8_77 = *arg1
                    void* x11_13
                    
                    if ((x10_4 & 0xff) == 0)
                        x11_13 = x12
                    else
                        x11_13 = var_248
                    
                    int32_t* x11_14 = x8_77[3]
                    int64_t x12_12 = x8_77[4]
                    
                    if (x0_19 == *x11_13)
                        if (x11_14 == x12_12)
                            (*(*x8_77 + 0x50))(x8_77)
                            goto label_10c40c0
                        
                        x8_77[3] = &x11_14[1]
                        goto label_10c40d8
                    
                    int32_t x0_44
                    
                    if (x11_14 == x12_12)
                        x0_44 = (*(*x8_77 + 0x48))(x8_77)
                    else
                        x0_44 = *x11_14
                    
                    uint32_t x8_155 = zx.d(var_270.b)
                    int32_t x9_63 = x8_155 & 1
                    void* x10_14
                    
                    x10_14 = x9_63 == 0 ? x9_3 : var_260
                    
                    if (x0_44 != *x10_14)
                        goto label_10c4228
                    
                    int64_t* x0_79 = *arg1
                    int64_t x10_16 = x0_79[3]
                    
                    if (x10_16 == x0_79[4])
                        (*(*x0_79 + 0x50))()
                        x8_155 = zx.d(var_270.b)
                        x9_63 = x8_155 & 1
                    else
                        x0_79[3] = x10_16 + 4
                    
                    *arg7 = true
                    
                    if ((x9_63 & 0xff) == 0)
                        x8_157 = zx.q(x8_155 u>> 1)
                    else
                        x8_157 = var_268
                
                char* x8_162
                
                x8_162 = x8_157 u> 1 ? &var_270 : var_2c8
                
                var_2c8 = x8_162
                goto label_10c3324
            case 4
                SystemHintOp_BTI()
                int32_t x24_2 = 0
                
                while (true)
                    int64_t* x0_5 = *arg1
                    
                    if (x0_5 == 0)
                        goto label_10c3450
                    
                    int32_t* x8_13 = x0_5[3]
                    int32_t x0_6
                    
                    if (x8_13 == x0_5[4])
                        x0_6 = (*(*x0_5 + 0x48))()
                    else
                        x0_6 = *x8_13
                    
                    int32_t x26_1
                    
                    if (x0_6 != 0xffffffff)
                        x26_1 = *arg1 == 0 ? 1 : 0
                        
                        if (x22 != 0)
                            goto label_10c3458
                        
                        goto label_10c348c
                    
                    *arg1 = 0
                label_10c3450:
                    x26_1 = 1
                    
                    if (x22 == 0)
                    label_10c348c:
                        x22 = nullptr
                        
                        if ((x26_1 & 1) != 0)
                            break
                    else
                    label_10c3458:
                        int32_t* x8_17 = x22[3]
                        int32_t x0_7
                        
                        if (x8_17 == x22[4])
                            x0_7 = (*(*x22 + 0x48))(x22)
                        else
                            x0_7 = *x8_17
                        
                        if (x0_7 == 0xffffffff)
                            goto label_10c348c
                        
                        if (x26_1 == 0)
                            break
                    
                    int64_t* x0_9 = *arg1
                    int32_t* x8_20 = x0_9[3]
                    int32_t x26_2
                    
                    if (x8_20 == x0_9[4])
                        x26_2 = (*(*x0_9 + 0x48))()
                    else
                        x26_2 = *x8_20
                    
                    if (((*(*arg8 + 0x18))(arg8, 0x40, zx.q(x26_2)) & 1) == 0)
                        uint64_t x8_28 = zx.q(var_228.b)
                        uint64_t x8_29
                        
                        if ((x8_28.d & 1) == 0)
                            x8_29 = x8_28 u>> 1
                        else
                            x8_29 = var_220
                        
                        if (x26_2 != var_210)
                            break
                        
                        if (x24_2 == 0)
                            break
                        
                        if (x8_29 == 0)
                            break
                        
                        if (oldmem_7 == var_298)
                            int64_t x19 = var_298 - oldmem
                            size_t bytes_4
                            
                            if (var_298 == oldmem)
                                bytes_4 = 4
                            else
                                bytes_4 = x19 << 1
                            
                            size_t bytes
                            
                            bytes = x19 u< 0x7fffffffffffffff ? bytes_4 : -1
                            
                            void* oldmem_3
                            
                            if (var_2b8 == std::__ndk1::__do_nothing)
                                oldmem_3 = malloc(bytes)
                                
                                if (oldmem_3 == 0)
                                    std::__throw_bad_alloc()
                                    noreturn
                            else
                                oldmem_3 = realloc(oldmem, bytes)
                                
                                if (oldmem_3 == 0)
                                    std::__throw_bad_alloc()
                                    noreturn
                            
                            var_298 = oldmem_3 + (bytes & 0xfffffffffffffffc)
                            oldmem = oldmem_3
                            oldmem_7 = oldmem_3 + x19
                            var_2b8 = free
                        
                        *oldmem_7 = x24_2
                        oldmem_7 += 4
                        x24_2 = 0
                    else
                        void* x8_25 = *arg10
                        
                        if (x8_25 == x27)
                            int64_t oldmem_1 = *arg9
                            void* x20_1 = x27 - oldmem_1
                            size_t bytes_6
                            
                            if (x27 == oldmem_1)
                                bytes_6 = 4
                            else
                                bytes_6 = x20_1 << 1
                            
                            size_t bytes_3
                            
                            bytes_3 = x20_1 u< 0x7fffffffffffffff ? bytes_6 : -1
                            
                            void* x0_13
                            
                            if (*(arg9 + 8) == std::__ndk1::__do_nothing)
                                x0_13 = malloc(bytes_3)
                                
                                if (x0_13 == 0)
                                    std::__throw_bad_alloc()
                                    noreturn
                            else
                                x0_13 = realloc(oldmem_1, bytes_3)
                                
                                if (x0_13 == 0)
                                    std::__throw_bad_alloc()
                                    noreturn
                            
                            void** x9_15 = arg9
                            *x9_15 = x0_13
                            x9_15[1] = free
                            x8_25 = x0_13 + x20_1
                            *arg10 = x8_25
                            x20 = var_2bc
                            x27 = *x9_15 + (bytes_3 & 0xfffffffffffffffc)
                        
                        *arg10 = x8_25 + 4
                        *x8_25 = x26_2
                        x24_2 += 1
                    
                    int64_t* x0_17 = *arg1
                    int64_t x8_35 = x0_17[3]
                    
                    if (x8_35 != x0_17[4])
                        x0_17[3] = x8_35 + 4
                    else
                        (*(*x0_17 + 0x50))()
                
                if (oldmem != oldmem_7 && x24_2 != 0)
                    if (oldmem_7 == var_298)
                        void* x19_1 = var_298 - oldmem
                        size_t bytes_5
                        
                        if (var_298 == oldmem)
                            bytes_5 = 4
                        else
                            bytes_5 = x19_1 << 1
                        
                        size_t bytes_1
                        
                        bytes_1 = x19_1 u< 0x7fffffffffffffff ? bytes_5 : -1
                        
                        void* oldmem_4
                        
                        if (var_2b8 == std::__ndk1::__do_nothing)
                            oldmem_4 = malloc(bytes_1)
                            
                            if (oldmem_4 == 0)
                                std::__throw_bad_alloc()
                                noreturn
                        else
                            oldmem_4 = realloc(oldmem, bytes_1)
                            
                            if (oldmem_4 == 0)
                                std::__throw_bad_alloc()
                                noreturn
                        
                        var_298 = oldmem_4 + (bytes_1 & 0xfffffffffffffffc)
                        oldmem = oldmem_4
                        oldmem_7 = oldmem_4 + x19_1
                        var_2b8 = free
                    
                    *oldmem_7 = x24_2
                    oldmem_7 += 4
                
                if (var_28c s>= 1)
                    int64_t* x0_56 = *arg1
                    
                    if (x0_56 == 0)
                        goto label_10c3cfc
                    
                    int32_t* x8_105 = x0_56[3]
                    int32_t x0_57
                    
                    if (x8_105 == x0_56[4])
                        x0_57 = (*(*x0_56 + 0x48))()
                    else
                        x0_57 = *x8_105
                    
                    int32_t x24_4
                    
                    if (x0_57 != 0xffffffff)
                        x24_4 = *arg1 == 0 ? 1 : 0
                        
                        if (x22 != 0)
                            goto label_10c3d04
                        
                        goto label_10c3cec
                    
                    *arg1 = 0
                label_10c3cfc:
                    x24_4 = 1
                    
                    if (x22 == 0)
                    label_10c3cec:
                        
                        if ((x24_4 & 1) != 0)
                            goto label_10c4228
                        
                        x22 = nullptr
                    else
                    label_10c3d04:
                        int32_t* x8_109 = x22[3]
                        int32_t x0_58
                        
                        if (x8_109 == x22[4])
                            x0_58 = (*(*x22 + 0x48))(x22)
                        else
                            x0_58 = *x8_109
                        
                        if (x0_58 == 0xffffffff)
                            x22 = nullptr
                        
                        if (x24_4 == (x0_58 == 0xffffffff ? 1 : 0))
                            goto label_10c4228
                    
                    int64_t* x0_60 = *arg1
                    int32_t* x8_113 = x0_60[3]
                    int32_t x0_61
                    
                    if (x8_113 == x0_60[4])
                        x0_61 = (*(*x0_60 + 0x48))()
                    else
                        x0_61 = *x8_113
                    
                    if (x0_61 != var_20c)
                        goto label_10c4228
                    
                    int64_t* x0_62 = *arg1
                    int64_t x8_117 = x0_62[3]
                    
                    if (x8_117 == x0_62[4])
                        (*(*x0_62 + 0x50))()
                    else
                        x0_62[3] = x8_117 + 4
                    
                    if (var_28c s>= 1)
                        while (true)
                            int64_t* x0_63 = *arg1
                            
                            if (x0_63 == 0)
                                goto label_10c3e04
                            
                            int32_t* x8_122 = x0_63[3]
                            int32_t x0_64
                            
                            if (x8_122 == x0_63[4])
                                x0_64 = (*(*x0_63 + 0x48))()
                            else
                                x0_64 = *x8_122
                            
                            int32_t x24_5
                            
                            if (x0_64 != 0xffffffff)
                                x24_5 = *arg1 == 0 ? 1 : 0
                                
                                if (x22 != 0)
                                    goto label_10c3e0c
                                
                                goto label_10c3df4
                            
                            *arg1 = 0
                        label_10c3e04:
                            x24_5 = 1
                            
                            if (x22 == 0)
                            label_10c3df4:
                                
                                if ((x24_5 & 1) != 0)
                                    goto label_10c4228
                                
                                x22 = nullptr
                            else
                            label_10c3e0c:
                                int32_t* x8_126 = x22[3]
                                int32_t x0_65
                                
                                if (x8_126 == x22[4])
                                    x0_65 = (*(*x22 + 0x48))(x22)
                                else
                                    x0_65 = *x8_126
                                
                                if (x0_65 == 0xffffffff)
                                    x22 = nullptr
                                
                                if (x24_5 == (x0_65 == 0xffffffff ? 1 : 0))
                                    goto label_10c4228
                            
                            int64_t* x0_67 = *arg1
                            int32_t* x8_130 = x0_67[3]
                            uint64_t x2_5
                            
                            if (x8_130 == x0_67[4])
                                x2_5 = zx.q((*(*x0_67 + 0x48))())
                            else
                                x2_5 = zx.q(*x8_130)
                            
                            if (((*(*arg8 + 0x18))(arg8, 0x40, x2_5) & 1) == 0)
                                goto label_10c4228
                            
                            wchar_t* x8_135 = *arg10
                            
                            if (x8_135 == x27)
                                int64_t oldmem_2 = *arg9
                                void* x20_2 = x27 - oldmem_2
                                size_t bytes_7
                                
                                if (x27 == oldmem_2)
                                    bytes_7 = 4
                                else
                                    bytes_7 = x20_2 << 1
                                
                                size_t bytes_2
                                
                                bytes_2 = x20_2 u< 0x7fffffffffffffff ? bytes_7 : -1
                                
                                void* x0_71
                                
                                if (*(arg9 + 8) == std::__ndk1::__do_nothing)
                                    x0_71 = malloc(bytes_2)
                                    
                                    if (x0_71 == 0)
                                        std::__throw_bad_alloc()
                                        noreturn
                                else
                                    x0_71 = realloc(oldmem_2, bytes_2)
                                    
                                    if (x0_71 == 0)
                                        std::__throw_bad_alloc()
                                        noreturn
                                
                                *arg9 = x0_71
                                *(arg9 + 8) = free
                                x8_135 = x0_71 + x20_2
                                *arg10 = x8_135
                                x20 = var_2bc
                                x27 = *arg9 + (bytes_2 & 0xfffffffffffffffc)
                            
                            int64_t* x0_73 = *arg1
                            wchar_t* x9_56 = x0_73[3]
                            wchar_t x0_74
                            
                            if (x9_56 == x0_73[4])
                                x0_74 = (*(*x0_73 + 0x48))()
                                x8_135 = *arg10
                            else
                                x0_74 = *x9_56
                            
                            *arg10 = &x8_135[1]
                            *x8_135 = x0_74
                            int32_t x8_141 = var_28c - 1
                            var_28c = x8_141
                            int64_t* x0_75 = *arg1
                            int64_t x9_58 = x0_75[3]
                            
                            if (x9_58 != x0_75[4])
                                x0_75[3] = x9_58 + 4
                                
                                if (x8_141 s<= 0)
                                    break
                            else
                                (*(*x0_75 + 0x50))()
                                
                                if (var_28c s<= 0)
                                    break
                
                if (*arg10 == *arg9)
                    goto label_10c4228
                
                goto label_10c3324
    x21_1 = 0
    *x9_72 |= 4
    break

if ((zx.d(var_288.b) & 1) == 0)
    if ((zx.d(var_270.b) & 1) != 0)
        goto label_10c4284
    
    goto label_10c4254

operator delete(var_278)

if ((zx.d(var_270.b) & 1) != 0)
label_10c4284:
    operator delete(var_260)
    
    if ((zx.d(var_258.b) & 1) == 0)
        goto label_10c425c
    
    goto label_10c4294

label_10c4254:

if ((zx.d(var_258.b) & 1) == 0)
label_10c425c:
    
    if ((zx.d(var_240.b) & 1) != 0)
        goto label_10c42a4
    
    goto label_10c4264

label_10c4294:
operator delete(var_248)

if ((zx.d(var_240.b) & 1) != 0)
label_10c42a4:
    operator delete(i_6)
    
    if ((zx.d(var_228.b) & 1) == 0)
        goto label_10c4268
    
    goto label_10c42b4

label_10c4264:

if ((zx.d(var_228.b) & 1) != 0)
label_10c42b4:
    operator delete(var_218)
    
    if (oldmem_5 != 0)
        var_2b8(oldmem_5)
else
label_10c4268:
    
    if (oldmem_5 != 0)
        var_2b8(oldmem_5)

if (*(x9 + 0x28) == var_70)
    return zx.q(x21_1)

__stack_chk_fail()
noreturn
