// 函数: sub_516e10
// 地址: 0x516e10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx = data_cca790
int32_t eax = data_cca780
int32_t* ecx_3

if (ecx != 2)
    ecx_3 = eax + ((ecx + 0xa02) << 3)
else
    ecx_3 = (data_cca784 << 0xb) + eax + 0x540

int32_t eax_2 = *ecx_3

if (eax_2 == 0x3e8)
    uint32_t eax_3
    int32_t edx
    eax_3, edx = sub_511a60(ecx_3[1])
    return sub_50a6a0(eax_3, edx, eax_3, 2, 0)

if (eax_2 == 0x5dc)
    uint32_t eax_5
    int32_t edx_1
    eax_5, edx_1 = sub_511a60(ecx_3[1])
    return sub_50a6a0(eax_5, edx_1, eax_5, 4, 0)

sub_63b870(eax_2, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 
    0x1cd1, "ThemePiece_CardCombo::<lambda_8d2c99a672178e4d336ec979d5b29280>::operator ()")

if (sub_63bc30() == 0)
    noreturn sub_63bb00() __tailcall

breakpoint
