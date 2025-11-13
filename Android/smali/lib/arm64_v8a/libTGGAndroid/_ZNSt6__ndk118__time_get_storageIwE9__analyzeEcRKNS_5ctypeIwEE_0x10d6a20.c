// 函数: _ZNSt6__ndk118__time_get_storageIwE9__analyzeEcRKNS_5ctypeIwEE
// 地址: 0x10d6a20
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
char var_266 = 0
format.b = 0x25
format:1.b = (arg2.d).b
int64_t* x21 = arg1
char s[0x64]
strftime_l(&s, 0x64, &format, &tp, *arg1)
char const* var_2b0 = &s
mbstate_t ps
__builtin_memset(&ps, 0, 8)
locale_t newloc = uselocale(*x21)
wchar_t var_264[0x64]
size_t result = mbsrtowcs(&var_264, &var_2b0, 0x64, &ps)
size_t result_1 = result

if (newloc != 0)
    result = uselocale(newloc)

if (result_1 == -1)
    std::__ndk1::__throw_runtime_error("locale not supported")
else
    char* entry_x8
    __builtin_memset(entry_x8, 0, 0x18)
    
    if (result_1 != 0)
        void* x26_1 = &var_264
        void* x24_1 = &var_264[result_1]
        int64_t* entry_x2
        
        do
            if (((*(*entry_x2 + 0x18))(entry_x2, 1, zx.q(*x26_1)) & 1) == 0)
                void* var_2b8 = x26_1
                int32_t var_2bc = 0
                void* x22_1 =
                    sub_10d713c(&var_2b8, x24_1, &x21[1], &x21[0x2b], entry_x2, &var_2bc, 0) -
                    &x21[1]
                
                if (x22_1 s> 0x14f)
                    var_2b8 = x26_1
                    void* x22_2 =
                        sub_10d713c(&var_2b8, x24_1, &x21[0x2b], &x21[0x73], entry_x2, &var_2bc, 0)
                        - &x21[0x2b]
                    
                    if (x22_2 s> 0x23f)
                        uint64_t x8_10 = zx.q(x21[0x73].b)
                        uint64_t x8_11
                        uint64_t x9_3
                        
                        if ((x8_10.d & 1) == 0)
                            x8_11 = x8_10 u>> 1
                            x9_3 = zx.q(x21[0x76].b)
                            
                            if ((x9_3.d & 1) == 0)
                                goto label_10d6c8c
                            
                            goto label_10d6c70
                        
                        x8_11 = x21[0x74]
                        x9_3 = zx.q(x21[0x76].b)
                        
                        if ((x9_3.d & 1) == 0)
                        label_10d6c8c:
                            
                            if (x8_11 == neg.q(x9_3 u>> 1))
                                goto label_10d6ce4
                            
                            goto label_10d6c94
                        
                    label_10d6c70:
                        
                        if (x8_11 != neg.q(x21[0x77]))
                        label_10d6c94:
                            var_2b8 = x26_1
                            
                            if (sub_10d713c(&var_2b8, x24_1, &x21[0x73], &x21[0x79], entry_x2, 
                                    &var_2bc, 0) - &x21[0x73] s> 0x2f)
                                goto label_10d6ce4
                            
                            std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::push_back(
                                entry_x8.d)
                            result = std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::push_back(
                                entry_x8.d)
                            x26_1 = var_2b8
                        else
                        label_10d6ce4:
                            var_2b8 = x26_1
                            int32_t x0_22 = (*(*entry_x2 + 0x18))(entry_x2, 0x40, zx.q(*x26_1))
                            int32_t x27 = *x26_1
                            
                            if ((x0_22 & 1) == 0)
                                if (zx.d((*(*entry_x2 + 0x68))(entry_x2, zx.q(x27), 0)) != 0x25)
                                    *x26_1
                                    result = std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::push_back(
                                        entry_x8.d)
                                else
                                    std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::push_back(
                                        entry_x8.d)
                                    result = std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::push_back(
                                        entry_x8.d)
                                
                                x26_1 += 4
                            else
                                result = (*(*entry_x2 + 0x18))(entry_x2, 0x40, zx.q(x27))
                                
                                if ((result.d & 1) == 0)
                                    var_2bc |= 4
                                label_10d6eb0:
                                    SystemHintOp_BTI()
                                    void* x8_44 = var_2b8
                                    
                                    while (x8_44 != x26_1)
                                        *x8_44
                                        result = std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::push_back(
                                            entry_x8.d)
                                        x8_44 = var_2b8 + 4
                                        var_2b8 = x8_44
                                else
                                    result = (*(*entry_x2 + 0x68))(entry_x2, zx.q(x27), 0)
                                    int32_t x28_1 = (result.d & 0xff) - 0x30
                                    
                                    if (x26_1 + 4 == x24_1)
                                        x26_1 = x24_1
                                        var_2bc |= 2
                                    else
                                        int32_t x22_3 = 4
                                        void* x8_27
                                        bool cond:5_1
                                        
                                        do
                                            int32_t x27_1 = *(x26_1 + 4)
                                            result =
                                                (*(*entry_x2 + 0x18))(entry_x2, 0x40, zx.q(x27_1))
                                            
                                            if ((result.d & 1) == 0)
                                                x26_1 += 4
                                                goto label_10d6f10
                                            
                                            result = (*(*entry_x2 + 0x68))(entry_x2, zx.q(x27_1), 0)
                                            x28_1 = x28_1 * 0xa + zx.d((result.d).b) - 0x30
                                            x8_27 = x26_1 + 4
                                            
                                            if (x22_3 u< 3)
                                                break
                                            
                                            x22_3 -= 1
                                            cond:5_1 = x24_1 - 8 != x26_1
                                            x26_1 = x8_27
                                        while (cond:5_1)
                                        
                                        if (x24_1 - 4 == x8_27)
                                            x26_1 = x24_1
                                            var_2bc |= 2
                                        else
                                            x26_1 = x8_27 + 4
                                    
                                label_10d6f10:
                                    uint64_t x8_48 = zx.q(x28_1 - 6)
                                    
                                    if (x8_48.d u<= 0x37)
                                        switch (x8_48)
                                            case 0
                                                SystemHintOp_BTI()
                                                std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::push_back(
                                                    entry_x8.d)
                                                result = std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::push_back(
                                                    entry_x8.d)
                                            case 1
                                                SystemHintOp_BTI()
                                                std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::push_back(
                                                    entry_x8.d)
                                                result = std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::push_back(
                                                    entry_x8.d)
                                            case 2, 3, 4, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 
                                                    0x10, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 
                                                    0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 
                                                    0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 
                                                    0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x32, 
                                                    0x33, 0x34, 0x36
                                                goto label_10d6eb0
                                            case 5
                                                SystemHintOp_BTI()
                                                std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::push_back(
                                                    entry_x8.d)
                                                result = std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::push_back(
                                                    entry_x8.d)
                                            case 6
                                                SystemHintOp_BTI()
                                                std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::push_back(
                                                    entry_x8.d)
                                                result = std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::push_back(
                                                    entry_x8.d)
                                            case 0x11
                                                SystemHintOp_BTI()
                                                std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::push_back(
                                                    entry_x8.d)
                                                result = std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::push_back(
                                                    entry_x8.d)
                                            case 0x19
                                                SystemHintOp_BTI()
                                                std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::push_back(
                                                    entry_x8.d)
                                                result = std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::push_back(
                                                    entry_x8.d)
                                            case 0x31
                                                SystemHintOp_BTI()
                                                std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::push_back(
                                                    entry_x8.d)
                                                result = std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::push_back(
                                                    entry_x8.d)
                                            case 0x35
                                                SystemHintOp_BTI()
                                                std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::push_back(
                                                    entry_x8.d)
                                                result = std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::push_back(
                                                    entry_x8.d)
                                            case 0x37
                                                SystemHintOp_BTI()
                                                std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::push_back(
                                                    entry_x8.d)
                                                result = std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::push_back(
                                                    entry_x8.d)
                                    else if (x28_1 == 0x16c)
                                        std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::push_back(
                                            entry_x8.d)
                                        result = std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::push_back(
                                            entry_x8.d)
                                    else
                                        if (x28_1 != 0x80d)
                                            goto label_10d6eb0
                                        
                                        std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::push_back(
                                            entry_x8.d)
                                        result = std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::push_back(
                                            entry_x8.d)
                    else
                        std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::push_back(
                            entry_x8.d)
                        
                        if (x22_2 s> 0x11f)
                            result = std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::push_back(
                                entry_x8.d)
                        else
                            result = std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::push_back(
                                entry_x8.d)
                        
                        if (zx.d(arg2.b) == 0x78)
                            int64_t x8_30 = (x22_2 s>> 3) * -0x5555555555555555
                            void* x9_8 = x21 + x8_30 * 0x18
                            void* x8_32
                            
                            if ((zx.d(*(x9_8 + 0x158)) & 1) != 0)
                                x8_32 = *(x21 + x8_30 * 0x18 + 0x168)
                            else
                                x8_32 = x9_8 + 0x15c
                            
                            result = (*(*entry_x2 + 0x18))(entry_x2, 0x40, zx.q(*x8_32))
                            
                            if ((result.d & 1) != 0)
                                uint64_t x8_38 = zx.q(*entry_x8)
                                int32_t temp0_1 = x8_38.d & 1
                                void* x8_40
                                
                                if (temp0_1 == 0)
                                    x8_40 = &entry_x8[4]
                                else
                                    x8_40 = *(entry_x8 + 0x10)
                                
                                uint64_t x9_11
                                
                                if (temp0_1 == 0)
                                    x9_11 = x8_38 u>> 1
                                else
                                    x9_11 = *(entry_x8 + 8)
                                
                                *(x8_40 + (x9_11 << 2) - 4) = 0x6d
                        
                        x26_1 = var_2b8
                else
                    std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::push_back(
                        entry_x8.d)
                    
                    if (x22_1 s> 0xa7)
                        result = std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::push_back(
                            entry_x8.d)
                    else
                        result = std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::push_back(
                            entry_x8.d)
                    
                    x26_1 = var_2b8
            else
                result = std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::push_back(
                    entry_x8.d)
                
                do
                    if (x24_1 - 4 == x26_1)
                        goto label_10d70b8
                    
                    result = (*(*entry_x2 + 0x18))(entry_x2, 1, zx.q(*(x26_1 + 4)))
                    x26_1 += 4
                while ((result.d & 1) != 0)
        while (x26_1 != x24_1)
    
label_10d70b8:
    
    if (*(x28 + 0x28) == x10)
        return result

__stack_chk_fail()
noreturn
