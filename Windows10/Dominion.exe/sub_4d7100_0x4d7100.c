// 函数: sub_4d7100
// 地址: 0x4d7100
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

memset(arg4, 0, 0x1c0)
*(arg4 + 0x188) = *(arg3 + 8)
int32_t eax_1 = *(arg3 + 0xc)
*(arg4 + 0x190) = *(arg3 + 0x10)
char* const ecx_1 = &data_801800
*(arg4 + 0x18c) = eax_1
*(arg4 + 0x194) = *(arg3 + 0x14)
*(arg4 + 0x198) = *(arg3 + 0x18)
*(arg4 + 0x1a0) = *(arg3 + 0x20)
*(arg4 + 0x19c) = *(arg3 + 0x1c)
*(arg4 + 0x1a4) = *(arg3 + 0x24)
*(arg4 + 0x1a8) = *(arg3 + 0x28)
*(arg4 + 0x1ac) = *(arg3 + 0x2c)
char* eax_9 = *(arg3 + 0x30)

if (eax_9 != 0)
    ecx_1 = eax_9

*(arg4 + 0x1b0) = ecx_1
char* const ecx_2 = &data_801800
char* eax_10 = *(arg3 + 0x34)

if (eax_10 != 0)
    ecx_2 = eax_10

int32_t ebx = 0
*(arg4 + 0x1b8) = ecx_2
void* ecx_3 = arg3 + 0x58
*(arg4 + 0x180) = *(arg3 + 0x11a0)
void* edi_1 = arg4 + 0x10

while (true)
    *edi_1 = *ecx_3
    *(edi_1 - 8) = *(ecx_3 - 8)
    *(edi_1 + 4) = *(ecx_3 + 4)
    *edi_1 = *ecx_3
    *(edi_1 - 0x10) = ecx_3 - 0x18
    *(edi_1 - 4) = *(ecx_3 - 4)
    *(edi_1 + 8) = *(ecx_3 + 8)
    *(edi_1 + 0x10) = ecx_3 + 0x10
    int32_t edx = *(ecx_3 + 0x210)
    *(edi_1 + 0x18) = edx
    
    if (edx s< 0)
        break
    
    ebx += 1
    ecx_3 += 0x22c
    edi_1 += 0x30
    
    if (ebx s>= 8)
        return arg4

sub_63b870(ecx_3 + 0x10, &data_801800, "setupSave.players[k].smartplays.numSmartplays >= 0", 
    "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp", 0x2c8, "ToSetupSave")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
