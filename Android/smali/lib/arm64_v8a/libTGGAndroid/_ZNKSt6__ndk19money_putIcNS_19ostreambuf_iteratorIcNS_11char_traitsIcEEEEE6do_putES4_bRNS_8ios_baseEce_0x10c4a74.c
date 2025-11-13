// 函数: _ZNKSt6__ndk19money_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_putES4_bRNS_8ios_baseEce
// 地址: 0x10c4a74
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x28 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x28 + 0x28)
void* x22 = arg4
char var_d4[0x64]
char* var_1b0 = &var_d4
int128_t var_230 = arg5.o
int32_t bytes_2
int64_t entry_x4
int128_t v0
int128_t entry_v1
int128_t entry_v2
int128_t entry_v3
int128_t entry_v4
int128_t entry_v5
int128_t entry_v6
int128_t entry_v7
bytes_2, v0 = sub_10c4f18(&var_d4, 0x64, arg3, arg4, entry_x4, arg5, entry_v1, entry_v2, entry_v3, 
    entry_v4, entry_v5, entry_v6, entry_v7)
char* x19_1
char* x20
char* x24
int64_t bytes_1

if (bytes_2 u< 0x64)
    x20 = nullptr
    x19_1 = nullptr
    void var_138
    x24 = &var_138
    bytes_1 = sx.q(bytes_2)
else
    if ((zx.d(data_24bad08) & 1) == 0)
        int32_t x0_19
        x0_19, v0 = __cxa_guard_acquire(&data_24bad08)
        
        if (x0_19 != 0)
            data_24bad00 = newlocale(0x1fbf, 0x739c3c, nullptr)
            __cxa_guard_release(&data_24bad08)
    
    int32_t bytes_3 = std::__ndk1::__libcpp_asprintf_l(&var_1b0, data_24bad00, "%.0Lf")
    x19_1 = var_1b0
    
    if (x19_1 == 0)
        std::__throw_bad_alloc()
        noreturn
    
    bytes_1 = sx.q(bytes_3)
    char* x0_3 = malloc(bytes_1)
    
    if (x0_3 == 0)
        std::__throw_bad_alloc()
        noreturn
    
    x20 = x0_3
    x24 = x0_3

var_230.q = x19_1
std::__ndk1::ios_base::getloc()
void* var_1b8
void* x21_1 = var_1b8
int64_t var_190 = 0
int64_t (* const var_1a0)() = std::__ndk1::ctype<char>::id
int64_t (* const var_198)() = std::__ndk1::locale::id::__init
int64_t (* const** var_1f0)()
int64_t (* const* var_1d8)()

if (*std::__ndk1::ctype<char>::id != -1)
    var_1d8 = &var_1a0
    var_1f0 = &var_1d8
    std::__ndk1::__call_once(std::__ndk1::ctype<char>::id, &var_1f0, sub_10dd4b0)

int64_t x8_3 = *(x21_1 + 0x10)
int64_t x9_1 = sx.q(*(std::__ndk1::ctype<char>::id + 8)) - 1

if (x9_1 u< (*(x21_1 + 0x18) - x8_3) s>> 3)
    int64_t* x27_1 = *(x8_3 + (x9_1 << 3))
    
    if (x27_1 != 0)
        char* x1_2 = var_1b0
        (*(*x27_1 + 0x40))(x27_1, x1_2, &x1_2[bytes_1], x24)
        int32_t x28_1
        
        if (bytes_1 == 0)
            x28_1 = 0
        else
            x28_1 = zx.d(*var_1b0) == 0x2d ? 1 : 0
        
        int64_t var_208
        __builtin_memset(&var_208, 0, 0x48)
        int64_t* var_280 = &var_208
        int32_t var_20c
        int32_t* var_278 = &var_20c
        char var_1c0
        char var_1bc
        std::__ndk1::money_base::pattern var_1a8
        std::__ndk1::__money_put<char>::__gather_info(zx.q(arg3.d) & 1, zx.q(x28_1), &var_1b8, 
            &var_1a8, &var_1bc, &var_1c0, &var_1d8, &var_1f0)
        int64_t x21_2 = sx.q(var_20c)
        uint64_t x8_10
        uint64_t x9_4
        int64_t x10_3
        uint64_t var_200
        uint64_t var_1e8
        
        if (x21_2.d s>= bytes_1.d)
            uint64_t x8_11 = zx.q(var_208.b)
            uint64_t x10_4 = zx.q(var_1f0.b)
            
            if ((x8_11.d & 1) == 0)
                x8_10 = x8_11 u>> 1
            else
                x8_10 = var_200
            
            if ((x10_4.d & 1) == 0)
                x9_4 = x10_4 u>> 1
            else
                x9_4 = var_1e8
            
            x10_3 = x21_2 + 2
        else
            uint64_t x9_2 = zx.q(var_208.b)
            uint64_t x11 = zx.q(var_1f0.b)
            
            if ((x9_2.d & 1) == 0)
                x8_10 = x9_2 u>> 1
            else
                x8_10 = var_200
            
            if ((x11.d & 1) == 0)
                x9_4 = x11 u>> 1
            else
                x9_4 = var_1e8
            
            x10_3 = x21_2 + ((bytes_1 - x21_2) << 1) + 1
        size_t bytes = x10_3 + x8_10 + x9_4
        int64_t (** x23_1)()
        int64_t (* const* x26_1)()
        
        if (bytes u< 0x65)
            x23_1 = nullptr
            x26_1 = &var_1a0
        else
            int64_t (** x0_8)() = malloc(bytes)
            x23_1 = x0_8
            x26_1 = x0_8
            
            if (x0_8 == 0)
                std::__throw_bad_alloc()
                noreturn
        
        char var_270 = var_1c0
        var_278.b = var_1bc
        int32_t var_250 = x21_2.d
        int64_t (* const*** var_260)() = &var_1f0
        int64_t* var_258 = &var_208
        int64_t (* const** var_268)() = &var_1d8
        std::__ndk1::money_base::pattern* var_280_1 = &var_1a8
        char* var_220
        char* var_218
        std::__ndk1::__money_put<char>::__format(x26_1, &var_218, &var_220, zx.q(*(x22 + 8)), x24, 
            &x24[bytes_1], x27_1, zx.q(x28_1))
        int64_t* result = sub_f23ab4(arg2, x26_1, var_218, var_220, x22, entry_x4.d)
        
        if (x23_1 != 0)
            free(x23_1)
        
        void* var_1f8
        
        if ((zx.d(var_208.b) & 1) != 0)
            operator delete(var_1f8)
        int64_t x22_1 = var_230.q
        void* var_1e0
        
        if ((zx.d(var_1f0.b) & 1) != 0)
            operator delete(var_1e0)
        void* var_1c8
        
        if ((zx.d(var_1d8.b) & 1) != 0)
            operator delete(var_1c8)
        std::__ndk1::__shared_count::__release_shared()
        
        if (x20 != 0)
            free(x20)
        
        if (x22_1 != 0)
            free(x22_1)
        
        if (*(x28 + 0x28) == x8)
            return result
        
        __stack_chk_fail()
        noreturn

sub_f43870()
noreturn
