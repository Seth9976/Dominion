// 函数: sub_518c40
// 地址: 0x518c40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_c
int32_t eax_1 = sub_50af00(sub_516f30(0x8cb), &var_c)
sub_50af60(eax_1, var_c, &data_cc8de0, eax_1)
sub_516290()
int32_t* var_38 = &std::_Func_impl_no_alloc<class <lambda_ce345fb457d0a7b5c8a5ecdf6a263fa2>,bool,enum DomCardEnum>::`vftable'{for `std::_Func_base<bool,enum DomCardEnum>'}
int32_t** var_14_1 = &var_38
int32_t eax_4
int32_t edx_2
eax_4, edx_2 = sub_50ad20(&var_38, 0, &data_cca794, var_38)
sub_50a6a0(eax_4, edx_2, eax_4, 0, 0)
int32_t i = 0
int32_t* result = data_cca780 + 0x58c + (data_cca784 << 0xb)

do
    if (*result == 0)
        *result = 0xdb2
        result[1] = 0x500
        result[2] = 0xffffffff
        result[3] = 0
        result[4] = 0
        return result
    
    i += 1
    result = &result[5]
while (i s< 0x20)

sub_63b870(result, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 
    0x242, "CampaignAddExtra")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
