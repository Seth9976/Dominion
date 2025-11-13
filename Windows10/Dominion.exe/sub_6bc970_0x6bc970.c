// 函数: sub_6bc970
// 地址: 0x6bc970
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = data_147abe8

if (eax == 0)
    sub_63b870(eax, &data_801800, "gpGameData", "C:\x\ax2017\Engine\Game.h", 0x45, "GetGameData")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void* eax_1 = *(eax + 0x10)
*(eax_1 + 0x24) += 1
float xmm0 = arg1[0xbe]
int32_t* ecx = arg1[0xb9]

if (not(xmm0 <= 0f))
    eax_1.b = 1
    arg1[0xbe] = xmm0 f- ecx[0x16]
    return eax_1

int32_t eax_2 = sub_5af880(*ecx)
void* edi_1 = arg1[0xb7] i* 0x168 + *eax_2
void* eax_3 = sub_6bc170(arg1, edi_1)

if (eax_3.b != 0)
    return sub_6b98a0(eax_3, arg1, arg1, edi_1) != 0

eax_3.b = 0
return eax_3
