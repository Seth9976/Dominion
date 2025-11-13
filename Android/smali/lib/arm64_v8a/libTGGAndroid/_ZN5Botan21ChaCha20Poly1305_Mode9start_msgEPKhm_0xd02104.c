// 函数: _ZN5Botan21ChaCha20Poly1305_Mode9start_msgEPKhm
// 地址: 0xd02104
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x22 + 0x28)
void var_78
int64_t entry_x2

if (((*(*arg1 + 0x68))(arg1, entry_x2) & 1) == 0)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
        x0_8 = __cxa_allocate_exception(0x20)
    (*(*arg1 + 0x20))(arg1)
    Botan::Invalid_IV_Length::Invalid_IV_Length(x0_8, &var_78)
    __cxa_throw(x0_8, _typeinfo_for_Botan::Invalid_IV_Length, Botan::Exception::~Exception)
    noreturn

int64_t* x0_1 = *(arg1 + 8)
*(arg1 + 0x30) = entry_x2
*(arg1 + 0x38) = 0
(*(*x0_1 + 0x40))(x0_1, arg2, entry_x2)
int64_t* x0_2 = *(arg1 + 8)
(*(*x0_2 + 0x38))(x0_2, &var_78, 0x40)
Botan::SymmetricAlgorithm::set_key(*(arg1 + 0x10) + 8, &var_78)
memset(&var_78, 0, 0x40)
int64_t* x0_5 = *(arg1 + 0x10)
int64_t x1_4 = *(arg1 + 0x18)
int64_t result = (*(*x0_5 + 0x18))(x0_5, x1_4, *(arg1 + 0x20) - x1_4)
int64_t x8_10 = *(arg1 + 0x30)
int64_t var_88

if (x8_10 == 0x18 || x8_10 == 0xc)
    int64_t x8_13 = zx.q(*(arg1 + 0x20) - *(arg1 + 0x18)) & 0xf
    
    if (x8_13 != 0)
        var_88 = 0
        int64_t var_80_1 = 0
        int64_t* x0_6 = *(arg1 + 0x10)
        result = (*(*x0_6 + 0x18))(x0_6, &var_88, 0x10 - x8_13)
    
    if (*(x22 + 0x28) != x8)
        __stack_chk_fail()
        noreturn
else
    var_88 = *(arg1 + 0x20) - *(arg1 + 0x18)
    int64_t* x0_7 = *(arg1 + 0x10)
    result = (*(*x0_7 + 0x18))(x0_7, &var_88, 8)
    
    if (*(x22 + 0x28) != x8)
        __stack_chk_fail()
        noreturn
return result
