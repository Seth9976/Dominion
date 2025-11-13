// 函数: _ZNKSt6__ndk17num_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_getES4_S4_RNS_8ios_baseERjRPv
// 地址: 0x10b33e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x24 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x24 + 0x28)
std::__ndk1::ios_base& x21 = arg3
int64_t* result = arg2
int64_t var_150
__builtin_memset(&var_150, 0, 0x18)
std::__ndk1::ios_base::getloc()
int64_t (* const* var_158)()
int64_t (* const* x22)() = var_158
int64_t var_120 = 0
int64_t (* const var_130)() = std::__ndk1::ctype<char>::id
int64_t (* const var_128)() = std::__ndk1::locale::id::__init
int64_t (* const* var_170)()
char* var_138

if (*std::__ndk1::ctype<char>::id != -1)
    var_170 = &var_130
    var_138 = &var_170
    std::__ndk1::__call_once(std::__ndk1::ctype<char>::id, &var_138, sub_10dd4b0)

int64_t x8_2 = x22[2]
int64_t x9_1 = sx.q(*(std::__ndk1::ctype<char>::id + 8)) - 1

if (x9_1 u< (x22[3] - x8_2) s>> 3)
    int64_t* x0_2 = *(x8_2 + (x9_1 << 3))
    
    if (x0_2 != 0)
        void var_8c
        (*(*x0_2 + 0x40))(x0_2, std::__ndk1::__num_get_base::__src, 
            std::__ndk1::__num_get_base::__src + 0x1a, &var_8c)
        std::__ndk1::__shared_count::__release_shared()
        __builtin_memset(&var_170, 0, 0x18)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::resize(
            &var_170, 0x16)
        char* x25_1 = &var_170 | 1
        char* var_160
        char* x23
        
        if ((zx.d(var_170.b) & 1) == 0)
            x23 = x25_1
        else
            x23 = var_160
        
        uint32_t var_174 = 0
        var_158 = &var_130
        var_138 = x23
        
        while (true)
            if (result != 0 && result[3] == result[4])
                if ((*(*result + 0x48))(result) == 0xffffffff)
                    result = nullptr
                
                if (x21 != 0)
                    goto label_10b354c
                
                goto label_10b358c
            
            if (x21 == 0)
            label_10b358c:
                x21 = nullptr
                
                if (result == 0)
                    break
            else
            label_10b354c:
                int32_t x0_6
                
                if (*(x21 + 0x18) == *(x21 + 0x20))
                    x0_6 = (*(*x21 + 0x48))(x21)
                
                if (*(x21 + 0x18) == *(x21 + 0x20) && x0_6 == 0xffffffff)
                    goto label_10b358c
                
                if (result != 0)
                    break
            
            uint64_t x9_5 = zx.q(var_170.b)
            uint64_t x22_1
            uint64_t var_168
            
            if ((x9_5.d & 1) != 0)
                x22_1 = var_168
            else
                x22_1 = x9_5 u>> 1
            
            if (var_138 == &x23[x22_1])
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::resize(
                    &var_170, (x22_1 << 1).b)
                char x1_3
                
                if ((zx.d(var_170.b) & 1) == 0)
                    x1_3 = 0x16
                else
                    x1_3 = (var_170.b & 0xfe) - 1
                
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::resize(
                    &var_170, x1_3)
                
                if ((zx.d(var_170.b) & 1) == 0)
                    x23 = x25_1
                else
                    x23 = var_160
                
                var_138 = &x23[x22_1]
            
            char* x8_19 = result[3]
            uint64_t x0_11
            
            if (x8_19 == result[4])
                x0_11 = (*(*result + 0x48))(result)
            else
                x0_11 = zx.q(*x8_19)
            
            void** var_190_1 = &var_158
            void* var_188_1 = &var_8c
            
            if (std::__ndk1::__num_get<char>::__stage2_int_loop(x0_11, 0x10, x23, &var_138, 
                    &var_174, 0, &var_150, &var_130) != 0)
                break
            
            int64_t x8_22 = result[3]
            
            if (x8_22 != result[4])
                result[3] = x8_22 + 1
            else
                (*(*result + 0x50))(result)
        
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::resize(
            &var_170, var_138.b - x23.b)
        void*& x26 = arg5
        char* x23_1
        
        if ((zx.d(var_170.b) & 1) == 0)
            x23_1 = x25_1
        else
            x23_1 = var_160
        
        if ((zx.d(data_24bad08) & 1) == 0 && __cxa_guard_acquire(&data_24bad08) != 0)
            data_24bad00 = newlocale(0x1fbf, 0x739c3c, nullptr)
            __cxa_guard_release(&data_24bad08)
            x26 = arg5
        
        if (std::__ndk1::__libcpp_sscanf_l(x23_1, data_24bad00, "%p") != 1)
            *x26 = 4
        
        if (result != 0 && result[3] == result[4])
            if ((*(*result + 0x48))(result) == 0xffffffff)
                result = nullptr
            
            if (x21 != 0)
                goto label_10b36f0
            
            goto label_10b3794
        
        if (x21 == 0)
        label_10b3794:
            
            if (result == 0)
                *x26 |= 2
        else
        label_10b36f0:
            int32_t x0_19
            
            if (*(x21 + 0x18) == *(x21 + 0x20))
                x0_19 = (*(*x21 + 0x48))(x21)
            
            if (*(x21 + 0x18) == *(x21 + 0x20) && x0_19 == 0xffffffff)
                goto label_10b3794
            
            if (result != 0)
                *x26 |= 2
        
        if ((zx.d(var_170.b) & 1) != 0)
            operator delete(var_160)
        
        void* var_140
        
        if ((zx.d(var_150.b) & 1) != 0)
            operator delete(var_140)
        
        if (*(x24 + 0x28) == x8)
            return result
        
        __stack_chk_fail()
        noreturn

sub_f43870()
noreturn
