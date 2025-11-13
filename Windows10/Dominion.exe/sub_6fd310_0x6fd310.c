// 函数: sub_6fd310
// 地址: 0x6fd310
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (data_147dec8 != 0)
    int32_t eax
    sub_63b870(eax, &data_801800, "!gpEditModeData", "C:\x\ax2017\Engine\Editor\EditMode.cpp", 
        0xc5, "EditModeInitForGame")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t* eax_1 = sub_64bfd0(0x88)
eax_1[3] += 1

if (*eax_1 == 0)
    sub_64be70(eax_1)

int32_t* esi = *eax_1
*eax_1 = *esi
memset(esi, 0, 0x88)
esi[4] = 0
esi[5] = 0
esi[0xd] = 0
esi[0xe] = 0
esi[0xf] = 0
data_147dec8 = esi
*esi = sub_64c020(0x1000)
void* eax_4 = data_147dec8
esi[1] = 0x3ff
*(eax_4 + 0x84) = 1
return sub_73dd40() __tailcall
