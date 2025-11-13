// 函数: _ZNKSt6__ndk19money_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_getES4_S4_bRNS_8ios_baseERjRNS_12basic_stringIwS3_NS_9allocatorIwEEEE
// 地址: 0x10c452c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x25 = _ReadMSR(tpidr_el0)
int64_t* x20 = arg3
int64_t var_68 = *(x25 + 0x28)
int64_t (* const var_230)(void*) = std::__ndk1::__do_nothing
int64_t* result_1 = arg2
void var_1f8
void* var_238 = &var_1f8
std::__ndk1::ios_base::getloc()
void* var_248
void* x22 = var_248
int64_t var_210 = 0
int64_t (* const var_220)() = std::__ndk1::ctype<wchar_t>::id
int64_t (* const var_218)() = std::__ndk1::locale::id::__init

if (*std::__ndk1::ctype<wchar_t>::id != -1)
    int64_t (* const* var_200)()
    int64_t* var_208 = &var_200
    var_200 = &var_220
    std::__ndk1::__call_once(std::__ndk1::ctype<wchar_t>::id, &var_208, sub_10dd4b0)

int64_t x8_2 = *(x22 + 0x10)
int64_t x9_1 = sx.q(*(std::__ndk1::ctype<wchar_t>::id + 8)) - 1

if (x9_1 u< (*(x22 + 0x18) - x8_2) s>> 3)
    std::__ndk1::ctype<wchar_t>* x22_1 = *(x8_2 + (x9_1 << 3))
    
    if (x22_1 != 0)
        var_220.b = 0
        int64_t var_240
        int64_t* var_258 = &var_240
        int64_t* var_250 = &var_68
        void** var_260 = &var_238
        
        if ((std::__ndk1::money_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::__do_get(
                &result_1, x20, zx.q(arg4.d) & 1, &var_248, zx.q(arg5[2]), arg6, &var_220, x22_1) & 1) != 0)
            wchar_t* entry_x6
            
            if ((zx.d(*entry_x6) & 1) != 0)
                **(entry_x6 + 0x10) = 0
                *(entry_x6 + 8) = 0
                
                if (zx.d(var_220.b) != 0)
                    (*(*x22_1 + 0x58))(x22_1, 0x2d)
                    std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::push_back(
                        entry_x6.d)
            else
                entry_x6[1] = 0
                *entry_x6 = 0
                
                if (zx.d(var_220.b) != 0)
                    (*(*x22_1 + 0x58))(x22_1, 0x2d)
                    std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::push_back(
                        entry_x6.d)
            
            int32_t i = (*(*x22_1 + 0x58))(x22_1, 0x30)
            void* x8_11 = var_238
            
            if (x8_11 u< var_240 - 4)
                while (*x8_11 == i)
                    x8_11 += 4
                    
                    if (x8_11 u>= var_240 - 4)
                        break
            
            std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::__append_forward_unsafe<wchar_t*>(
                entry_x6, x8_11)
        
        int64_t* result_2 = result_1
        
        if (result_2 == 0)
            goto label_10c4720
        
        int32_t* x8_12 = result_2[3]
        int32_t x0_9
        
        if (x8_12 == result_2[4])
            x0_9 = (*(*result_2 + 0x48))()
        else
            x0_9 = *x8_12
        
        int32_t x21_1
        
        if (x0_9 != 0xffffffff)
            x21_1 = result_1 == 0 ? 1 : 0
            
            if (x20 != 0)
                goto label_10c4728
            
            goto label_10c4714
        
        result_1 = nullptr
    label_10c4720:
        x21_1 = 1
        
        if (x20 == 0)
        label_10c4714:
            
            if ((x21_1 & 1) != 0)
                *arg6 |= 2
        else
        label_10c4728:
            int32_t* x8_16 = x20[3]
            int32_t x0_10
            
            if (x8_16 == x20[4])
                x0_10 = (*(*x20 + 0x48))(x20)
            else
                x0_10 = *x8_16
            
            if (((x21_1 ^ (x0_10 == 0xffffffff ? 1 : 0)) & 1) == 0)
                *arg6 |= 2
        
        int64_t* result = result_1
        std::__ndk1::__shared_count::__release_shared()
        void* x0_13 = var_238
        var_238 = nullptr
        
        if (x0_13 != 0)
            var_230(x0_13)
        
        if (*(x25 + 0x28) == var_68)
            return result
        
        __stack_chk_fail()
        noreturn

sub_f43870()
noreturn
