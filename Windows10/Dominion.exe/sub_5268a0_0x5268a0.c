// 函数: sub_5268a0
// 地址: 0x5268a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t ebp
uint32_t var_4 = ebp
int32_t esi
int32_t var_14 = esi
int32_t var_1c = __chkstk(0x19a8)
void var_10
sub_561e00(__security_cookie ^ &var_10, 0, 2, 0)
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_08e96e2386070e81fc3185175b09ad2e>, void>::VTable
    * const var_40 = &std::_Func_impl_no_alloc<class <lambda_08e96e2386070e81fc3185175b09ad2e>, void>::`vftable'{for `std::_Func_base<void>'}
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_08e96e2386070e81fc3185175b09ad2e>, void>::VTable
    * const* var_1c_1 = &var_40
sub_5699b0(var_40)
void arg_80
uint32_t eax_2 = sub_567780(esi, &arg_80)
int32_t arg_18 = 0x76
int64_t arg_1c
__builtin_memset(&arg_1c, 0, 0x2c)
int32_t var_1c_2 = 0
char var_20_1 = 0
int32_t var_24 = 0xb
int128_t arg_48
int128_t* var_28 = &arg_48
arg_48 = arg_18.o
int32_t var_2c = 1
int32_t arg_d08
__builtin_memcpy(&arg_d08, eax_2, 0xc84)
int128_t arg_58 = arg1.o
int128_t arg_68 = arg2.o
int32_t* result =
    sub_563960(&arg_80, 0, &arg_d08, &arg_80, 1, var_2c, var_28, var_24, var_20_1, var_1c_2)
__builtin_memcpy(&arg_d08, result, 0xc84)

if (arg3 != 0)
    int32_t esi_3 = arg_d08
    
    if (esi_3 != 0)
        void* eax_4 = sub_573400()
        uint32_t edi_1 = zx.d(esi_3.w)
        int32_t* __return_addr_1 = *(eax_4 + 4)
        uint32_t eax_5 = *(eax_4 + 0xc)
        __return_addr = __return_addr_1
        
        if (edi_1 u>= 0x320)
            sub_591930()
            __return_addr_1 = __return_addr
        
        char var_1c_3 = 0
        __builtin_memset(&__return_addr, 0, 8)
        int64_t arg_10 = 0
        int32_t arg_c = __return_addr_1[edi_1 * 0x19 + 0x695]
        int32_t* var_20_2 = &__return_addr
        int32_t arg_8 = esi_3
        result = sub_586320(&arg_8, eax_5, __return_addr_1, &arg_8, &arg_10, var_20_2, var_1c_3)

CookieCheckFunction(result)
return result
