// 函数: sub_53a360
// 地址: 0x53a360
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_c = arg1
uint32_t esi_1 = zx.d((*(arg1 + 4)).w)
void* edi = *(sub_573400() + 4)

if (esi_1 u>= 0x320)
    sub_591930()

int32_t eax_1 = esi_1 * 0x64

if (sub_5754f0(eax_1, *(eax_1 + edi + 0x1a4c), edi, 4, 0) != 0)
    void* eax_3 = sub_573400()
    sub_590760(eax_3, *(eax_3 + 0xc), *(eax_3 + 4), 1, 2, 0, 0)
    void* eax_4 = sub_573400()
    int32_t ecx_2 = *(eax_4 + 0xc)
    
    if (ecx_2 == 0xffffffff)
        sub_63b870(eax_4, &data_801800, "c.activePlayer != PLAYER_NONE", 
            "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    int32_t eax_5 = *(eax_4 + 4)
    int32_t ecx_3 = ecx_2 * 0x5a30
    *(eax_5 + ecx_3 + 0x17558) |= 2

uint32_t esi_3 = zx.d((*(arg1 + 4)).w)
void* edi_1 = *(sub_573400() + 4)

if (esi_3 u>= 0x320)
    sub_591930()

int32_t eax_7 = esi_3 * 0x64
uint32_t eax_8 = sub_5754f0(eax_7, *(eax_7 + edi_1 + 0x1a4c), edi_1, 2, 0)

if (eax_8.b != 0)
    sub_561af0(eax_8, 0, 2, 0)

uint32_t esi_5 = zx.d((*(arg1 + 4)).w)
void* edi_2 = *(sub_573400() + 4)

if (esi_5 u>= 0x320)
    sub_591930()

int32_t eax_10 = esi_5 * 0x64
uint32_t result
int32_t ecx_6
result, ecx_6 = sub_5754f0(eax_10, *(eax_10 + edi_2 + 0x1a4c), edi_2, 8, 0)

if (result.b == 0)
    return result

int32_t var_1c_1 = ecx_6
return sub_561e00(result, 0, 2, 0)
