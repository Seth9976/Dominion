// 函数: _ZNSt6__ndk118__time_get_storageIcE9__analyzeEcRKNS_5ctypeIcEE
// 地址: 0x10d6090
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x28 = _ReadMSR(tpidr_el0)
int64_t x10 = *(x28 + 0x28)
int128_t v0 = data_71b010
int128_t v1 = data_71b4f0
struct tm tp
tp.tm_isdst.q = 0
tp.tm_gmtoff = 0
tp.tm_isdst = 0xffffffff
tp.tm_zone = 0
tp.tm_sec = v0.d
tp.tm_min = v0:4.d
tp.tm_hour = v0:8.d
tp.tm_mday = v0:0xc.d
tp.tm_mon = v1.d
tp.tm_year = v1:4.d
tp.tm_wday = v1:8.d
tp.tm_yday = v1:0xc.d
int16_t format = 0
char var_d6 = 0
format.b = 0x25
format:1.b = (arg2.d).b
void* x21 = arg1
char s[0x64]
char (* x22)[0x64] = &s
size_t result = strftime_l(&s, 0x64, &format, &tp, *arg1)
char* entry_x8
__builtin_memset(entry_x8, 0, 0x18)

if (result != 0)
    void* x26_1 = &s[result]
    
    while (true)
        int32_t x8_4 = sx.d(*x22)
        int64_t* entry_x2
        
        if ((x8_4 & 0x80000000) != 0 || ((*(entry_x2[2] + (zx.q(x8_4.b) << 3))).d & 1) == 0)
            char (* var_118)[0x64] = x22
            int32_t var_11c = 0
            void* x27_1 = sub_10d66cc(&var_118, x26_1, x21 + 8, x21 + 0x158, entry_x2, &var_11c, 0)
                - (x21 + 8)
            
            if (x27_1 s> 0x14f)
                var_118 = x22
                void* x27_2 =
                    sub_10d66cc(&var_118, x26_1, x21 + 0x158, x21 + 0x398, entry_x2, &var_11c, 0)
                    - (x21 + 0x158)
                
                if (x27_2 s> 0x23f)
                    uint64_t x8_8 = zx.q(*(x21 + 0x398))
                    uint64_t x8_9
                    uint64_t x9_6
                    
                    if ((x8_8.d & 1) == 0)
                        x8_9 = x8_8 u>> 1
                        x9_6 = zx.q(*(x21 + 0x3b0))
                        
                        if ((x9_6.d & 1) == 0)
                            goto label_10d62b4
                        
                        goto label_10d6298
                    
                    x8_9 = *(x21 + 0x3a0)
                    x9_6 = zx.q(*(x21 + 0x3b0))
                    
                    if ((x9_6.d & 1) == 0)
                    label_10d62b4:
                        
                        if (x8_9 == neg.q(x9_6 u>> 1))
                            goto label_10d6308
                        
                        goto label_10d62bc
                    
                label_10d6298:
                    
                    if (x8_9 != neg.q(*(x21 + 0x3b8)))
                    label_10d62bc:
                        var_118 = x22
                        
                        if (sub_10d66cc(&var_118, x26_1, x21 + 0x398, x21 + 0x3c8, entry_x2, 
                                &var_11c, 0) - (x21 + 0x398) s> 0x2f)
                            goto label_10d6308
                        
                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                            entry_x8.b)
                        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                            entry_x8.b)
                        x22 = var_118
                    else
                    label_10d6308:
                        var_118 = x22
                        int32_t x8_11 = sx.d(*x22)
                        uint64_t x1_11 = zx.q(x8_11.b)
                        
                        if ((x8_11 & 0x80000000) != 0)
                            result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                                entry_x8.b)
                            x22 = &(*x22)[1]
                        else if (((*(entry_x2[2] + (x1_11 << 3))).d & 0x40) != 0)
                            result = (*(*entry_x2 + 0x48))(entry_x2, x1_11, 0)
                            int32_t x27_3 = (result.d & 0xff) - 0x30
                            
                            if (&(*x22)[1] == x26_1)
                                x22 = x26_1
                                var_11c |= 2
                            else
                                int32_t x28_1 = 4
                                char* x8_37
                                
                                while (true)
                                    int32_t x8_31 = sx.d((*x22)[1])
                                    
                                    if ((x8_31 & 0x80000000) == 0)
                                        uint64_t x1_14 = zx.q(x8_31.b)
                                        
                                        if (((*(entry_x2[2] + (x1_14 << 3))).d & 0x40) != 0)
                                            result = (*(*entry_x2 + 0x48))(entry_x2, x1_14, 0)
                                            x27_3 = x27_3 * 0xa + zx.d((result.d).b) - 0x30
                                            x8_37 = &(*x22)[1]
                                            
                                            if (x28_1 s< 3)
                                                break
                                            
                                            x28_1 -= 1
                                            bool cond:5_1 = x26_1 - 2 != x22
                                            x22 = x8_37
                                            
                                            if (not(cond:5_1))
                                                break
                                            
                                            continue
                                    
                                    x22 = &(*x22)[1]
                                    goto label_10d64ac
                                
                                if (x26_1 - 1 == x8_37)
                                    x22 = x26_1
                                    var_11c |= 2
                                else
                                    x22 = &x8_37[1]
                            
                        label_10d64ac:
                            uint64_t x8_40 = zx.q(x27_3 - 6)
                            
                            if (x8_40.d u<= 0x37)
                                switch (x8_40)
                                    case 0
                                        SystemHintOp_BTI()
                                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                                            entry_x8.b)
                                        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                                            entry_x8.b)
                                    case 1
                                        SystemHintOp_BTI()
                                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                                            entry_x8.b)
                                        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                                            entry_x8.b)
                                    case 2, 3, 4, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 
                                        0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x1a, 0x1b, 0x1c, 
                                        0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 
                                        0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 
                                        0x32, 0x33, 0x34, 0x36
                                    label_10d651c:
                                        SystemHintOp_BTI()
                                        char* x8_41 = var_118
                                        
                                        while (x8_41 != x22)
                                            *x8_41
                                            result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                                                entry_x8.b)
                                            x8_41 = &(*var_118)[1]
                                            var_118 = x8_41
                                    case 5
                                        SystemHintOp_BTI()
                                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                                            entry_x8.b)
                                        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                                            entry_x8.b)
                                    case 6
                                        SystemHintOp_BTI()
                                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                                            entry_x8.b)
                                        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                                            entry_x8.b)
                                    case 0x11
                                        SystemHintOp_BTI()
                                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                                            entry_x8.b)
                                        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                                            entry_x8.b)
                                    case 0x19
                                        SystemHintOp_BTI()
                                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                                            entry_x8.b)
                                        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                                            entry_x8.b)
                                    case 0x31
                                        SystemHintOp_BTI()
                                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                                            entry_x8.b)
                                        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                                            entry_x8.b)
                                    case 0x35
                                        SystemHintOp_BTI()
                                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                                            entry_x8.b)
                                        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                                            entry_x8.b)
                                    case 0x37
                                        SystemHintOp_BTI()
                                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                                            entry_x8.b)
                                        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                                            entry_x8.b)
                            else if (x27_3 == 0x16c)
                                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                                    entry_x8.b)
                                result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                                    entry_x8.b)
                            else
                                if (x27_3 != 0x80d)
                                    goto label_10d651c
                                
                                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                                    entry_x8.b)
                                result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                                    entry_x8.b)
                        else if (x1_11.d != 0x25)
                            result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                                entry_x8.b)
                            x22 = &(*x22)[1]
                        else
                            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                                entry_x8.b)
                            result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                                entry_x8.b)
                            x22 = &(*x22)[1]
                else
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                        entry_x8.b)
                    
                    if (x27_2 s> 0x11f)
                        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                            entry_x8.b)
                    else
                        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                            entry_x8.b)
                    
                    if (zx.d(arg2.b) == 0x78)
                        int64_t x8_16 = (x27_2 s>> 3) * -0x5555555555555555
                        void* x9_9 = x21 + x8_16 * 0x18
                        int32_t x8_19
                        
                        if ((zx.d(*(x9_9 + 0x158)) & 1) != 0)
                            x8_19 = sx.d(**(x21 + x8_16 * 0x18 + 0x168))
                            
                            if ((x8_19 & 0x80000000) == 0)
                            label_10d63bc:
                                
                                if (((*(entry_x2[2] + (zx.q(x8_19.b) << 3))).d & 0x40) != 0)
                                    uint64_t x8_24 = zx.q(*entry_x8)
                                    int32_t temp0_1 = x8_24.d & 1
                                    void* x8_26
                                    
                                    if (temp0_1 == 0)
                                        x8_26 = &entry_x8[1]
                                    else
                                        x8_26 = *(entry_x8 + 0x10)
                                    
                                    uint64_t x9_12
                                    
                                    if (temp0_1 == 0)
                                        x9_12 = x8_24 u>> 1
                                    else
                                        x9_12 = *(entry_x8 + 8)
                                    
                                    *(x8_26 + x9_12 - 1) = 0x6d
                        else
                            x8_19 = sx.d(*(x9_9 + 0x159))
                            
                            if ((x8_19 & 0x80000000) == 0)
                                goto label_10d63bc
                    
                    x22 = var_118
            else
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                    entry_x8.b)
                
                if (x27_1 s> 0xa7)
                    result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                        entry_x8.b)
                else
                    result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                        entry_x8.b)
                
                x22 = var_118
        else
            result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                entry_x8.b)
            char* x9_3 = &(*x22)[1]
            int32_t x9_4
            
            do
                if (x26_1 == x9_3)
                    goto label_10d6674
                
                x22 = x9_3
                x9_4 = sx.d(*x9_3)
                
                if ((x9_4 & 0x80000000) != 0)
                    break
                
                x9_3 = &(*x22)[1]
            while (((*(entry_x2[2] + (zx.q(x9_4.b) << 3))).d & 1) != 0)
        
        if (x22 == x26_1)
            break

label_10d6674:

if (*(x28 + 0x28) == x10)
    return result

__stack_chk_fail()
noreturn
