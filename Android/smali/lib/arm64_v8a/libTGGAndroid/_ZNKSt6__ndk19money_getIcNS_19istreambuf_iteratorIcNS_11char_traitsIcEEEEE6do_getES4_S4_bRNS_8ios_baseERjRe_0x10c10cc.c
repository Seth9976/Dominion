// 函数: _ZNKSt6__ndk19money_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_getES4_S4_bRNS_8ios_baseERjRe
// 地址: 0x10c10cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x25 = _ReadMSR(tpidr_el0)
int64_t* x20 = arg3
int64_t var_70 = *(x25 + 0x28)
int64_t (* const var_168)(void*) = std::__ndk1::__do_nothing
int64_t* result_1 = arg2
void var_d4
void* var_170 = &var_d4
std::__ndk1::ios_base::getloc()
void* var_180
void* x24 = var_180
int64_t var_148 = 0
int64_t (* const s)() = std::__ndk1::ctype<char>::id
int64_t (* const var_150)() = std::__ndk1::locale::id::__init
int64_t (* const** var_f0)()
int64_t (* const* var_e0)()

if (*std::__ndk1::ctype<char>::id != -1)
    var_e0 = &s
    var_f0 = &var_e0
    std::__ndk1::__call_once(std::__ndk1::ctype<char>::id, &var_f0, sub_10dd4b0)

int64_t x8_2 = *(x24 + 0x10)
int64_t x9_1 = sx.q(*(std::__ndk1::ctype<char>::id + 8)) - 1

if (x9_1 u< (*(x24 + 0x18) - x8_2) s>> 3)
    std::__ndk1::ctype<char>* x24_1 = *(x8_2 + (x9_1 << 3))
    
    if (x24_1 != 0)
        bool var_184 = false
        int64_t var_178
        int64_t* var_198 = &var_178
        int64_t* var_190 = &var_70
        void** var_1a0 = &var_170
        
        if ((std::__ndk1::money_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::__do_get(
                &result_1, x20, zx.q(arg4.d) & 1, &var_180, zx.q(arg5[2]), arg6, &var_184, x24_1) & 1) != 0)
            __builtin_strcpy(&var_e0, "0123456789")
            void var_d6
            (*(*x24_1 + 0x40))(x24_1, &var_e0, &var_d6, &var_f0)
            int64_t x24_2 = var_178
            void* x23_1 = var_170
            void* x8_5 = x24_2 - x23_1
            char* x8_6
            char* x22_1
            
            if (x8_5 s< 0x63)
                x22_1 = nullptr
                x8_6 = &s
                
                if (zx.d(var_184) != 0)
                    *x8_6 = 0x2d
                    x8_6 = &x8_6[1]
            else
                char* x0_6 = malloc(x8_5 + 2)
                x22_1 = x0_6
                x8_6 = x0_6
                
                if (x0_6 == 0)
                    std::__throw_bad_alloc()
                    noreturn
                
                if (zx.d(var_184) != 0)
                    *x8_6 = 0x2d
                    x8_6 = &x8_6[1]
            
            if (x23_1 u< x24_2)
                bool cond:1_1
                
                do
                    uint32_t x3_4 = zx.d(*x23_1)
                    void* x4_1
                    
                    if (zx.d(var_f0.b) == x3_4)
                        x4_1 = &var_f0
                    else
                        x4_1 = &var_f0 | 1
                        
                        if (zx.d(var_f0:1.b) != x3_4)
                            x4_1 = &var_f0 | 2
                            
                            if (zx.d(var_f0:2.b) != x3_4)
                                x4_1 = &var_f0 | 3
                                
                                if (zx.d(var_f0:3.b) != x3_4)
                                    x4_1 = &var_f0:4
                                    
                                    if (zx.d(var_f0:4.b) != x3_4)
                                        x4_1 = &var_f0:5
                                        
                                        if (zx.d(var_f0:5.b) != x3_4)
                                            x4_1 = &var_f0:6
                                            
                                            if (zx.d(var_f0:6.b) != x3_4)
                                                x4_1 = &var_f0:7
                                                
                                                if (zx.d(var_f0:7.b) != x3_4)
                                                    char var_e8
                                                    x4_1 = &var_e8
                                                    char var_e7
                                                    
                                                    if (zx.d(var_e8) != x3_4)
                                                        void var_e6
                                                        
                                                        if (zx.d(var_e7) == x3_4)
                                                            x4_1 = &var_e7
                                                        else
                                                            x4_1 = &var_e6
                    
                    x23_1 += 1
                    cond:1_1 = x23_1 u>= var_178
                    *x8_6 = *(&var_e0 + x4_1 - &var_f0)
                    x8_6 = &x8_6[1]
                while (not(cond:1_1))
            
            *x8_6 = 0
            int64_t entry_x6
            
            if (sscanf(&s, "%Lf", entry_x6) != 1)
                std::__ndk1::__throw_runtime_error("money_get error")
                std::__throw_bad_alloc()
                noreturn
            
            if (x22_1 != 0)
                free(x22_1)
        
        int64_t* result_2 = result_1
        
        if (result_2 == 0 || result_2[3] != result_2[4])
            goto label_10c13ac
        
        if ((*(*result_2 + 0x48))(result_2) == 0xffffffff)
            result_2 = nullptr
            result_1 = nullptr
            
            if (x20 != 0)
                goto label_10c13b8
            
            goto label_10c145c
        
        result_2 = result_1
    label_10c13ac:
        
        if (x20 == 0)
        label_10c145c:
            
            if (result_2 == 0)
                *arg6 |= 2
        else
        label_10c13b8:
            int32_t x0_13
            
            if (x20[3] == x20[4])
                x0_13 = (*(*x20 + 0x48))(x20)
            
            if (x20[3] == x20[4] && x0_13 == 0xffffffff)
                goto label_10c145c
            
            if (result_2 != 0)
                *arg6 |= 2
        
        int64_t* result = result_1
        std::__ndk1::__shared_count::__release_shared()
        void* x0_15 = var_170
        var_170 = nullptr
        
        if (x0_15 != 0)
            var_168(x0_15)
        
        if (*(x25 + 0x28) == var_70)
            return result
        
        __stack_chk_fail()
        noreturn

sub_f43870()
noreturn
