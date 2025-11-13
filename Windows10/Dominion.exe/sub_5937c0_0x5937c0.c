// 函数: sub_5937c0
// 地址: 0x5937c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ebx_2 = &arg3[arg4 * 4]
uint32_t result = *(ebx_2 + 0x1524)
uint32_t result_1 = result

if (arg4 u> 0x48)
    int32_t var_38
    char* ecx_6
    
    if (arg4 s>= 0x3e8)
        var_38 = 0x33e
        ecx_6 = "who != PLAYER_NONE"
    else
        var_38 = 0x33d
        ecx_6 = "where >= START_PLAYER_PILES"
    
    sub_63b870(result, &data_801800, ecx_6, "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", var_38, 
        "GetPileHead")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

if (arg4 s>= 0x48)
    result = sub_591930()

int32_t ebx_3 = *(ebx_2 + 0x152c)
int32_t var_18 = ebx_3

if (ebx_3 == 0)
    return result

uint32_t edi_1 = zx.d(ebx_3.w)

if (edi_1 u>= 0x320)
    sub_591930()

int32_t ecx_1 = ebx_3
int32_t var_24_1 = ecx_1
int32_t eax_1 = arg3[edi_1 * 0x19 + 0x693]
int32_t eax_2 = 0
int32_t var_20_1 = 0

while (eax_2 == 0 || ecx_1 != ebx_3)
    uint32_t eax_3 = zx.d(ecx_1.w)
    void* edi_2 = eax_3 * 0x64
    int32_t ebx_4
    void* edi_3
    
    if (eax_3 u< 0x320)
        ebx_4 = *(edi_2 + arg3 + 0x1aa4)
        edi_3 = edi_2 + arg3
    else
        sub_591930()
        ebx_4 = *(edi_2 + arg3 + 0x1aa4)
        edi_3 = edi_2 + arg3
        sub_591930()
        ecx_1 = var_24_1
    
    if (*(edi_3 + 0x1a4c) != eax_1)
        break
    
    sub_5822e0(eax_1, 0xffffffff, arg3, ecx_1, 0xb, arg4, nullptr, 0, 0, 0, 0, 0, nullptr, 0, 
        0xffffffff, nullptr)
    ecx_1 = ebx_4
    eax_2 = var_20_1 + 1
    var_24_1 = ecx_1
    var_20_1 = eax_2
    ebx_3 = var_18
    
    if (ebx_4 == 0)
        break

if (arg4 s>= 0x48)
    sub_591930()

if (*(ebx_2 + 0x152c) u>= 0x320)
    sub_591930()

int32_t eax_7 = arg3[0x541]

if (eax_7 != 3 && eax_7 != 5 && eax_7 != 4 && eax_7 != 6 && arg3[0x540].b == 0)
    int32_t eax_8 = arg2
    
    if (arg2 == arg3[0x673])
        eax_8 = arg3[0x674]
    
    sub_59f9b0(eax_8, arg2, arg3, eax_8, 0x3b, 0, nullptr, 0, result_1, 0, 0, 0)

return sub_56de40(arg3, arg4)
