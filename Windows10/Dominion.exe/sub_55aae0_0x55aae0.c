// 函数: sub_55aae0
// 地址: 0x55aae0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
sub_590760(eax, *(eax + 0xc), *(eax + 4), 1, 1, 0, 0)
void* eax_1 = sub_573400()
int32_t ecx_1 = *(eax_1 + 0xc)

if (ecx_1 == 0xffffffff)
    sub_63b870(eax_1, &data_801800, "c.activePlayer != PLAYER_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_2 = *(eax_1 + 4)
int32_t ecx_2 = ecx_1 * 0x5a30
*(ecx_2 + eax_2 + 0x17558) |= 2
int32_t* result = sub_562880(arg3, arg2, arg1)

if (result != 0)
    void* eax_3 = sub_573400()
    uint32_t esi_1 = zx.d(result.w)
    void* edi = *(eax_3 + 4)
    
    if (esi_1 u>= 0x320)
        eax_3 = sub_591930()
    
    int32_t ebx_1 = esi_1 * 0x64
    uint32_t eax_4
    int32_t ecx_5
    eax_4, ecx_5 = sub_5754f0(eax_3, *(ebx_1 + edi + 0x1a4c), edi, 2, 0)
    
    if (eax_4.b != 0)
        int32_t var_1c_1 = ecx_5
        sub_561e00(eax_4, 0, 2, 0)
    
    void* eax_5 = sub_573400()
    void* edi_1 = *(eax_5 + 4)
    
    if (esi_1 u>= 0x320)
        eax_5 = sub_591930()
    
    int32_t ecx_7
    result, ecx_7 = sub_5754f0(eax_5, *(ebx_1 + edi_1 + 0x1a4c), edi_1, 4, 0)
    
    if (result.b != 0)
        int32_t var_1c_2 = ecx_7
        return sub_561e00(result, 0, 5, 0)

return result
