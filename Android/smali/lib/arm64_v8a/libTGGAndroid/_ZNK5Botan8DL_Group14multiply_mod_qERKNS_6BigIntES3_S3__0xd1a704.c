// 函数: _ZNK5Botan8DL_Group14multiply_mod_qERKNS_6BigIntES3_S3_
// 地址: 0xd1a704
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x0 = Botan::DL_Group::data()
char var_68 = 0x1c
int64_t result_1
__builtin_strncpy(&result_1, "multiply_mod_q", 0xf)
Botan::DL_Group_Data::assert_q_is_set(x0)
void* var_58

if ((zx.d(var_68) & 1) != 0)
    operator delete(var_58)

void* x0_2 = Botan::DL_Group::data()
Botan::Modular_Reducer::multiply(Botan::DL_Group::data() + 0xd0, arg2)
Botan::Modular_Reducer::multiply(x0_2 + 0xd0, &var_68)
void* result = var_68.q

if (result == 0)
    return result

result_1 = result
return Botan::deallocate_memory(result, (var_58 - result) s>> 2, 4)
