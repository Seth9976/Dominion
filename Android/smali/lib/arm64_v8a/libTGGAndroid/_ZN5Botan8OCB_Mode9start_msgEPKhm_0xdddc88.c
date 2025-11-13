// 函数: _ZN5Botan8OCB_Mode9start_msgEPKhm
// 地址: 0xdddc88
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_48
int64_t entry_x2

if (((*(*arg1 + 0x68))(arg1, entry_x2) & 1) == 0)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
        x0_4 = __cxa_allocate_exception(0x20)
    (*(*arg1 + 0x20))(arg1)
    Botan::Invalid_IV_Length::Invalid_IV_Length(x0_4, &var_48)
    __cxa_throw(x0_4, _typeinfo_for_Botan::Invalid_IV_Length, Botan::Exception::~Exception)
    noreturn

void* x22 = *(arg1 + 0x10)

if (x22 != 0)
    int64_t* x0_2 = Botan::OCB_Mode::update_nonce(arg1, arg2)
    
    if (x22 + 0x40 != x0_2)
        x0_2[1]
        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::assign<uint8_t*>(
            x22 + 0x40, *x0_2)
    
    int64_t result = *(arg1 + 0x20)
    int64_t x8_3 = *(arg1 + 0x28)
    
    if (x8_3 != result)
        result = memset(result, 0, x8_3 - result)
    
    *(arg1 + 0x18) = 0
    return result

int64_t* x0_9 = Botan::SymmetricAlgorithm::throw_key_not_set_error()

if ((zx.d(var_48) & 1) != 0)
    void* var_38
    operator delete(var_38)
    
    if ((x22.d & 1) == 0)
        sub_1101e04(x0_9)
        noreturn
else if (x22.d == 0)
    sub_1101e04(x0_9)
    noreturn

__cxa_free_exception(arg2)
sub_1101e04(x0_9)
noreturn
