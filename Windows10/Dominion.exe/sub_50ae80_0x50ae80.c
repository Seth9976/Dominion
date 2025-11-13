// 函数: sub_50ae80
// 地址: 0x50ae80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_28 = arg2
struct std::_Func_base<bool,enum DomCardEnum>::std::_Func_impl_no_alloc<class <lambda_e4c09d5d2bb1db23b5f5ef70755eecb7>,bool,enum DomCardEnum>::VTable
    * const var_34 = &std::_Func_impl_no_alloc<class <lambda_e4c09d5d2bb1db23b5f5ef70755eecb7>,bool,enum DomCardEnum>::`vftable'{for `std::_Func_base<bool,enum DomCardEnum>'}
int32_t var_2c = arg1
struct std::_Func_base<bool,enum DomCardEnum>::std::_Func_impl_no_alloc<class <lambda_e4c09d5d2bb1db23b5f5ef70755eecb7>,bool,enum DomCardEnum>::VTable
    * const* var_10 = &var_34
int32_t eax_1 = sub_50ad20(arg1, 0, &data_cca794, var_34)
int32_t result = sub_50a6a0(eax_1, "forced landscape card (omen/liasion)", eax_1, 0, 1)

if (result.b != 0)
    return result

sub_63b870(result, &data_801800, "result", "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 
    0x278, "CampaignForceAdd")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
