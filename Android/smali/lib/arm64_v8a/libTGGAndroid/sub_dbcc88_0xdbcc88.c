// 函数: sub_dbcc88
// 地址: 0xdbcc88
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg6 + arg4 u> arg2)
    void** x0_1 = __cxa_allocate_exception(0x20)
    int64_t x0_2
    int128_t v0
    x0_2, v0 = operator new(0x20)
    int64_t var_40 = x0_2
    int128_t var_50 = data_71cd20
    __builtin_strncpy(x0_2, "basecase_mul z_size too small", 0x1e)
    *x0_1 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_1[1])
    *x0_1 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_1, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

void* x22 = arg1
int64_t x2 = arg2 << 2

if (x2 != 0)
    memset(x22, 0, x2)

if (arg6 == 0)
    return 

int64_t x9_1 = 0
int64_t i_5 = arg4 & 0xfffffffffffffff8

if (i_5 == 0)
    void* x10_2 = x22
    
    do
        uint64_t x11_2
        
        if (i_5 == arg4)
            x11_2 = 0
        else
            uint64_t x12_3 = zx.q(*(arg5 + (x9_1 << 2)))
            x11_2 = 0
            int32_t* x13_2 = arg3
            void* x14_3 = x10_2
            int64_t i_4 = arg4
            int64_t i
            
            do
                uint64_t x16_3 = zx.q(*x13_2)
                x13_2 = &x13_2[1]
                i = i_4
                i_4 -= 1
                int64_t x16_4 = x11_2 + zx.q(*x14_3) + x16_3 * x12_3
                x11_2 = x16_4 u>> 0x20
                *x14_3 = x16_4.d
                x14_3 += 4
            while (i != 1)
        
        int64_t x12_2 = x9_1 + arg4
        x9_1 += 1
        x10_2 += 4
        *(x22 + (x12_2 << 2)) = x11_2.d
    while (x9_1 != arg6)
    
    return 

void* x10_1 = x22 + 0x10
int32_t* x13_1 = x22 + (i_5 << 2)

do
    uint64_t x15_2 = zx.q(*(arg5 + (x9_1 << 2)))
    uint64_t x1 = 0
    void* x16_1 = &arg3[4]
    void* x17_1 = x10_1
    int64_t i_3 = i_5
    int64_t i_1
    
    do
        uint64_t x4 = zx.q(*(x17_1 - 0xc))
        i_1 = i_3
        i_3 -= 8
        int64_t x1_2 = x1 + zx.q(*(x17_1 - 0x10)) + zx.q(*(x16_1 - 0x10)) * x15_2
        *(x17_1 - 0x10) = x1_2.d
        int64_t x1_3 = x4 + zx.q(*(x16_1 - 0xc)) * x15_2 + (x1_2 u>> 0x20)
        *(x17_1 - 0xc) = x1_3.d
        uint64_t x4_1 = zx.q(*(x17_1 - 4))
        int64_t x1_4 = zx.q(*(x17_1 - 8)) + zx.q(*(x16_1 - 8)) * x15_2 + (x1_3 u>> 0x20)
        *(x17_1 - 8) = x1_4.d
        int64_t x1_5 = x4_1 + zx.q(*(x16_1 - 4)) * x15_2 + (x1_4 u>> 0x20)
        *(x17_1 - 4) = x1_5.d
        uint64_t x4_2 = zx.q(*(x17_1 + 4))
        int64_t x1_6 = zx.q(*x17_1) + zx.q(*x16_1) * x15_2 + (x1_5 u>> 0x20)
        *x17_1 = x1_6.d
        int64_t x1_7 = x4_2 + zx.q(*(x16_1 + 4)) * x15_2 + (x1_6 u>> 0x20)
        *(x17_1 + 4) = x1_7.d
        uint64_t x4_3 = zx.q(*(x17_1 + 0xc))
        int64_t x1_8 = zx.q(*(x17_1 + 8)) + zx.q(*(x16_1 + 8)) * x15_2 + (x1_7 u>> 0x20)
        *(x17_1 + 8) = x1_8.d
        uint64_t x2_14 = zx.q(*(x16_1 + 0xc))
        x16_1 += 0x20
        int64_t x2_16 = x4_3 + x2_14 * x15_2 + (x1_8 u>> 0x20)
        x1 = x2_16 u>> 0x20
        *(x17_1 + 0xc) = x2_16.d
        x17_1 += 0x20
    while (i_1 != 8)
    int32_t* x16_2 = &arg3[i_5]
    int32_t* x17_2 = x13_1
    arg1 = arg4 - i_5
    
    if (i_5 != arg4)
        void* i_2
        
        do
            uint64_t x2_17 = zx.q(*x16_2)
            x16_2 = &x16_2[1]
            i_2 = arg1
            arg1 -= 1
            int64_t x2_18 = x1 + zx.q(*x17_2) + x2_17 * x15_2
            x1 = x2_18 u>> 0x20
            *x17_2 = x2_18.d
            x17_2 = &x17_2[1]
        while (i_2 != 1)
    
    int64_t x15_1 = x9_1 + arg4
    x9_1 += 1
    x10_1 += 4
    x13_1 = &x13_1[1]
    *(x22 + (x15_1 << 2)) = x1.d
while (x9_1 != arg6)
