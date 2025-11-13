// 函数: sub_518360
// 地址: 0x518360
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
int32_t ecx_1 = data_cca790
int32_t eax
int32_t* esi_2

if (ecx_1 != 2)
    eax = data_cca780
    esi_2 = eax + ((ecx_1 + 0xa02) << 3)
else
    esi_2 = data_cca780 + 0x540 + (data_cca784 << 0xb)

if (*esi_2 == 0x898)
    int32_t ecx_5 = sub_50b2a0(esi_2[1])
    int32_t esi_4 = esi_2[1]
    int32_t eax_1
    
    do
        eax_1, ecx_5 = sub_50ecc0(ecx_5)
    while (eax_1 == esi_4)
    
    return sub_50b2a0(eax_1)

sub_63b870(eax, &data_801800, "theme.piece == CTHEME_TWIST", 
    "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 0x1fbd, "Theme_TwistB")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
