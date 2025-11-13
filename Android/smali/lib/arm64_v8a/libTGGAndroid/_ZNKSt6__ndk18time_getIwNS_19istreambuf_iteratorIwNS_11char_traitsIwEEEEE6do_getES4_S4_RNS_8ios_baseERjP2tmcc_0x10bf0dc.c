// 函数: _ZNKSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_getES4_S4_RNS_8ios_baseERjP2tmcc
// 地址: 0x10bf0dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x26 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x26 + 0x28)
int64_t* x22 = arg1
wchar_t* x19 = arg6
int64_t result_1 = arg2
arg5->tm_sec = 0
std::__ndk1::ios_base::getloc()
int64_t var_90 = 0
int64_t (* const var_a0)() = std::__ndk1::ctype<wchar_t>::id
int64_t (* const var_98)() = std::__ndk1::locale::id::__init

if (*std::__ndk1::ctype<wchar_t>::id != -1)
    int64_t (* const* var_a8)()
    int64_t* var_b0 = &var_a8
    var_a8 = &var_a0
    std::__ndk1::__call_once(std::__ndk1::ctype<wchar_t>::id, &var_b0, sub_10dd4b0)

void* var_c0
int64_t x8_2 = *(var_c0 + 0x10)
int64_t x9_1 = sx.q(*(std::__ndk1::ctype<wchar_t>::id + 8)) - 1

