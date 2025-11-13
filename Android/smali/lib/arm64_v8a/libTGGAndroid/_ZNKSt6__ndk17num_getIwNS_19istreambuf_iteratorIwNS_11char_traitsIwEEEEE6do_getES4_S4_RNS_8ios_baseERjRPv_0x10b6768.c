// 函数: _ZNKSt6__ndk17num_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_getES4_S4_RNS_8ios_baseERjRPv
// 地址: 0x10b6768
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x24 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x24 + 0x28)
std::__ndk1::ios_base& x20 = arg3
int64_t* result = arg2
int64_t var_198
__builtin_memset(&var_198, 0, 0x18)
std::__ndk1::ios_base::getloc()
int64_t (* const* var_1a0)()
int64_t (* const* x22)() = var_1a0
int64_t var_168 = 0
int64_t (* const var_178)() = std::__ndk1::ctype<wchar_t>::id
int64_t (* const var_170)() = std::__ndk1::locale::id::__init
int64_t (* const* var_1b8)()
char* var_180

if (*std::__ndk1::ctype<wchar_t>::id != -1)
    var_1b8 = &var_178
    var_180 = &var_1b8
    std::__ndk1::__call_once(std::__ndk1::ctype<wchar_t>::id, &var_180, sub_10dd4b0)

int64_t x8_2 = x22[2]
int64_t x9_1 = sx.q(*(std::__ndk1::ctype<wchar_t>::id + 8)) - 1

if (x9_1 u< (x22[3] - x8_2) s>> 3)
    int64_t* x0_2 = *(x8_2 + (x9_1 << 3))
    
    if (x0_2 != 0)
        void var_d8
        (*(*x0_2 + 0x60))(x0_2, std::__ndk1::__num_get_base::__src, 
            std::__ndk1::__num_get_base::__src + 0x1a, &var_d8)
        std::__ndk1::__shared_count::__release_shared()
        __builtin_memset(&var_1b8, 0, 0x18)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::resize(
            &var_1b8, 0x16)
        char* x25_1 = &var_1b8 | 1
        char* var_1a8
        char* x23
        
        if ((zx.d(var_1b8.b) & 1) == 0)
            x23 = x25_1
        else
            x23 = var_1a8
        
        uint32_t var_1bc = 0
        var_1a0 = &var_178
        var_180 = x23
        
        while (true)
            int32_t x22_1
            
            if (result != 0)
                int32_t* x8_7 = result[3]
                int32_t x0_5
                
                if (x8_7 == result[4])
                    x0_5 = (*(*result + 0x48))(result)
                else
                    x0_5 = *x8_7
                
                x22_1 = x0_5 == 0xffffffff ? 1 : 0
                
                if (x0_5 == 0xffffffff)
                    result = nullptr
                
                if (x20 == 0)
                    goto label_10b6928
                
                goto label_10b68f4
            
            x22_1 = 1
            
            if (x20 != 0)
            label_10b68f4:
                int32_t* x8_10 = *(x20 + 0x18)
                int32_t x0_7
                
                if (x8_10 == *(x20 + 0x20))
                    x0_7 = (*(*x20 + 0x48))(x20)
                else
                    x0_7 = *x8_10
                
                if (x0_7 == 0xffffffff)
                    goto label_10b6928
                
                if (x22_1 == 0)
                    break
            else
            label_10b6928:
                x20 = nullptr
                
                if ((x22_1 & 1) != 0)
                    break
            
            uint64_t x9_5 = zx.q(var_1b8.b)
            uint64_t x22_2
            uint64_t var_1b0
            
            if ((x9_5.d & 1) != 0)
                x22_2 = var_1b0
            else
                x22_2 = x9_5 u>> 1
            
            if (var_180 == &x23[x22_2])
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::resize(
                    &var_1b8, (x22_2 << 1).b)
                char x1_3
                
                if ((zx.d(var_1b8.b) & 1) == 0)
                    x1_3 = 0x16
                else
                    x1_3 = (var_1b8.b & 0xfe) - 1
                
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::resize(
                    &var_1b8, x1_3)
                
                if ((zx.d(var_1b8.b) & 1) == 0)
                    x23 = x25_1
                else
                    x23 = var_1a8
                
                var_180 = &x23[x22_2]
            
            int32_t* x8_19 = result[3]
            uint64_t x0_11
            
            if (x8_19 == result[4])
                x0_11 = (*(*result + 0x48))(result)
            else
                x0_11 = zx.q(*x8_19)
            
            void** var_1e0_1 = &var_1a0
            void* var_1d8_1 = &var_d8
            
            if (std::__ndk1::__num_get<wchar_t>::__stage2_int_loop(x0_11, 0x10, x23, &var_180, 
                    &var_1bc, 0, &var_198, &var_178) != 0)
                break
            
            int64_t x8_22 = result[3]
            
            if (x8_22 != result[4])
                result[3] = x8_22 + 4
            else
                (*(*result + 0x50))(result)
        
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::resize(
            &var_1b8, var_180.b - x23.b)
        void*& x26 = arg5
        char* x23_1
        
        if ((zx.d(var_1b8.b) & 1) == 0)
            x23_1 = x25_1
        else
            x23_1 = var_1a8
        
        if ((zx.d(data_24bad08) & 1) == 0 && __cxa_guard_acquire(&data_24bad08) != 0)
            data_24bad00 = newlocale(0x1fbf, 0x739c3c, nullptr)
            __cxa_guard_release(&data_24bad08)
            x26 = arg5
        
        if (std::__ndk1::__libcpp_sscanf_l(x23_1, data_24bad00, "%p") != 1)
            *x26 = 4
        
        int32_t x22_3
        
        if (result != 0)
            int32_t* x8_27 = result[3]
            int32_t x0_18
            
            if (x8_27 == result[4])
                x0_18 = (*(*result + 0x48))(result)
            else
                x0_18 = *x8_27
            
            x22_3 = x0_18 == 0xffffffff ? 1 : 0
            
            if (x0_18 == 0xffffffff)
                result = nullptr
            
            if (x20 == 0)
                goto label_10b6a90
            
            goto label_10b6ab8
        
        x22_3 = 1
        
        if (x20 != 0)
        label_10b6ab8:
            int32_t* x8_30 = *(x20 + 0x18)
            int32_t x0_20
            
            if (x8_30 == *(x20 + 0x20))
                x0_20 = (*(*x20 + 0x48))(x20)
            else
                x0_20 = *x8_30
            
            if (((x22_3 ^ (x0_20 == 0xffffffff ? 1 : 0)) & 1) == 0)
                *x26 |= 2
        else
        label_10b6a90:
            
            if ((x22_3 & 1) != 0)
                *x26 |= 2
        
        if ((zx.d(var_1b8.b) & 1) != 0)
            operator delete(var_1a8)
        
        void* var_188
        
        if ((zx.d(var_198.b) & 1) != 0)
            operator delete(var_188)
        
        if (*(x24 + 0x28) == x8)
            return result
        
        __stack_chk_fail()
        noreturn

sub_f43870()
noreturn
