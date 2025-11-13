// 函数: sub_508880
// 地址: 0x508880
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ebp
int32_t* var_4 = ebp
__chkstk(0x7138)
__security_cookie
int32_t c = 0
int32_t var_8 = *(sub_573400() + 0xc)
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_ec051c4da5248b2760043a21e88d74e2>, void>::VTable
    * const var_40 = &std::_Func_impl_no_alloc<class <lambda_ec051c4da5248b2760043a21e88d74e2>, void>::`vftable'{for `std::_Func_base<void>'}
void arg_2608
void* var_3c = &arg_2608
int32_t* var_38 = &var_8
void arg_1980
void* var_34 = &arg_1980
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_ec051c4da5248b2760043a21e88d74e2>, void>::VTable
    * const* var_1c = &var_40
sub_5699b0(var_40)
int64_t arg_c
__builtin_memset(&arg_c, 0, 0x2c)
int32_t arg_8 = 0x2b
void arg_70

if (c != 0)
    int32_t* eax_5 = sub_573400()
    int128_t arg_38 = arg_8.o
    int32_t edx_1 = eax_5[0xb]
    int128_t arg_48 = arg1.o
    int128_t arg_58 = arg2.o
    arg_58.d = eax_5[0xa]
    void* __return_addr_1 = *eax_5
    int32_t var_1c_2 = 0
    __builtin_memcpy(&arg_70, &arg_1980, 0xc84)
    char var_20_1 = 0
    int32_t var_24_1 = 0xc
    __return_addr = __return_addr_1
    int32_t arg_4 = eax_5[4]
    int128_t* var_28_1 = &arg_38
    int32_t var_2c_1 = 7
    int32_t var_30_1 = 0
    arg_58:4.d = edx_1
    int32_t* var_3c_1 = &arg_70
    var_40 = 1
    int32_t eax_8 = sub_5869d0(&arg_70, &__return_addr, eax_5[1], eax_5[3], var_40, var_3c_1, arg3, 
        c, var_30_1, var_2c_1, var_28_1, var_24_1, var_20_1, var_1c_2)
    arg3 = eax_8
    void arg_cf8
    int32_t ecx_4 = __builtin_memcpy(&arg_cf8, &arg_70, 0xc84)
    
    if (eax_8 != 0)
        int32_t var_1c_3 = ecx_4
        sub_563630(&arg_cf8)
else
    memset(&arg_70, c, 0xc84)
var_40 = &std::_Func_impl_no_alloc<class <lambda_360c54ffcda4e64faab14c323684d71a>, void>::`vftable'{for `std::_Func_base<void>'}
void* var_3c_2 = &arg_2608
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_ec051c4da5248b2760043a21e88d74e2>, void>::VTable
    * const* var_1c_4 = &var_40
uint32_t result = sub_5699b0(var_40)
CookieCheckFunction(result)
return result
