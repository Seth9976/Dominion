// 函数: _ZN5Botan8CCM_Mode13encode_lengthEmPh
// 地址: 0xcf28bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *(arg1 + 0x10)

if (x8 - 2 u> 6)
    Botan::assertion_failure("len_bytes >= 2 && len_bytes <= 8", &data_793a18, "encode_length", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x4f63)
else
    uint8_t* entry_x2
    int64_t x9_1
    
    if (x8 u>= 2)
        int64_t x10_1 = 0
        x9_1 = x8 & 0xfffffffffffffffe
        uint8_t* x11_1 = entry_x2 - 1
        int64_t x12_1 = 0x30
        
        do
            int64_t x15_1 = x10_1 ^ 0xfffffffffffffffe
            x10_1 += 2
            int64_t x14_2 = (x12_1 & 0x30) ^ 0x38
            uint8_t x13_4 = (arg2 u>> (zx.q(not.d(x12_1.d + 8)) & 0x30)).b
            x12_1 -= 0x10
            x11_1[x8] = x13_4
            x11_1 -= 2
            entry_x2[x8 + x15_1] = (arg2 u>> x14_2).b
        while (x9_1 != x10_1)
        
        if (x8 != x9_1)
            goto label_cf2944
    else
        x9_1 = 0
    label_cf2944:
        int64_t i = x8 - x9_1
        int64_t x9_2 = 0x38 - (x9_1 << 3)
        
        do
            (entry_x2 - 1)[i] = (arg2 u>> (zx.q(not.d(x9_2.d)) & 0x38)).b
            i -= 1
            x9_2 -= 8
        while (i != 0)
    
    if (x8 u>= 8 || arg2 u>> x8 << 3 == 0)
        return 

void** x0 = __cxa_allocate_exception(0x20)
int64_t x0_1
int128_t v0
x0_1, v0 = operator new(0x40)
int64_t var_40 = x0_1
int128_t var_50 = data_71b3f0
__builtin_strncpy(x0_1, "CCM message length too long to encode in L field", 0x31)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "Encoding error: ", &var_50)
*x0 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0[1])
*x0 = _vtable_for_Botan::Invalid_Argument + 0x10
char var_38
void* var_28

if ((zx.d(var_38) & 1) != 0)
    operator delete(var_28)
*x0 = _vtable_for_Botan::Encoding_Error + 0x10
__cxa_throw(x0, _typeinfo_for_Botan::Encoding_Error, Botan::Exception::~Exception)
noreturn
