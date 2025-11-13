// 函数: sub_5596f0
// 地址: 0x5596f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_1c = __chkstk(0x1988)
void var_10
sub_561e00(__security_cookie ^ &var_10, 0, 1, 0)
void* eax_2 = sub_573400()
sub_590760(eax_2, *(eax_2 + 0xc), *(eax_2 + 4), 1, 1, 0, 0)
void* eax_3
int32_t edx_1
eax_3, edx_1 = sub_573400()
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
void arg_60
void arg_ce8
__builtin_memcpy(&arg_60, sub_568780(&arg_ce8, edx_1, 0x3ea, &arg_ce8), 0xc84)
uint32_t result = sub_56ca00(&arg_60, &arg_ce8)

if (result == arg3)
    sub_56e9c0(1)
    int32_t arg_4
    __builtin_memset(&arg_4, 0, 0x24)
    var_4.q = 0
    int128_t arg_28 = 0x12d.o
    int128_t arg_38 = arg1.o
    int128_t arg_48 = arg2.o
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_bc223650b4370322205a8e8803d9a655>, void>::VTable
        * const var_40 = &std::_Func_impl_no_alloc<class <lambda_bc223650b4370322205a8e8803d9a655>, void>::`vftable'{for `std::_Func_base<void>'}
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_bc223650b4370322205a8e8803d9a655>, void>::VTable
        * const* var_1c_2 = &var_40
    result = sub_56a310(&var_40, &arg_28, 0xd5)

CookieCheckFunction(result)
return result
