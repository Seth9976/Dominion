// 函数: sub_519560
// 地址: 0x519560
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
int32_t* var_38 = &std::_Func_impl_no_alloc<class <lambda_35c581f77cd8c76b7c5dd7ba04a03c92>,bool,enum DomCardEnum>::`vftable'{for `std::_Func_base<bool,enum DomCardEnum>'}
int32_t** var_14 = &var_38
int32_t eax_1
int32_t edx
eax_1, edx = sub_50ad20(&var_38, 0, &data_cca794, var_38)
int32_t ecx_1
ecx_1.b = data_cca790 != 0
sub_50a6a0(eax_1, edx, eax_1, 0, (ecx_1 << 1) + 3)
int32_t i = 0
int32_t* result = data_cca780 + 0x58c + (data_cca784 << 0xb)

do
    if (*result == 0)
        result[1] = eax_1
        *result = 0xdc1
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
