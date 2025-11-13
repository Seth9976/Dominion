// 函数: sub_519680
// 地址: 0x519680
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_40 = &std::_Func_impl_no_alloc<class <lambda_a26c0cc2aca925cab479e1999d718753>,bool,enum DomCardEnum>::`vftable'{for `std::_Func_base<bool,enum DomCardEnum>'}
int32_t** var_1c = &var_40
int32_t eax_1 = sub_50ad20(&var_40, 0, &data_cca794, var_40)
var_40 = &std::_Func_impl_no_alloc<class <lambda_7fe70e536ec0122e7a41c8e94e168f76>,bool,enum DomCardEnum>::`vftable'{for `std::_Func_base<bool,enum DomCardEnum>'}
int32_t** var_1c_1 = &var_40
int32_t eax_2
int32_t edx
eax_2, edx = sub_50ad20(eax_1, 0, &data_cca794, var_40)
int32_t* result = sub_50a6a0(eax_2, edx, eax_1, 0, 0)
int32_t var_20
char const* const var_1c_2
char* ecx_1

if (result.b != 0)
    int32_t i = 0
    result = data_cca780 + 0x58c + (data_cca784 << 0xb)
    
    do
        if (*result == 0)
            result[4] = eax_2
            result[1] = eax_1
            *result = 0xdc6
            result[2] = 0xffffffff
            result[3] = 0
            return result
        
        i += 1
        result = &result[5]
    while (i s< 0x20)
    
    var_1c_2 = "CampaignAddExtra"
    var_20 = 0x242
    ecx_1 = "Halt"
else
    var_1c_2 = "Theme_PileChangesB_MakeSplitPile"
    var_20 = 0x2120
    ecx_1 = "result"

sub_63b870(result, &data_801800, ecx_1, "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 
    var_20, var_1c_2)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
