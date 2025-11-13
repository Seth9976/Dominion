// 函数: sub_516720
// 地址: 0x516720
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char result = sub_50ee40(0x11)

if (result != 0)
    return result

int32_t ecx_1 = data_cca790
int32_t eax = data_cca780
int32_t* ecx_4

if (ecx_1 != 2)
    ecx_4 = eax + ((ecx_1 + 0xa02) << 3)
else
    eax += 0x540
    ecx_4 = (data_cca784 << 0xb) + eax

if (*ecx_4 != 0x384)
    sub_63b870(eax, &data_801800, "theme.piece == CTHEME_CATEGORY", 
        "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 0x1c1a, 
        "ThemePiece_CategoryVillage")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t var_34_1 = ecx_4[1]
int32_t* var_38 = &std::_Func_impl_no_alloc<class <lambda_06fc8381d3e65f5a1a49179f411d048b>,bool,enum DomCardEnum>::`vftable'{for `std::_Func_base<bool,enum DomCardEnum>'}
int32_t** var_14_1 = &var_38
int32_t eax_2
int32_t edx_1
eax_2, edx_1 = sub_50ad20(&var_38, 0, &data_cca794, var_38)

if (eax_2 == 0)
    return sub_50e1c0()

return sub_50a6a0(eax_2, edx_1, eax_2, 2, 0)
