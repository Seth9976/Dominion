// 函数: _ZN5Botan8XTS_Mode12key_scheduleEPKhm
// 地址: 0xed6600
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_48
int64_t entry_x2

if ((entry_x2.d & 1) == 0)
    uint64_t x21_1 = entry_x2 u>> 1
    (*(**(arg1 + 8) + 0x18))()
    int64_t var_40
    int64_t var_38
    
    if (var_48 u<= x21_1 && var_40 u>= x21_1 && x21_1 u% var_38 == 0)
        Botan::SymmetricAlgorithm::set_key(*(arg1 + 8), arg2)
        return Botan::SymmetricAlgorithm::set_key(*(arg1 + 0x10), arg2 + x21_1)

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x0_4 = __cxa_allocate_exception(0x20)
(*(*arg1 + 0x20))(arg1)
Botan::Invalid_Key_Length::Invalid_Key_Length(x0_4, &var_48)
__cxa_throw(x0_4, _typeinfo_for_Botan::Invalid_Key_Length, Botan::Exception::~Exception)
noreturn
