// 函数: _ZN5Botan8SIV_Mode9start_msgEPKhm
// 地址: 0xe25d30
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x2
void* result = (*(*arg1 + 0x68))(arg1, entry_x2)
int128_t var_50

if ((result.d & 1) == 0)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
        x0_2 = __cxa_allocate_exception(0x20)
    (*(*arg1 + 0x20))(arg1)
    Botan::Invalid_IV_Length::Invalid_IV_Length(x0_2, &var_50)
    __cxa_throw(x0_2, _typeinfo_for_Botan::Invalid_IV_Length, Botan::Exception::~Exception)
    noreturn

if (entry_x2 == 0)
    *(arg1 + 0x38) = *(arg1 + 0x30)
else
    int64_t* x22_1 = *(arg1 + 0x28)
    (*(*x22_1 + 0x18))(x22_1, arg2, entry_x2)
    Botan::Buffered_Computation::final()
    result = *(arg1 + 0x30)
    
    if (result != 0)
        int64_t x8_4 = *(arg1 + 0x40)
        *(arg1 + 0x38) = result
        int128_t v0_1
        result, v0_1 = Botan::deallocate_memory(result, x8_4 - result, 1)
        __builtin_memset(&arg1[0x30], 0, 0x18)
    
    *(arg1 + 0x30) = var_50
    int64_t var_40
    *(arg1 + 0x40) = var_40

*(arg1 + 0x50) = *(arg1 + 0x48)
return result
