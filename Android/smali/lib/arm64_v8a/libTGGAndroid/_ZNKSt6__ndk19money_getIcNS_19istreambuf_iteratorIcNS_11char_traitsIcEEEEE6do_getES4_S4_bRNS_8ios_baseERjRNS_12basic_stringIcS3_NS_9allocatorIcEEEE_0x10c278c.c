// 函数: _ZNKSt6__ndk19money_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_getES4_S4_bRNS_8ios_baseERjRNS_12basic_stringIcS3_NS_9allocatorIcEEEE
// 地址: 0x10c278c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x25 = _ReadMSR(tpidr_el0)
int64_t* x20 = arg3
int64_t var_68 = *(x25 + 0x28)
int64_t (* const var_108)(void*) = std::__ndk1::__do_nothing
int64_t* result_1 = arg2
void var_cc
void* var_110 = &var_cc
std::__ndk1::ios_base::getloc()
void* var_120
void* x22 = var_120
int64_t var_e8 = 0
int64_t (* const var_f8)() = std::__ndk1::ctype<char>::id
int64_t (* const var_f0)() = std::__ndk1::locale::id::__init

if (*std::__ndk1::ctype<char>::id != -1)
    int64_t (* const* var_d8)()
    int64_t* var_e0 = &var_d8
    var_d8 = &var_f8
    std::__ndk1::__call_once(std::__ndk1::ctype<char>::id, &var_e0, sub_10dd4b0)

int64_t x8_2 = *(x22 + 0x10)
int64_t x9_1 = sx.q(*(std::__ndk1::ctype<char>::id + 8)) - 1

if (x9_1 u< (*(x22 + 0x18) - x8_2) s>> 3)
    std::__ndk1::ctype<char>* x22_1 = *(x8_2 + (x9_1 << 3))
    
    if (x22_1 != 0)
        var_f8.b = 0
        int64_t var_118
        int64_t* var_138 = &var_118
        int64_t* var_130 = &var_68
        void** var_140 = &var_110
        
        if ((std::__ndk1::money_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::__do_get(
                &result_1, x20, zx.q(arg4.d) & 1, &var_120, zx.q(arg5[2]), arg6, &var_f8, x22_1) & 1) != 0)
            char* entry_x6
            
            if ((zx.d(*entry_x6) & 1) != 0)
                **(entry_x6 + 0x10) = 0
                *(entry_x6 + 8) = 0
                
                if (zx.d(var_f8.b) != 0)
                    (*(*x22_1 + 0x38))(x22_1, 0x2d)
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                        entry_x6.b)
            else
                *entry_x6 = 0
                
                if (zx.d(var_f8.b) != 0)
                    (*(*x22_1 + 0x38))(x22_1, 0x2d)
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                        entry_x6.b)
            
            char x0_8 = (*(*x22_1 + 0x38))(x22_1, 0x30)
            void* x8_11 = var_110
            
            if (x8_11 u< var_118 - 1)
                void* x9_3
                
                if (var_118 - 1 u> x8_11 + 1)
                    x9_3 = var_118 - 1
                else
                    x9_3 = x8_11 + 1
                
                while (zx.d(*x8_11) == zx.d(x0_8))
                    x8_11 += 1
                    
                    if (x9_3 == x8_11)
                        x8_11 = x9_3
                        break
            
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__append_forward_unsafe<char*>(
                entry_x6, x8_11)
        
        int64_t* result_2 = result_1
        
        if (result_2 == 0 || result_2[3] != result_2[4])
            goto label_10c2970
        
        if ((*(*result_2 + 0x48))(result_2) == 0xffffffff)
            result_2 = nullptr
            result_1 = nullptr
            
            if (x20 != 0)
                goto label_10c297c
            
            goto label_10c2a0c
        
        result_2 = result_1
    label_10c2970:
        
        if (x20 == 0)
        label_10c2a0c:
            
            if (result_2 == 0)
                *arg6 |= 2
        else
        label_10c297c:
            int32_t x0_13
            
            if (x20[3] == x20[4])
                x0_13 = (*(*x20 + 0x48))(x20)
            
            if (x20[3] == x20[4] && x0_13 == 0xffffffff)
                goto label_10c2a0c
            
            if (result_2 != 0)
                *arg6 |= 2
        
        int64_t* result = result_1
        std::__ndk1::__shared_count::__release_shared()
        void* x0_15 = var_110
        var_110 = nullptr
        
        if (x0_15 != 0)
            var_108(x0_15)
        
        if (*(x25 + 0x28) == var_68)
            return result
        
        __stack_chk_fail()
        noreturn

sub_f43870()
noreturn
