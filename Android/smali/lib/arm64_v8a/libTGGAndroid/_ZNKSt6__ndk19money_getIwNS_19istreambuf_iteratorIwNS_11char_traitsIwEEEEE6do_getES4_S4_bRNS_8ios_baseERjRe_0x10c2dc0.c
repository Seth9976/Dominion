// 函数: _ZNKSt6__ndk19money_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_getES4_S4_bRNS_8ios_baseERjRe
// 地址: 0x10c2dc0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x25 = _ReadMSR(tpidr_el0)
int64_t* x20 = arg3
int64_t var_70 = *(x25 + 0x28)
int64_t (* const var_2b0)(void*) = std::__ndk1::__do_nothing
int64_t* result_1 = arg2
void var_200
void* var_2b8 = &var_200
std::__ndk1::ios_base::getloc()
void* var_2c8
void* x24 = var_2c8
int64_t var_290 = 0
int64_t (* const s)() = std::__ndk1::ctype<wchar_t>::id
int64_t (* const var_298)() = std::__ndk1::locale::id::__init
int64_t (* const* var_238)()
int64_t (* const** var_210)()

if (*std::__ndk1::ctype<wchar_t>::id != -1)
    var_238 = &s
    var_210 = &var_238
    std::__ndk1::__call_once(std::__ndk1::ctype<wchar_t>::id, &var_210, sub_10dd4b0)

int64_t x8_2 = *(x24 + 0x10)
int64_t x9_1 = sx.q(*(std::__ndk1::ctype<wchar_t>::id + 8)) - 1

if (x9_1 u< (*(x24 + 0x18) - x8_2) s>> 3)
    std::__ndk1::ctype<wchar_t>* x24_1 = *(x8_2 + (x9_1 << 3))
    
    if (x24_1 != 0)
        bool var_2cc = false
        int64_t var_2c0
        int64_t* var_2e8 = &var_2c0
        int64_t* var_2e0 = &var_70
        void** var_2f0 = &var_2b8
        
        if ((std::__ndk1::money_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::__do_get(
                &result_1, x20, zx.q(arg4.d) & 1, &var_2c8, zx.q(arg5[2]), arg6, &var_2cc, x24_1) & 1) != 0)
            __builtin_strcpy(&var_210, "0123456789")
            void var_206
            (*(*x24_1 + 0x60))(x24_1, &var_210, &var_206, &var_238)
            int64_t x24_2 = var_2c0
            void* x23_1 = var_2b8
            void* x8_5 = x24_2 - x23_1
            int64_t (* const* x8_7)()
            int64_t (** x22_1)()
            
            if (x8_5 s< 0x189)
                x22_1 = nullptr
                x8_7 = &s
                
                if (zx.d(var_2cc) != 0)
                    *x8_7 = 0x2d
                    x8_7 += 1
            else
                int64_t (** x0_6)() = malloc((x8_5 u>> 2) + 2)
                x22_1 = x0_6
                x8_7 = x0_6
                
                if (x0_6 == 0)
                    std::__throw_bad_alloc()
                    noreturn
                
                if (zx.d(var_2cc) != 0)
                    *x8_7 = 0x2d
                    x8_7 += 1
            
            if (x23_1 u< x24_2)
                bool cond:1_1
                
                do
                    int32_t x3_5 = *x23_1
                    int64_t (* const*** x4_1)()
                    
                    if (var_238.d == x3_5)
                        x4_1 = &var_238
                    else
                        x4_1 = &var_238:4
                        
                        if (var_238:4.d != x3_5)
                            int32_t var_230
                            x4_1 = &var_230
                            
                            if (var_230 != x3_5)
                                int32_t var_22c
                                x4_1 = &var_22c
                                
                                if (var_22c != x3_5)
                                    int32_t var_228
                                    x4_1 = &var_228
                                    
                                    if (var_228 != x3_5)
                                        int32_t var_224
                                        x4_1 = &var_224
                                        
                                        if (var_224 != x3_5)
                                            int32_t var_220
                                            x4_1 = &var_220
                                            
                                            if (var_220 != x3_5)
                                                int32_t var_21c
                                                x4_1 = &var_21c
                                                
                                                if (var_21c != x3_5)
                                                    int32_t var_218
                                                    x4_1 = &var_218
                                                    int32_t var_214
                                                    
                                                    if (var_218 != x3_5)
                                                        if (var_214 == x3_5)
                                                            x4_1 = &var_214
                                                        else
                                                            x4_1 = &var_210
                    
                    x23_1 += 4
                    cond:1_1 = x23_1 u>= var_2c0
                    *x8_7 = *(&var_210 + ((x4_1 - &var_238) s>> 2))
                    x8_7 += 1
                while (not(cond:1_1))
            
            *x8_7 = nullptr
            int64_t entry_x6
            
            if (sscanf(&s, "%Lf", entry_x6) != 1)
                std::__ndk1::__throw_runtime_error("money_get error")
                std::__throw_bad_alloc()
                noreturn
            
            if (x22_1 != 0)
                free(x22_1)
        
        int64_t* result_2 = result_1
        
        if (result_2 == 0)
            goto label_10c30d4
        
        int32_t* x8_8 = result_2[3]
        int32_t x0_10
        
        if (x8_8 == result_2[4])
            x0_10 = (*(*result_2 + 0x48))()
        else
            x0_10 = *x8_8
        
        int32_t x21_1
        
        if (x0_10 != 0xffffffff)
            x21_1 = result_1 == 0 ? 1 : 0
            
            if (x20 != 0)
                goto label_10c30dc
            
            goto label_10c30c8
        
        result_1 = nullptr
    label_10c30d4:
        x21_1 = 1
        
        if (x20 == 0)
        label_10c30c8:
            
            if ((x21_1 & 1) != 0)
                *arg6 |= 2
        else
        label_10c30dc:
            int32_t* x8_12 = x20[3]
            int32_t x0_11
            
            if (x8_12 == x20[4])
                x0_11 = (*(*x20 + 0x48))(x20)
            else
                x0_11 = *x8_12
            
            if (((x21_1 ^ (x0_11 == 0xffffffff ? 1 : 0)) & 1) == 0)
                *arg6 |= 2
        
        int64_t* result = result_1
        std::__ndk1::__shared_count::__release_shared()
        void* x0_14 = var_2b8
        var_2b8 = nullptr
        
        if (x0_14 != 0)
            var_2b0(x0_14)
        
        if (*(x25 + 0x28) == var_70)
            return result
        
        __stack_chk_fail()
        noreturn

sub_f43870()
noreturn
