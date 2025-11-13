// 函数: _ZNKSt6__ndk19money_putIwNS_19ostreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_putES4_bRNS_8ios_baseEwe
// 地址: 0x10c5ad0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x28 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x28 + 0x28)
void* x22 = arg4
char var_d4[0x64]
char* var_408 = &var_d4
int128_t var_490 = arg5.o
int32_t x0_1
int64_t entry_x4
int128_t v0
int128_t entry_v1
int128_t entry_v2
int128_t entry_v3
int128_t entry_v4
int128_t entry_v5
int128_t entry_v6
int128_t entry_v7
x0_1, v0 = sub_10c4f18(&var_d4, 0x64, arg3, arg4, entry_x4, arg5, entry_v1, entry_v2, entry_v3, 
    entry_v4, entry_v5, entry_v6, entry_v7)
char* x19_1
int64_t x21
wchar_t* x24
wchar_t* x27

if (x0_1 u< 0x64)
    x27 = nullptr
    x19_1 = nullptr
    void var_264
    x24 = &var_264
    x21 = sx.q(x0_1)
else
    if ((zx.d(data_24bad08) & 1) == 0)
        int32_t x0_22
        x0_22, v0 = __cxa_guard_acquire(&data_24bad08)
        
        if (x0_22 != 0)
            data_24bad00 = newlocale(0x1fbf, 0x739c3c, nullptr)
            __cxa_guard_release(&data_24bad08)
    
    int32_t x0_3 = std::__ndk1::__libcpp_asprintf_l(&var_408, data_24bad00, "%.0Lf")
    x19_1 = var_408
    
    if (x19_1 == 0)
        std::__throw_bad_alloc()
        noreturn
    
    x21 = sx.q(x0_3)
    wchar_t* x0_5 = malloc(x21 << 2)
    
    if (x0_5 == 0)
        std::__throw_bad_alloc()
        noreturn
    
    x27 = x0_5
    x24 = x0_5

var_490.q = x19_1
std::__ndk1::ios_base::getloc()
void* var_410
void* x23_1 = var_410
int64_t var_3e8 = 0
int64_t (* const var_3f8)() = std::__ndk1::ctype<wchar_t>::id
int64_t (* const var_3f0)() = std::__ndk1::locale::id::__init
int64_t (* const** var_448)()
int64_t (* const* var_430)()

if (*std::__ndk1::ctype<wchar_t>::id != -1)
    var_430 = &var_3f8
    var_448 = &var_430
    std::__ndk1::__call_once(std::__ndk1::ctype<wchar_t>::id, &var_448, sub_10dd4b0)

int64_t x8_3 = *(x23_1 + 0x10)
int64_t x9_1 = sx.q(*(std::__ndk1::ctype<wchar_t>::id + 8)) - 1

if (x9_1 u< (*(x23_1 + 0x18) - x8_3) s>> 3)
    int64_t* x26_1 = *(x8_3 + (x9_1 << 3))
    
    if (x26_1 != 0)
        char* x1_2 = var_408
        (*(*x26_1 + 0x60))(x26_1, x1_2, &x1_2[x21], x24)
        int32_t x27_1
        
        if (x21 == 0)
            x27_1 = 0
        else
            x27_1 = zx.d(*var_408) == 0x2d ? 1 : 0
        
        int64_t var_460
        __builtin_memset(&var_460, 0, 0x48)
        int64_t* var_4e0 = &var_460
        int32_t var_464
        int32_t* var_4d8 = &var_464
        wchar_t var_418
        wchar_t var_414
        std::__ndk1::money_base::pattern var_400
        std::__ndk1::__money_put<wchar_t>::__gather_info(zx.q(arg3.d) & 1, zx.q(x27_1), &var_410, 
            &var_400, &var_414, &var_418, &var_430, &var_448)
        int64_t x23_2 = sx.q(var_464)
        uint64_t x8_10
        uint64_t x9_4
        int64_t x10_3
        uint64_t var_458
        uint64_t var_440
        
        if (x23_2.d s>= x21.d)
            uint64_t x8_11 = zx.q(var_460.b)
            uint64_t x10_4 = zx.q(var_448.b)
            
            if ((x8_11.d & 1) == 0)
                x8_10 = x8_11 u>> 1
            else
                x8_10 = var_458
            
            if ((x10_4.d & 1) == 0)
                x9_4 = x10_4 u>> 1
            else
                x9_4 = var_440
            
            x10_3 = x23_2 + 2
        else
            uint64_t x9_2 = zx.q(var_460.b)
            uint64_t x11 = zx.q(var_448.b)
            
            if ((x9_2.d & 1) == 0)
                x8_10 = x9_2 u>> 1
            else
                x8_10 = var_458
            
            if ((x11.d & 1) == 0)
                x9_4 = x11 u>> 1
            else
                x9_4 = var_440
            
            x10_3 = x23_2 + ((x21 - x23_2) << 1) + 1
        int64_t x8_13 = x10_3 + x8_10 + x9_4
        int64_t (** x25_1)()
        int64_t (* const* x28_1)()
        
        if (x8_13 u< 0x65)
            x25_1 = nullptr
            x28_1 = &var_3f8
        else
            int64_t (** x0_11)() = malloc(x8_13 << 2)
            x25_1 = x0_11
            x28_1 = x0_11
            
            if (x0_11 == 0)
                std::__throw_bad_alloc()
                noreturn
        
        wchar_t var_4d0 = var_418
        var_4d8.d = var_414
        int32_t var_4b0 = x23_2.d
        int64_t (* const*** var_4c0)() = &var_448
        int64_t* var_4b8 = &var_460
        int64_t (* const** var_4c8)() = &var_430
        std::__ndk1::money_base::pattern* var_4e0_1 = &var_400
        wchar_t* var_478
        wchar_t* var_470
        std::__ndk1::__money_put<wchar_t>::__format(x28_1, &var_470, &var_478, zx.q(*(x22 + 8)), 
            x24, &x24[x21], x26_1, zx.q(x27_1))
        int64_t* result = sub_10bac8c(arg2, x28_1, var_470, var_478, x22, entry_x4.d)
        int64_t x22_1 = var_490.q
        
        if (x25_1 != 0)
            free(x25_1)
        
        if ((zx.d(var_460.b) & 1) == 0)
            if ((zx.d(var_448.b) & 1) != 0)
                goto label_10c5e44
            
            goto label_10c5dcc
        
        void* var_450
        operator delete(var_450)
        void* var_420
        
        if ((zx.d(var_448.b) & 1) == 0)
        label_10c5dcc:
            
            if ((zx.d(var_430.b) & 1) != 0)
                operator delete(var_420)
        else
        label_10c5e44:
            void* var_438
            operator delete(var_438)
            
            if ((zx.d(var_430.b) & 1) != 0)
                operator delete(var_420)
        std::__ndk1::__shared_count::__release_shared()
        
        if (x27 != 0)
            free(x27)
        
        if (x22_1 != 0)
            free(x22_1)
        
        if (*(x28 + 0x28) == x8)
            return result
        
        __stack_chk_fail()
        noreturn

sub_f43870()
noreturn
