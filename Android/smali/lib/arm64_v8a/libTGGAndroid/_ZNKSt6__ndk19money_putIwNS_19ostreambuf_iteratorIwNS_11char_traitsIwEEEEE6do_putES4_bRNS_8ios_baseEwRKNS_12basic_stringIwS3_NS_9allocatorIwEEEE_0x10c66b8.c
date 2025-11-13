// 函数: _ZNKSt6__ndk19money_putIwNS_19ostreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_putES4_bRNS_8ios_baseEwRKNS_12basic_stringIwS3_NS_9allocatorIwEEEE
// 地址: 0x10c66b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x27 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x27 + 0x28)
void* x20 = arg4
std::__ndk1::ios_base::getloc()
void* var_210
void* x19 = var_210
int64_t var_1f0 = 0
int64_t (* const var_200)() = std::__ndk1::ctype<wchar_t>::id
int64_t (* const var_1f8)() = std::__ndk1::locale::id::__init
int64_t (* const** var_248)()
int64_t (* const* var_230)()

if (*std::__ndk1::ctype<wchar_t>::id != -1)
    var_230 = &var_200
    var_248 = &var_230
    std::__ndk1::__call_once(std::__ndk1::ctype<wchar_t>::id, &var_248, sub_10dd4b0)

int64_t x8_2 = *(x19 + 0x10)
int64_t x9_1 = sx.q(*(std::__ndk1::ctype<wchar_t>::id + 8)) - 1

if (x9_1 u< (*(x19 + 0x18) - x8_2) s>> 3)
    int64_t* x23_1 = *(x8_2 + (x9_1 << 3))
    
    if (x23_1 != 0)
        char* entry_x5
        uint32_t x8_3 = zx.d(*entry_x5)
        int32_t x24
        
        if ((x8_3 & 1) != 0)
            if (*(entry_x5 + 8) == 0)
                x24 = 0
            else
                x24 = **(entry_x5 + 0x10) == (*(*x23_1 + 0x58))(x23_1, 0x2d) ? 1 : 0
        else if (x8_3 u< 2)
            x24 = 0
        else
            x24 = *(entry_x5 + 4) == (*(*x23_1 + 0x58))(x23_1, 0x2d) ? 1 : 0
        
        int64_t var_260
        __builtin_memset(&var_260, 0, 0x48)
        int64_t* var_2c0 = &var_260
        int32_t var_264
        int32_t* var_2b8 = &var_264
        wchar_t var_218
        wchar_t var_214
        std::__ndk1::money_base::pattern var_208
        std::__ndk1::__money_put<wchar_t>::__gather_info(zx.q(arg3.d) & 1, zx.q(x24), &var_210, 
            &var_208, &var_214, &var_218, &var_230, &var_248)
        uint64_t x28 = zx.q(*entry_x5)
        uint64_t x8_7
        int32_t x19_2
        
        if ((x28.d & 1) != 0)
            x8_7 = *(entry_x5 + 8)
            x19_2 = var_264
        else
            x19_2 = var_264
            x8_7 = x28 u>> 1
        
        uint64_t x8_10
        uint64_t x9_5
        int64_t x10_3
        uint64_t var_258
        uint64_t var_240
        
        if (x19_2 s>= x8_7.d)
            uint64_t x8_11 = zx.q(var_260.b)
            uint64_t x10_4 = zx.q(var_248.b)
            
            if ((x8_11.d & 1) == 0)
                x8_10 = x8_11 u>> 1
            else
                x8_10 = var_258
            
            if ((x10_4.d & 1) == 0)
                x9_5 = x10_4 u>> 1
            else
                x9_5 = var_240
            
            x10_3 = sx.q(x19_2) + 2
        else
            uint64_t x10_2 = zx.q(var_260.b)
            uint64_t x12 = zx.q(var_248.b)
            int64_t x9_3 = sx.q(x19_2)
            
            if ((x10_2.d & 1) == 0)
                x8_10 = x10_2 u>> 1
            else
                x8_10 = var_258
            
            if ((x12.d & 1) == 0)
                x9_5 = x12 u>> 1
            else
                x9_5 = var_240
            
            x10_3 = x9_3 + ((x8_7 - x9_3) << 1) + 1
        int64_t x8_13 = x10_3 + x8_10 + x9_5
        int64_t (** x25_1)()
        int64_t (* const* x26_1)()
        
        if (x8_13 u< 0x65)
            x25_1 = nullptr
            x26_1 = &var_200
        else
            int64_t (** x0_6)() = malloc(x8_13 << 2)
            x25_1 = x0_6
            x26_1 = x0_6
            
            if (x0_6 == 0)
                std::__throw_bad_alloc()
                noreturn
        
        int32_t temp0 = x28.d & 1
        void* x4_1
        
        if (temp0 == 0)
            x4_1 = &entry_x5[4]
        else
            x4_1 = *(entry_x5 + 0x10)
        
        uint64_t x8_15
        
        if (temp0 == 0)
            x8_15 = zx.q(x28.d u>> 1)
        else
            x8_15 = *(entry_x5 + 8)
        
        int32_t var_290 = x19_2
        wchar_t var_2b0 = var_218
        var_2b8.d = var_214
        int64_t (* const*** var_2a0)() = &var_248
        int64_t* var_298 = &var_260
        int64_t (* const** var_2a8)() = &var_230
        std::__ndk1::money_base::pattern* var_2c0_1 = &var_208
        wchar_t* var_278
        wchar_t* var_270
        std::__ndk1::__money_put<wchar_t>::__format(x26_1, &var_270, &var_278, zx.q(*(x20 + 8)), 
            x4_1, x4_1 + (x8_15 << 2), x23_1, zx.q(x24))
        int64_t* result = sub_10bac8c(arg2, x26_1, var_270, var_278, x20, arg5.d)
        
        if (x25_1 != 0)
            free(x25_1)
        
        if ((zx.d(var_260.b) & 1) == 0)
            if ((zx.d(var_248.b) & 1) != 0)
                goto label_10c69e0
            
            goto label_10c6980
        
        void* var_250
        operator delete(var_250)
        void* var_220
        
        if ((zx.d(var_248.b) & 1) == 0)
        label_10c6980:
            
            if ((zx.d(var_230.b) & 1) != 0)
                operator delete(var_220)
        else
        label_10c69e0:
            void* var_238
            operator delete(var_238)
            
            if ((zx.d(var_230.b) & 1) != 0)
                operator delete(var_220)
        std::__ndk1::__shared_count::__release_shared()
        
        if (*(x27 + 0x28) == x8)
            return result
        
        __stack_chk_fail()
        noreturn

sub_f43870()
noreturn
