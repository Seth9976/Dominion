// 函数: _ZN5Botan9Skein_51213initial_blockEv
// 地址: 0xe2755c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x21 + 0x28)
int128_t var_70
__builtin_memset(&var_70, 0, 0x40)
uint8_t* entry_x0
int128_t v0
int128_t v1
v0, v1 = Botan::SymmetricAlgorithm::set_key(*(entry_x0 + 0x28), &var_70)
v1 = data_7afdd0
int128_t var_90 = *"SHA3"
int128_t var_80 = v1
var_90:8.d = (*(entry_x0 + 0x20)).d
**(entry_x0 + 0x30) = 0
*(*(entry_x0 + 0x30) + 8) = -0x3c00000000000000
Botan::Skein_512::ubi_512(entry_x0, &var_90)
uint64_t x8_4 = zx.q(entry_x0[8])
uint64_t x9_1

if ((x8_4.d & 1) == 0)
    x9_1 = x8_4 u>> 1
else
    x9_1 = *(entry_x0 + 0x10)

int64_t result

if (x9_1 == 0)
    result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        &entry_x0[8], 0, -ffffffffffffffff, &data_793a18)
    
    if (result.d != 0)
        x8_4 = zx.q(entry_x0[8])
        
        if ((x8_4.d & 1) == 0)
            goto label_e275f0
        
        goto label_e2762c
else
    uint64_t x1_2
    
    if ((x8_4.d & 1) != 0)
    label_e2762c:
        
        if (*(entry_x0 + 0x10) u>= 0x41)
        label_e276a0:
            void** x0_4 = __cxa_allocate_exception(0x20)
            int64_t x0_5
            int128_t v0_1
            x0_5, v0_1 = operator new(0x40)
            (*"ss than 64 bytes")[0].o
            int64_t var_a0 = x0_5
            v0_1 = data_71b3f0
            __builtin_strncpy(x0_5, "Skein personalization must be less than 64 bytes", 0x31)
            int128_t var_b0 = v0_1
            *x0_4 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_4[1])
            *x0_4 = _vtable_for_Botan::Invalid_Argument + 0x10
            __cxa_throw(x0_4, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
            noreturn
        
        x1_2 = *(entry_x0 + 0x18)
    else
    label_e275f0:
        
        if (x8_4.d u> 0x81)
            goto label_e276a0
        
        x1_2 = &entry_x0[9]
    
    **(entry_x0 + 0x30) = 0
    *(*(entry_x0 + 0x30) + 8) = -0x3800000000000000
    
    if ((zx.d(entry_x0[8]) & 1) != 0)
        *(entry_x0 + 0x10)
    
    result = Botan::Skein_512::ubi_512(entry_x0, x1_2)

**(entry_x0 + 0x30) = 0
*(*(entry_x0 + 0x30) + 8) = 0x7000000000000000

if (*(x21 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
