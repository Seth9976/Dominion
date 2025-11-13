// 函数: _ZNKSt6__ndk19money_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_putES4_bRNS_8ios_baseEcRKNS_12basic_stringIcS3_NS_9allocatorIcEEEE
// 地址: 0x10c5708
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x27 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x27 + 0x28)
void* x20 = arg4
std::__ndk1::ios_base::getloc()
void* var_e8
void* x19 = var_e8
int64_t var_c8 = 0
int64_t (* const var_d8)() = std::__ndk1::ctype<char>::id
int64_t (* const var_d0)() = std::__ndk1::locale::id::__init
int64_t (* const** var_120)()
int64_t (* const* var_108)()

if (*std::__ndk1::ctype<char>::id != -1)
    var_108 = &var_d8
    var_120 = &var_108
    std::__ndk1::__call_once(std::__ndk1::ctype<char>::id, &var_120, sub_10dd4b0)

int64_t x8_2 = *(x19 + 0x10)
int64_t x9_1 = sx.q(*(std::__ndk1::ctype<char>::id + 8)) - 1

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
                x24 = zx.d(**(entry_x5 + 0x10)) == zx.d((*(*x23_1 + 0x38))(x23_1, 0x2d)) ? 1 : 0
        else if (x8_3 u< 2)
            x24 = 0
        else
            x24 = zx.d(entry_x5[1]) == zx.d((*(*x23_1 + 0x38))(x23_1, 0x2d)) ? 1 : 0
        
        int64_t var_138
        __builtin_memset(&var_138, 0, 0x48)
        int64_t* var_190 = &var_138
        int32_t var_13c
        int32_t* var_188 = &var_13c
        char var_f0
        char var_ec
        std::__ndk1::money_base::pattern var_e0
        std::__ndk1::__money_put<char>::__gather_info(zx.q(arg3.d) & 1, zx.q(x24), &var_e8, 
            &var_e0, &var_ec, &var_f0, &var_108, &var_120)
        uint64_t x28 = zx.q(*entry_x5)
        uint64_t x8_7
        int32_t x19_2
        
        if ((x28.d & 1) != 0)
            x8_7 = *(entry_x5 + 8)
            x19_2 = var_13c
        else
            x19_2 = var_13c
            x8_7 = x28 u>> 1
        
        uint64_t x8_10
        uint64_t x9_5
        int64_t x10_3
        uint64_t var_130
        uint64_t var_118
        
        if (x19_2 s>= x8_7.d)
            uint64_t x8_11 = zx.q(var_138.b)
            uint64_t x10_4 = zx.q(var_120.b)
            
            if ((x8_11.d & 1) == 0)
                x8_10 = x8_11 u>> 1
            else
                x8_10 = var_130
            
            if ((x10_4.d & 1) == 0)
                x9_5 = x10_4 u>> 1
            else
                x9_5 = var_118
            
            x10_3 = sx.q(x19_2) + 2
        else
            uint64_t x10_2 = zx.q(var_138.b)
            uint64_t x12 = zx.q(var_120.b)
            int64_t x9_3 = sx.q(x19_2)
            
            if ((x10_2.d & 1) == 0)
                x8_10 = x10_2 u>> 1
            else
                x8_10 = var_130
            
            if ((x12.d & 1) == 0)
                x9_5 = x12 u>> 1
            else
                x9_5 = var_118
            
            x10_3 = x9_3 + ((x8_7 - x9_3) << 1) + 1
        size_t bytes = x10_3 + x8_10 + x9_5
        int64_t (** x25_1)()
        int64_t (* const* x26_1)()
        
        if (bytes u< 0x65)
            x25_1 = nullptr
            x26_1 = &var_d8
        else
            int64_t (** x0_5)() = malloc(bytes)
            x25_1 = x0_5
            x26_1 = x0_5
            
            if (x0_5 == 0)
                std::__throw_bad_alloc()
                noreturn
        
        int32_t temp0 = x28.d & 1
        void* x4_1
        
        if (temp0 != 0)
            x4_1 = *(entry_x5 + 0x10)
        else
            x4_1 = &entry_x5[1]
        
        uint64_t x8_14
        
        if (temp0 == 0)
            x8_14 = zx.q(x28.d u>> 1)
        else
            x8_14 = *(entry_x5 + 8)
        
        var_188.b = var_ec
        int32_t var_160 = x19_2
        char var_180 = var_f0
        int64_t (* const*** var_170)() = &var_120
        int64_t* var_168 = &var_138
        int64_t (* const** var_178)() = &var_108
        std::__ndk1::money_base::pattern* var_190_1 = &var_e0
        char* var_150
        char* var_148
        std::__ndk1::__money_put<char>::__format(x26_1, &var_148, &var_150, zx.q(*(x20 + 8)), x4_1, 
            x4_1 + x8_14, x23_1, zx.q(x24))
        int64_t* result = sub_f23ab4(arg2, x26_1, var_148, var_150, x20, arg5.d)
        
        if (x25_1 != 0)
            free(x25_1)
        
        if ((zx.d(var_138.b) & 1) == 0)
            if ((zx.d(var_120.b) & 1) != 0)
                goto label_10c5a2c
            
            goto label_10c59cc
        
        void* var_128
        operator delete(var_128)
        void* var_f8
        
        if ((zx.d(var_120.b) & 1) == 0)
        label_10c59cc:
            
            if ((zx.d(var_108.b) & 1) != 0)
                operator delete(var_f8)
        else
        label_10c5a2c:
            void* var_110
            operator delete(var_110)
            
            if ((zx.d(var_108.b) & 1) != 0)
                operator delete(var_f8)
        std::__ndk1::__shared_count::__release_shared()
        
        if (*(x27 + 0x28) == x8)
            return result
        
        __stack_chk_fail()
        noreturn

sub_f43870()
noreturn
