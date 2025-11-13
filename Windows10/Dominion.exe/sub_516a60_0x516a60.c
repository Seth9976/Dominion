// 函数: sub_516a60
// 地址: 0x516a60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx = data_cca790
int32_t eax = data_cca780
int32_t* ecx_3

if (ecx != 2)
    ecx_3 = eax + ((ecx + 0xa02) << 3)
else
    eax += 0x540
    ecx_3 = (data_cca784 << 0xb) + eax

if (*ecx_3 != 0x384)
    sub_63b870(eax, &data_801800, "theme.piece == CTHEME_CATEGORY", 
        "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 0x1c72, "ThemePiece_CategoryTwist")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t esi = *(sub_516fa0(ecx_3[1]) + 0x10)
int32_t eax_2 = sub_516f30(esi)
int32_t ecx_7 = 0
int32_t* edx = eax_2 + 0xc
int32_t eax_3

while (true)
    if (*edx == 2)
        eax_3 = *(ecx_7 * 0x26c + eax_2 + 0x10)
        break
    
    ecx_7 += 1
    edx = &edx[0x9b]
    
    if (ecx_7 s>= 4)
        eax_3 = 0
        break

if (esi == 0)
    esi = sub_50ecc0(ecx_7)
else if (eax_3 != 0)
    char eax_5
    eax_5, ecx_7 = eax_3()
    
    if (eax_5 == 0)
        esi = sub_50ecc0(ecx_7)

return sub_50b2a0(esi)
