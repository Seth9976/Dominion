// 函数: _ZNKSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE3getES4_S4_RNS_8ios_baseERjP2tmPKwSC_
// 地址: 0x10be480
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = _ReadMSR(tpidr_el0)
int64_t x8_1 = *(x8 + 0x28)
int64_t* x25 = arg1
wchar_t const* x27 = arg7
std::__ndk1::ios_base& x20 = arg3
int64_t* result = arg2
std::__ndk1::ios_base::getloc()
int64_t var_80 = 0
int64_t (* const var_90)() = std::__ndk1::ctype<wchar_t>::id
int64_t (* const var_88)() = std::__ndk1::locale::id::__init

if (*std::__ndk1::ctype<wchar_t>::id != -1)
    int64_t (* const* var_70)()
    int64_t (* const** var_78)() = &var_70
    var_70 = &var_90
    std::__ndk1::__call_once(std::__ndk1::ctype<wchar_t>::id, &var_78, sub_10dd4b0)

void* var_98
int64_t x8_3 = *(var_98 + 0x10)
int64_t x9_1 = sx.q(*(std::__ndk1::ctype<wchar_t>::id + 8)) - 1

if (x9_1 u< (*(var_98 + 0x18) - x8_3) s>> 3)
    int64_t* x26_1 = *(x8_3 + (x9_1 << 3))
    
    if (x26_1 != 0)
        std::__ndk1::__shared_count::__release_shared()
        arg5->tm_sec = 0
        wchar_t* entry_x7
        
        if (x27 != entry_x7)
            while (true)
                int32_t x23_1
                
                if (result != 0)
                    int32_t* x8_4 = result[3]
                    int32_t x0_3
                    
                    if (x8_4 == result[4])
                        x0_3 = (*(*result + 0x48))(result)
                    else
                        x0_3 = *x8_4
                    
                    x23_1 = x0_3 == 0xffffffff ? 1 : 0
                    
                    if (x0_3 == 0xffffffff)
                        result = nullptr
                    
                    if (x20 == 0)
                        goto label_10be57c
                    
                    goto label_10be5a4
                
                x23_1 = 1
                
                if (x20 != 0)
                label_10be5a4:
                    int32_t* x8_7 = *(x20 + 0x18)
                    int32_t x0_5
                    
                    if (x8_7 == *(x20 + 0x20))
                        x0_5 = (*(*x20 + 0x48))(x20)
                    else
                        x0_5 = *x8_7
                    
                    if (x0_5 == 0xffffffff)
                        x20 = nullptr
                    
                    if (((x23_1 ^ (x0_5 == 0xffffffff ? 1 : 0)) & 1) != 0)
                        goto label_10be5f4
                else
                label_10be57c:
                    
                    if ((x23_1 & 1) == 0)
                    label_10be5f4:
                        
                        if (zx.d((*(*x26_1 + 0x68))(x26_1, zx.q(*x27), 0)) != 0x25)
                            if (((*(*x26_1 + 0x18))(x26_1, 1, zx.q(*x27)) & 1) == 0)
                                int32_t* x8_24 = result[3]
                                uint64_t x1_4
                                
                                if (x8_24 == result[4])
                                    x1_4 = zx.q((*(*result + 0x48))(result))
                                else
                                    x1_4 = zx.q(*x8_24)
                                
                                if ((*(*x26_1 + 0x38))(x26_1, x1_4)
                                        != (*(*x26_1 + 0x38))(x26_1, zx.q(*x27)))
                                    arg5->tm_sec = 4
                                label_10be878:
                                    
                                    if (x27 == entry_x7)
                                        break
                                else
                                    int64_t x8_48 = result[3]
                                    
                                    if (x8_48 == result[4])
                                        (*(*result + 0x50))(result)
                                    else
                                        result[3] = x8_48 + 4
                                    
                                    x27 = &x27[1]
                                    
                                    if (x27 == entry_x7)
                                        break
                                
                                goto label_10be884
                            
                            void* x23_3 = &x27[1]
                            
                            while (true)
                                if (entry_x7 == x23_3)
                                    x27 = entry_x7
                                    
                                    if (result != 0)
                                        goto label_10be738
                                    
                                    break
                                
                                uint64_t x2_1 = zx.q(*x23_3)
                                x23_3 += 4
                                
                                if (((*(*x26_1 + 0x18))(x26_1, 1, x2_1) & 1) == 0)
                                    x27 = x23_3 - 4
                                    
                                    if (result != 0)
                                        goto label_10be738
                                    
                                    break
                            
                        label_10be77c:
                            int32_t x23_4 = 1
                            
                            if (x20 == 0)
                            label_10be7bc:
                                x20 = nullptr
                                
                                if ((x23_4 & 1) == 0)
                                    goto label_10be7c4
                            else
                                while (true)
                                    int32_t* x8_33 = *(x20 + 0x18)
                                    
                                    if (x8_33 == *(x20 + 0x20))
                                        if ((*(*x20 + 0x48))(x20) == 0xffffffff)
                                            goto label_10be7bc
                                    else if (*x8_33 == 0xffffffff)
                                        goto label_10be7bc
                                    
                                    if (x23_4 == 0)
                                        break
                                    
                                label_10be7c4:
                                    int32_t* x8_36 = result[3]
                                    uint64_t x2_3
                                    
                                    if (x8_36 == result[4])
                                        x2_3 = zx.q((*(*result + 0x48))(result))
                                    else
                                        x2_3 = zx.q(*x8_36)
                                    
                                    if (((*(*x26_1 + 0x18))(x26_1, 1, x2_3) & 1) == 0)
                                        break
                                    
                                    int64_t x8_41 = result[3]
                                    
                                    if (x8_41 != result[4])
                                        result[3] = x8_41 + 4
                                        
                                        if (result == 0)
                                            goto label_10be77c
                                    else
                                        (*(*result + 0x50))(result)
                                        
                                        if (result == 0)
                                            goto label_10be77c
                                    
                                label_10be738:
                                    int32_t* x8_29 = result[3]
                                    int32_t x0_20
                                    
                                    if (x8_29 == result[4])
                                        x0_20 = (*(*result + 0x48))(result)
                                    else
                                        x0_20 = *x8_29
                                    
                                    x23_4 = x0_20 == 0xffffffff ? 1 : 0
                                    
                                    if (x0_20 == 0xffffffff)
                                        result = nullptr
                                    
                                    if (x20 == 0)
                                        goto label_10be7bc
                            
                            goto label_10be878
                        
                        if (&x27[1] != entry_x7)
                            int32_t x0_10 = (*(*x26_1 + 0x68))(x26_1, zx.q(x27[1]), 0)
                            int32_t x8_17 = x0_10 & 0xff
                            int32_t x28_1 = x0_10
                            uint64_t x7
                            int64_t x27_1
                            
                            if (x8_17 != 0x45 && x8_17 != 0x30)
                                x7 = 0
                                x27_1 = 1
                            label_10be704:
                                result = (*(*x25 + 0x48))(x25, result, x20, arg4, arg5, arg6, 
                                    zx.q(x28_1), x7)
                                x27 = &x27[1 + x27_1]
                                
                                if (x27 == entry_x7)
                                    break
                                
                            label_10be884:
                                
                                if (arg5->tm_sec != 0)
                                    break
                                
                                continue
                            else if (&x27[2] != entry_x7)
                                x7 = zx.q(x28_1)
                                x28_1 = (*(*x26_1 + 0x68))(x26_1, zx.q(x27[2]), 0)
                                x27_1 = 2
                                goto label_10be704
                
                arg5->tm_sec = 4
                break
        
        int32_t x22_1
        
        if (result != 0)
            int32_t* x8_53 = result[3]
            int32_t x0_36
            
            if (x8_53 == result[4])
                x0_36 = (*(*result + 0x48))(result)
            else
                x0_36 = *x8_53
            
            x22_1 = x0_36 == 0xffffffff ? 1 : 0
            
            if (x0_36 == 0xffffffff)
                result = nullptr
            
            if (x20 == 0)
                goto label_10be8d4
            
            goto label_10be900
        
        x22_1 = 1
        uint64_t x9_13
        
        if (x20 != 0)
        label_10be900:
            int32_t* x8_56 = *(x20 + 0x18)
            int32_t x0_38
            
            if (x8_56 == *(x20 + 0x20))
                x0_38 = (*(*x20 + 0x48))(x20)
            else
                x0_38 = *x8_56
            
            x9_13 = x8
            
            if (((x22_1 ^ (x0_38 == 0xffffffff ? 1 : 0)) & 1) == 0)
                arg5->tm_sec |= 2
        else
        label_10be8d4:
            x9_13 = x8
            
            if ((x22_1 & 1) != 0)
                arg5->tm_sec |= 2
        
        if (*(x9_13 + 0x28) == x8_1)
            return result
        
        __stack_chk_fail()
        noreturn

sub_f43870()
noreturn
