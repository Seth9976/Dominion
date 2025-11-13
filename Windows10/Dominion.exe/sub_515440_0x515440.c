// 函数: sub_515440
// 地址: 0x515440
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ecx = data_cca780
int32_t result = data_cca784 << 0xb

if (ecx[data_cca784 * 0x200 + 0xc] != 0)
    return result

if (*ecx == 0)
    int32_t var_34_1 = ecx[1]
    int32_t* var_38 = &std::_Func_impl_no_alloc<class <lambda_58a405897e0e71b2066f3f25da284cd9>,bool,enum DomCardEnum>::`vftable'{for `std::_Func_base<bool,enum DomCardEnum>'}
    int32_t** var_14_1 = &var_38
    int32_t eax_2
    int32_t edx_1
    eax_2, edx_1 = sub_50ad20(&var_38, 0, &data_cca794, var_38)
    return sub_50a6a0(eax_2, edx_1, eax_2, 0, 1)

sub_63b870(result, &data_801800, "setup.params.type == CAMPAIGNTYPE_EXPANSION", 
    "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 0x191c, "MissionPiece_ExpCard")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
