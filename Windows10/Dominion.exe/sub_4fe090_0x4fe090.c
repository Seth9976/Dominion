// 函数: sub_4fe090
// 地址: 0x4fe090
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
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
int32_t* result = sub_562880()

if (result != 0)
    void* eax_3 = sub_573400()
    uint32_t esi_1 = zx.d(result.w)
    int32_t ecx_4 = *(eax_3 + 0xc)
    void* edi_1 = *(eax_3 + 4)
    int32_t var_14 = ecx_4
    
    if (esi_1 u>= 0x320)
        sub_591930()
        ecx_4 = var_14
    
    int32_t eax_4 = esi_1 * 0x64
    int32_t var_18 = eax_4
    sub_576e90(eax_4, edi_1, &var_14, ecx_4, *(eax_4 + edi_1 + 0x1a4c), 0)
    uint32_t var_40[0x4]
    uint32_t* eax_5 = sub_576c00(&var_40, var_14)
    int32_t eax_6 = eax_5[4]
    int32_t var_30_1 = eax_6
    sub_561e00(eax_6, 0, (*eax_5).d, 0)
    void* eax_7 = sub_573400()
    int32_t ecx_7 = *(eax_7 + 0xc)
    void* edi_2 = *(eax_7 + 4)
    var_14 = ecx_7
    
    if (esi_1 u>= 0x320)
        sub_591930()
        ecx_7 = var_14
    
    int32_t eax_8 = var_18
    sub_576e90(eax_8, edi_2, &var_18, ecx_7, *(eax_8 + edi_2 + 0x1a4c), 0)
    uint32_t* eax_9
    int32_t ecx_9
    eax_9, ecx_9 = sub_576c00(&var_40, var_18)
    result = _mm_bsrli_si128(*eax_9, 4)
    
    if (result s> 0)
        int32_t var_54_1 = ecx_9
        return sub_561e00(result, 0, 2, 0)

return result
