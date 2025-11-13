// 函数: _ZN5Botan14Entropy_Source6createERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xd65398
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x11 = zx.q(*arg1)
uint64_t x9 = *(arg1 + 8)
int32_t x10 = x11.d & 1
uint64_t x11_1 = x11 u>> 1
uint64_t x12

x12 = x10 == 0 ? x11_1 : x9

if (x12 != 0xa)
    goto label_d65400

int64_t* entry_x8

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
    arg1, 0, -ffffffffffffffff, "system_rng").d == 0)
label_d654c4:
    arg1 = operator new(8)
    *arg1 = &_vtable_for_Botan::(anonymous namespace)::System_RNG_EntropySource{for `Botan::Entropy_Source'}
    *entry_x8 = arg1
    return 

uint64_t x8 = zx.q(*arg1)
x9 = *(arg1 + 8)
x10 = x8.d & 1
x11_1 = x8 u>> 1
label_d65400:
uint64_t x8_1

if ((x10 & 0xff) == 0)
    x8_1 = x11_1
else
    x8_1 = x9

if (x8_1 == 0xf)
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            arg1, 0, -ffffffffffffffff, "win32_cryptoapi").d == 0)
        goto label_d654c4
    
    uint64_t x8_2 = zx.q(*arg1)
    x9 = *(arg1 + 8)
    x10 = x8_2.d & 1
    x11_1 = x8_2 u>> 1

uint64_t x8_3

if ((x10 & 0xff) == 0)
    x8_3 = x11_1
else
    x8_3 = x9

if (x8_3 != 0xa)
    goto label_d65480

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        arg1, 0, -ffffffffffffffff, "dev_random").d == 0)
    std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >
        * x0_4 = operator new(0x28)
    char var_78_1 = 0x18
    char var_60_1 = 0x16
    int64_t var_77
    __builtin_strncpy(&var_77, "/dev/urandom", 0xd)
    int64_t var_5f
    __builtin_strncpy(&var_5f, "/dev/random", 0xc)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
        x0_5 = operator new(0x30)
    char* x21_1 = x0_5
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
        var_48_1 = x0_5
    void* __offset(
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
        0x30) var_38_1 = x0_5 + 0x30
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        x0_5)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x21_1[0x18])
    void* var_40_1 = &x21_1[0x30]
    Botan::Device_EntropySource::Device_EntropySource(x0_4)
    uint32_t x8_8 = zx.d(x21_1[0x18])
    *entry_x8 = x0_4
    
    if ((x8_8 & 1) != 0)
        operator delete(*(x21_1 + 0x28))
        
        if ((zx.d(*x21_1) & 1) == 0)
            operator delete(x21_1)
        else
            operator delete(*(x21_1 + 0x10))
            operator delete(x21_1)
    else if ((zx.d(*x21_1) & 1) != 0)
        operator delete(*(x21_1 + 0x10))
        operator delete(x21_1)
    else
        operator delete(x21_1)
else
    uint64_t x8_4 = zx.q(*arg1)
    x9 = *(arg1 + 8)
    x10 = x8_4.d & 1
    x11_1 = x8_4 u>> 1
label_d65480:
    uint64_t x8_5
    
    if ((x10 & 0xff) == 0)
        x8_5 = x11_1
    else
        x8_5 = x9
    
    if (x8_5 != 9)
        *entry_x8 = 0
    else if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            arg1, 0, -ffffffffffffffff, "proc_walk").d != 0)
        *entry_x8 = 0
    else if (getauxval(0x17) == 0)
        char var_78_2
        __builtin_strcpy(&var_78_2, "\n/proc")
        void** x0_13 = operator new(0x68)
        *x0_13 = _vtable_for_Botan::ProcWalking_EntropySource + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_13[1])
        __builtin_memset(&x0_13[4], 0, 0x48)
        *entry_x8 = x0_13
    else
        *entry_x8 = 0
