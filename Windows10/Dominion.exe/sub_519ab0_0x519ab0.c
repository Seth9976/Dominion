// 函数: sub_519ab0
// 地址: 0x519ab0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_8 = ecx
int32_t* var_34 = &std::_Func_impl_no_alloc<class <lambda_2a8e46be9d0e07fd20f10f90667b7f33>,bool,enum DomCardEnum>::`vftable'{for `std::_Func_base<bool,enum DomCardEnum>'}
int32_t** var_10 = &var_34
int32_t result = sub_50ad20(&var_34, 0, &data_cca794, var_34)
int32_t ecx_1 = data_cca790
int32_t result_1 = result
void* ecx_4

if (ecx_1 != 2)
    result = data_cca780
    ecx_4 = result + ((ecx_1 + 0xa02) << 3)
else
    ecx_4 = data_cca780 + 0x540 + (data_cca784 << 0xb)

*(ecx_4 + 4) = result_1

if (result_1 != 0)
    return result

sub_63b870(result, &data_801800, "what != CARD_NONE", 
    "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 0x21a6, "RollThemeCard")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
