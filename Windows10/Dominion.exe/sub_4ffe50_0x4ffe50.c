// 函数: sub_4ffe50
// 地址: 0x4ffe50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_1c = __chkstk(0x1998)
void var_10
sub_561e00(__security_cookie ^ &var_10, 0, 1, 0)
void* eax_2 = sub_573400()
sub_590760(eax_2, *(eax_2 + 0xc), *(eax_2 + 4), 1, 2, 0, 0)
void* eax_3 = sub_573400()
int32_t ecx_2 = *(eax_3 + 0xc)

if (ecx_2 == 0xffffffff)
    sub_63b870(eax_3, &data_801800, "c.activePlayer != PLAYER_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_4 = *(eax_3 + 4)
int32_t ecx_3 = ecx_2 * 0x5a30
*(ecx_3 + eax_4 + 0x17558) |= 2
void arg_cf8
uint32_t eax_5 = sub_566e20(&arg_cf8, arg1, var_10)
void arg_70
__builtin_memcpy(&arg_70, eax_5, 0xc84)

if (arg4 == 2)
    sub_561af0(eax_5, 0, 2, 0)

void* eax_6 = sub_573400()
int32_t esi_1 = *(*(eax_6 + 0xc) * 0x5a30 + *(eax_6 + 4) + 0x174f4)
void* eax_8 = sub_573400()
int32_t edi = esi_1 + sub_583fc0(eax_8, *(eax_8 + 0xc), *(eax_8 + 4), 0xa00)
uint32_t result
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_aae700c6d5522858c5a68e2c36d4037a>, void>::VTable
    * const var_40
int32_t var_8_1
int32_t* eax_10

if (esi_1 s< 2)
    int32_t esi_2 = *(*(sub_573400() + 4) + 0x19cc)
    result = sub_573400()
    
    if (esi_2 == *(result + 0xc) && edi s>= 2)
        eax_10 = &var_40
        var_8_1 = 0xda
        var_40 = &std::_Func_impl_no_alloc<class <lambda_5e032e53b8fa90d0778beb1137902fc1>, void>::`vftable'{for `std::_Func_base<void>'}
        int32_t var_3c_1 = esi_1
        goto label_4fff8c
else
    var_8_1 = 0xd9
    eax_10 = &var_40
    var_40 = &std::_Func_impl_no_alloc<class <lambda_aae700c6d5522858c5a68e2c36d4037a>, void>::`vftable'{for `std::_Func_base<void>'}
label_4fff8c:
    int32_t arg_4
    __builtin_memset(&arg_4, 0, 0x24)
    var_4.q = 0
    int128_t arg_38 = var_8_1.o
    int128_t arg_48 = arg2.o
    int128_t arg_58 = arg3.o
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_aae700c6d5522858c5a68e2c36d4037a>, void>::VTable
        * const* var_1c_4 = &var_40
    result = sub_56a310(eax_10, &arg_38, 0xb9)
CookieCheckFunction(result)
return result