if (x9_1 u< (*(var_c0 + 0x18) - x8_2) s>> 3)
    int64_t* x24_1 = *(x8_2 + (x9_1 << 3))
    
    if (x24_1 != 0)
        int128_t v0
        int128_t v1
        v0, v1 = std::__ndk1::__shared_count::__release_shared()
        uint64_t x8_4 = zx.q(zx.d(arg7) - 0x25)
        int64_t result
        void* x0_15
        int32_t x0_25
        int64_t result_2
        int32_t tm_sec
        int64_t x8_18
        wchar32 const* const x8_24
        
        if (x8_4.d u> 0x54)
        label_10bf6b4:
            SystemHintOp_BTI()
            arg5->tm_sec |= 4
            result = result_1
        else
            switch (x8_4)
                case 0
                    SystemHintOp_BTI()
                    std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::__get_percent(
                        x22, &result_1, arg3, arg5)
                    result = result_1
                case 1, 2, 3, 4, 5, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 
                        0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1e, 0x20, 0x22, 
                        0x25, 0x26, 0x27, 0x29, 0x2a, 0x2b, 0x2c, 0x30, 0x31, 0x32, 0x35, 0x36, 
                        0x37, 0x38, 0x39, 0x3a, 0x3b, 0x41, 0x42, 0x44, 0x46, 0x47, 0x4a, 0x4c, 
                        0x4e, 0x50, 0x51
                    goto label_10bf6b4
                case 0x1c, 0x3c
                    SystemHintOp_BTI()
                    char* x0_10 = (*x22[2])(&x22[2])
                    void* x8_13 =
                        sub_10b3ff4(&result_1, arg3, x0_10, &x0_10[0x150], x24_1, arg5, 0) - x0_10
                    
                    if (x8_13 s<= 0x14f)
                        int64_t x8_15 = (x8_13 s>> 3) * -0x5555555555555555
                        int64_t x9_6 = (muls.dp.q(x8_15, 0x4924924924924925) u>> 0x40).q
                        x19[6] = x8_15.d - ((x9_6 u>> 1).d + (x9_6 u>> 0x3f).d) * 7
                    
                    result = result_1
                case 0x1d, 0x3d, 0x43
                    SystemHintOp_BTI()
                    char* x0_4 = (*(x22[2] + 8))(&x22[2])
                    void* x8_7 =
                        sub_10b3ff4(&result_1, arg3, x0_4, &x0_4[0x240], x24_1, arg5, 0) - x0_4
                    
                    if (x8_7 s<= 0x23f)
                        int64_t x8_9 = (x8_7 s>> 3) * -0x5555555555555555
                        int64_t x9_2 = (muls.dp.q(x8_9, 0x2aaaaaaaaaaaaaab) u>> 0x40).q
                        x19[4] = x8_9.d - ((x9_2 u>> 1).d + (x9_2 u>> 0x3f).d) * 0xc
                    
                    result = result_1
                case 0x1f
                    SystemHintOp_BTI()
                    x8_24 = U"%m/%d/%y("
                label_10bf55c:
                    result_2 = result_1
                    var_a0.o = *x8_24
                    var_90.o = *(x8_24 + 0x10)
                    goto label_10bf56c
                case 0x21
                    SystemHintOp_BTI()
                    x8_24 = U"%Y-%m-%d"
                    goto label_10bf55c
                case 0x23
                    SystemHintOp_BTI()
                    x0_25 = sub_10bff9c(&result_1, arg3, arg5, x24_1, 2)
                    tm_sec = arg5->tm_sec
                    
                    if (x0_25 s<= 0x17 && (tm_sec & 4) == 0)
                        x19[2] = x0_25
                        result = result_1
                    else
                        arg5->tm_sec = tm_sec | 4
                        result = result_1
                case 0x24
                    SystemHintOp_BTI()
                    x0_25 = sub_10bff9c(&result_1, arg3, arg5, x24_1, 2)
                    tm_sec = arg5->tm_sec
                    
                    if (x0_25 - 1 u> 0xb || (tm_sec & 4) != 0)
                        arg5->tm_sec = tm_sec | 4
                        result = result_1
                    else
                        x19[2] = x0_25
                        result = result_1
                case 0x28
                    SystemHintOp_BTI()
                    int32_t x0_19 = sub_10bff9c(&result_1, arg3, arg5, x24_1, 2)
                    tm_sec = arg5->tm_sec
                    
                    if (x0_19 s> 0x3b || (tm_sec & 4) != 0)
                        arg5->tm_sec = tm_sec | 4
                        result = result_1
                    else
                        x19[1] = x0_19
                        result = result_1
                case 0x2d
                    SystemHintOp_BTI()
                    result_2 = result_1
                    __builtin_memcpy(&var_a0, U"%H:%M", 0x14)
                    goto label_10bf56c
                case 0x2e
                    SystemHintOp_BTI()
                    wchar_t x0_29 = sub_10bff9c(&result_1, arg3, arg5, x24_1, 2)
                    tm_sec = arg5->tm_sec
                    
                    if (x0_29 s> 0x3c || (tm_sec & 4) != 0)
                        arg5->tm_sec = tm_sec | 4
                        result = result_1
                    else
                        *x19 = x0_29
                        result = result_1
                case 0x2f
                    SystemHintOp_BTI()
                    x8_24 = U"%H:%M:%S"
                    goto label_10bf55c
                case 0x33
                    SystemHintOp_BTI()
                    x0_15 = &x22[2]
                    x8_18 = *(*x0_15 + 0x30)
                label_10bf3e4:
                    char* x0_21 = x8_18(x0_15)
                    int32_t temp0_1 = zx.d(*x0_21) & 1
                    int64_t (* const* x6)()
                    
                    if (temp0_1 == 0)
                        x6 = &x0_21[4]
                    else
                        x6 = *(x0_21 + 0x10)
                    
                    if (temp0_1 != 0)
                        *(x0_21 + 8)
                    
                    result_1 = std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::get(
                        x22, result_1, arg3, arg4, arg5, x19, x6)
                    result = result_1
                case 0x34
                    SystemHintOp_BTI()
                    int32_t x0_17 = sub_10bff9c(&result_1, arg3, arg5, x24_1, 4)
                    
                    if ((zx.d(arg5->tm_sec.b) & 4) == 0)
                        x19[5] = x0_17 - 0x76c
                    
                    result = result_1
                case 0x3e
                    SystemHintOp_BTI()
                    x0_15 = &x22[2]
                    x8_18 = *(*x0_15 + 0x18)
                    goto label_10bf3e4
                case 0x3f, 0x40
                    SystemHintOp_BTI()
                    int32_t x0_8 = sub_10bff9c(&result_1, arg3, arg5, x24_1, 2)
                    tm_sec = arg5->tm_sec
                    
                    if (x0_8 - 1 u> 0x1e || (tm_sec & 4) != 0)
                        arg5->tm_sec = tm_sec | 4
                        result = result_1
                    else
                        x19[3] = x0_8
                        result = result_1
                case 0x45
                    SystemHintOp_BTI()
                    int32_t x0_36 = sub_10bff9c(&result_1, arg3, arg5, x24_1, 3)
                    tm_sec = arg5->tm_sec
                    
                    if (x0_36 s> 0x16d || (tm_sec & 4) != 0)
                        arg5->tm_sec = tm_sec | 4
                        result = result_1
                    else
                        x19[7] = x0_36
                        result = result_1
                case 0x48
                    SystemHintOp_BTI()
                    int32_t x0_23 = sub_10bff9c(&result_1, arg3, arg5, x24_1, 2)
                    tm_sec = arg5->tm_sec
                    
                    if (x0_23 s> 0xc || (tm_sec & 4) != 0)
                        arg5->tm_sec = tm_sec | 4
                        result = result_1
                    else
                        x19[4] = x0_23 - 1
                        result = result_1
                case 0x49, 0x4f
                    SystemHintOp_BTI()
                    std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::__get_white_space(
                        x22, &result_1, arg3, arg5)
                    result = result_1
                case 0x4b
                    SystemHintOp_BTI()
                    char* x0_38 = (*(x22[2] + 0x10))(&x22[2])
                    uint64_t x8_34 = zx.q(*x0_38)
                    uint64_t x8_35
                    
                    if ((x8_34.d & 1) != 0)
                        x8_35 = *(x0_38 + 8)
                    else
                        x8_35 = x8_34 u>> 1
                    
                    uint64_t x9_14 = zx.q(x0_38[0x18])
                    uint64_t x9_15
                    
                    if ((x9_14.d & 1) != 0)
                        x9_15 = *(x0_38 + 0x20)
                    else
                        x9_15 = x9_14 u>> 1
                    
                    if (x8_35 == neg.q(x9_15))
                        goto label_10bf6b4
                    
                    char* x0_42 = sub_10b3ff4(&result_1, arg3, x0_38, &x0_38[0x30], x24_1, arg5, 0)
                    int32_t x8_38 = x19[2]
                    void* x9_17 = x0_42 - x0_38
                    
                    if (x8_38 == 0xc && x9_17 == 0)
                        x19[2] = 0
                    else if (x8_38 s<= 0xb && x9_17 == 0x18)
                        x19[2] = x8_38 + 0xc
                    
                    result = result_1
                case 0x4d
                    SystemHintOp_BTI()
                    result_2 = result_1
                    __builtin_memcpy(&var_a0, U"%I:%M:%S %p", 0x2c)
                label_10bf56c:
                    result_1 = std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::get(
                        x22, result_2, arg3, arg4, arg5, x19, &var_a0)
                    result = result_1
                case 0x52
                    SystemHintOp_BTI()
                    int32_t x0_40 = sub_10bff9c(&result_1, arg3, arg5, x24_1, 1)
                    tm_sec = arg5->tm_sec
                    
                    if (x0_40 s> 6 || (tm_sec & 4) != 0)
                        arg5->tm_sec = tm_sec | 4
                        result = result_1
                    else
                        x19[6] = x0_40
                        result = result_1
                case 0x53
                    SystemHintOp_BTI()
                    result = (*(*x22 + 0x28))(x22, result_1, arg3, arg4, arg5, x19)
                case 0x54
                    SystemHintOp_BTI()
                    int32_t x0_33 = sub_10bff9c(&result_1, arg3, arg5, x24_1, 4)
                    
                    if ((zx.d(arg5->tm_sec.b) & 4) == 0)
                        int32_t x9_13
                        
                        if (x0_33 s< 0x64)
                            x9_13 = x0_33 + 0x76c
                        else
                            x9_13 = x0_33
                        
                        int32_t x8_28
                        
                        if (x0_33 s< 0x45)
                            x8_28 = x0_33 + 0x7d0
                        else
                            x8_28 = x9_13
                        
                        x19[5] = x8_28 - 0x76c
                    
                    result = result_1
        
        if (*(x26 + 0x28) == x8)
            return result
        
        __stack_chk_fail()
        noreturn

sub_f43870()
noreturn
