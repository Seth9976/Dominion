// 函数: sub_525b00
// 地址: 0x525b00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
__chkstk(0x1998)
void var_10
sub_561af0(__security_cookie ^ &var_10, 0, 2, 0)
int64_t arg_c
__builtin_memset(&arg_c, 0, 0x2c)
int128_t arg_38 = 0x72.o
int128_t arg_48 = arg1.o
int128_t arg_58 = arg2.o
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_65cfad9cfe05fb05072ad8f787994529>, void>::VTable
    * const var_40 = &std::_Func_impl_no_alloc<class <lambda_65cfad9cfe05fb05072ad8f787994529>, void>::`vftable'{for `std::_Func_base<void>'}
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_65cfad9cfe05fb05072ad8f787994529>, void>::VTable
    * const* var_1c_1 = &var_40
void arg_70
int32_t eax_4 = sub_568780(&arg_70, sub_56a310(&var_40, &arg_38, 0x3b), 0x3ec, &arg_70)
__builtin_memset(&arg_c, 0, 0x2c)
arg_38 = 0x73.o
char var_1c_2 = 0
void arg_cf8
__builtin_memcpy(&arg_cf8, eax_4, 0xc84)
arg_48 = arg1.o
arg_58 = arg2.o
uint32_t result = sub_563c40(&arg_38, 0xe, var_1c_2)

if (result != 0)
    void* eax_5 = sub_573400()
    uint32_t edi_1 = zx.d(result.w)
    int32_t eax_6 = *(eax_5 + 4)
    
    if (edi_1 u>= 0x320)
        sub_591930()
    
    int32_t* ecx_1 = *(eax_5 + 4)
    int32_t var_30
    __builtin_memset(&var_30, 0, 0x18)
    int32_t var_34_1 = *(eax_5 + 0x30)
    int32_t var_38_1 = *(eax_5 + 0x2c)
    uint32_t edx_4 = *(edi_1 * 0x64 + eax_6 + 0x1a70)
    int32_t var_3c_1 = *(eax_5 + 0x28)
    var_40 = 2
    int32_t var_2c
    char* var_28
    int32_t var_24_1
    void* var_20_1
    void* var_1c_3
    result = sub_582d10(eax_6, edx_4, ecx_1, result, 0x3ec, 0xb, 0x3eb, var_40, var_3c_1, var_38_1, 
        var_34_1, var_30, var_2c, var_28, var_24_1, var_20_1, var_1c_3)

CookieCheckFunction(result)
return result
