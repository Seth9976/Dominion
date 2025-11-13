// 函数: sub_5087e0
// 地址: 0x5087e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
int32_t eax
sub_561e00(eax, 0, 1, 0)
void* eax_1 = sub_573400()
sub_590760(eax_1, *(eax_1 + 0xc), *(eax_1 + 4), 1, 1, 0, 0)
void* eax_2 = sub_573400()
int32_t ecx_2 = *(eax_2 + 0xc)

if (ecx_2 == 0xffffffff)
    sub_63b870(eax_2, &data_801800, "c.activePlayer != PLAYER_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_3 = *(eax_2 + 4)
int32_t ecx_3 = ecx_2 * 0x5a30
*(ecx_3 + eax_3 + 0x17558) |= 2
void* eax_4
int32_t edx_1
eax_4, edx_1 = sub_573400()
int32_t var_2c = *(eax_4 + 0xc)
int32_t* var_30 = &std::_Func_impl_no_alloc<class <lambda_11e2e2c9f8b6f1b975faa517404463ef>, void>::`vftable'{for `std::_Func_base<void>'}
int32_t** var_c_1 = &var_30
return sub_569b30(&var_30, edx_1, 0, var_30)
