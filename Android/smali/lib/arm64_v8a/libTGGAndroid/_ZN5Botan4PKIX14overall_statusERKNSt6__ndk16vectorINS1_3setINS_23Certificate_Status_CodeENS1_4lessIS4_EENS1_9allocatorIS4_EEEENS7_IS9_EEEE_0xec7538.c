// 函数: _ZN5Botan4PKIX14overall_statusERKNSt6__ndk16vectorINS1_3setINS_23Certificate_Status_CodeENS1_4lessIS4_EENS1_9allocatorIS4_EEEENS7_IS9_EEEE
// 地址: 0xec7538
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *arg1
int64_t x9 = *(arg1 + 8)

if (x8 == x9)
    void** x0 = __cxa_allocate_exception(0x20)
    int64_t x0_1
    int128_t v0
    x0_1, v0 = operator new(0x30)
    v0 = data_71b5b0
    int64_t var_30 = x0_1
    __builtin_strncpy(x0_1, "PKIX::overall_status empty cert status", 0x27)
    int128_t var_40 = v0
    *x0 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0[1])
    *x0 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

uint64_t result = 0

do
    if (*(x8 + 0x10) != 0)
        void* i = x8 + 8
        void* i_1 = *i
        void* i_2
        
        if (i_1 == 0)
            for (; **(i + 0x10) == i; i = *(i + 0x10))
            
            i_2 = *(i + 0x10)
        else
            do
                i_2 = i_1
                i_1 = *(i_1 + 8)
            while (i_1 != 0)
        
        int32_t result_1 = *(i_2 + 0x1c)
        bool v_1
        bool z_1
        bool n_1
        
        if (result_1 s> result.d)
            v_1 = add_overflow(result_1, 0xfffffc19)
            z_1 = result_1 == 0x3e7
            n_1 = result_1 - 0x3e7 s< 0
        else
            n_1 = false
            z_1 = true
            v_1 = false
        
        if (not(z_1) && n_1 == v_1)
            result = zx.q(result_1)
        else
            result = zx.q(result.d)
    
    x8 += 0x18
while (x8 != x9)

return result
