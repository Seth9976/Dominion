// 函数: sub_50b9f0
// 地址: 0x50b9f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_8 = ecx
int32_t* var_34 = &std::_Func_impl_no_alloc<class <lambda_0d19e5d66bab6be2fef3cc2d2f5582c0>,bool,enum DomCardEnum>::`vftable'{for `std::_Func_base<bool,enum DomCardEnum>'}
int32_t** var_10 = &var_34
int32_t result = sub_50ad20(&var_34, 0, &data_cca794, var_34)
int32_t i = 0
int32_t* ecx_3 = data_cca780 + 0x58c + (data_cca784 << 0xb)

do
    if (*ecx_3 == 0)
        *ecx_3 = 0xdbc
        ecx_3[1] = result
        ecx_3[2] = 0xffffffff
        ecx_3[3] = 0
        ecx_3[4] = 0
        return result
    
    i += 1
    ecx_3 = &ecx_3[5]
while (i s< 0x20)

sub_63b870(result, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 
    0x242, "CampaignAddExtra")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
