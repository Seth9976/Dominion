// 函数: sub_516630
// 地址: 0x516630
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edx_1 = data_cca784 << 0xb
int32_t ecx = 0
void* esi = data_cca780
int32_t* eax_1 = esi + 0x34 + edx_1

while (*eax_1 != 0)
    ecx += 1
    eax_1 = &eax_1[0xf]
    
    if (ecx s>= 4)
        break

int32_t eax_2 = data_cca790
void* eax_4

if (eax_2 != 2)
    eax_4 = esi + ((eax_2 + 0xa02) << 3)
else
    eax_4 = esi + 0x540 + edx_1

int32_t var_20
char const* const var_1c
char* ecx_1

if (*eax_4 == 0x384)
    int32_t edx_2 = *(eax_4 + 4)
    
    if (edx_2 != 0)
        int32_t eax_6 = (ecx s< 2).d
        int32_t var_38 = edx_2
        struct std::_Func_base<bool,enum DomCardEnum>::std::_Func_impl_no_alloc<class <lambda_2676d73a20ed6622360292b93dacced3>,bool,enum DomCardEnum>::VTable
            * const var_40 = &std::_Func_impl_no_alloc<class <lambda_2676d73a20ed6622360292b93dacced3>,bool,enum DomCardEnum>::`vftable'{for `std::_Func_base<bool,enum DomCardEnum>'}
        int32_t var_3c = eax_6
        struct std::_Func_base<bool,enum DomCardEnum>::std::_Func_impl_no_alloc<class <lambda_2676d73a20ed6622360292b93dacced3>,bool,enum DomCardEnum>::VTable
            * const* var_1c_1 = &var_40
        int32_t eax_7
        int32_t edx_3
        eax_7, edx_3 = sub_50ad20(eax_6, 0, &data_cca794, var_40)
        int32_t eax_8
        eax_8.b = data_cca790 != 0
        return sub_50a6a0((eax_8 << 1) + 3, edx_3, eax_7, 2, (eax_8 << 1) + 3)
    
    var_1c = "ThemePiece_CategoryCard::<lambda_8c636b0026c48e518a0d57e701c30957>::operator ()"
    var_20 = 0x1c06
    ecx_1 = "category != CATEGORY_NONE"
else
    var_1c = "ThemePiece_CategoryCard::<lambda_8c636b0026c48e518a0d57e701c30957>::operator ()"
    var_20 = 0x1c04
    ecx_1 = "theme.piece == CTHEME_CATEGORY"

sub_63b870(eax_4, &data_801800, ecx_1, "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 
    var_20, var_1c)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
