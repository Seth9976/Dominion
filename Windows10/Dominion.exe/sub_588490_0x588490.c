// 函数: sub_588490
// 地址: 0x588490
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax

if (arg2 == 0xffffffff)
    sub_63b870(eax, &data_801800, "who != PLAYER_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0x33e, "GetPileHead")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void* ebx_1 = arg2 * 0x5a30 + arg1

if (*(ebx_1 + 0x172d8) == 0)
    return 

int32_t eax_1 = arg1[0x541]

if (eax_1 != 3 && eax_1 != 5 && eax_1 != 4 && eax_1 != 6 && arg1[0x540].b == 0)
    uint32_t eax_2 = arg2
    
    if (arg2 == arg1[0x673])
        eax_2 = arg1[0x674]
    
    sub_59f9b0(eax_2, arg2, arg1, eax_2, 4, 0, nullptr, 0, 0, 0, 0, 0)

*(ebx_1 + 0x17564) += 1
int32_t eax_3 = sub_572b80(arg1, arg2)
int32_t i_1 = *(ebx_1 + 0x17460)
void* edx_1 = sub_5722c0(eax_3, 0x3eb, arg1, arg2)

for (int32_t i = *edx_1; i != 0; i = *edx_1)
    uint32_t edi_1 = zx.d(i.w)
    
    if (edi_1 u>= 0x320)
        sub_591930()
    
    edx_1 = edi_1 * 0x64 + 0x1aa4 + arg1

*edx_1 = *(ebx_1 + 0x17460)
*(ebx_1 + 0x17460) = 0
uint32_t edi_2

for (; i_1 != 0; i_1 = arg1[edi_2 * 0x19 + 0x6a9])
    edi_2 = zx.d(i_1.w)
    
    if (edi_2 u>= 0x320)
        sub_591930()
    
    uint32_t ecx_3 = arg2
    arg1[edi_2 * 0x19 + 0x694] = 0x3eb
    
    if (arg1[edi_2 * 0x19 + 0x69c] != ecx_3)
        sub_591930()
        ecx_3 = arg2
    
    eax = arg1[0x541]
    
    if (eax != 3 && eax != 5 && eax != 4 && eax != 6)
        uint32_t var_4c_1 = ecx_3
        ecx_3.b = eax == 2
        sub_61b1b0(eax, 9, ecx_3.b, var_4c_1, i_1, 0x3eb, 0xffffffff, nullptr, 0xf, 0, 0, 0, 0, 0)
