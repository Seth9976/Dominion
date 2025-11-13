// 函数: sub_537c40
// 地址: 0x537c40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
int32_t esi
int32_t var_14 = esi
int32_t var_1c = ecx
int32_t var_1c_1 = 4
int32_t* result = sub_564ce0(esi)

if (result != 0)
    void* eax = sub_573400()
    uint32_t esi_2 = zx.d(result.w)
    void* edi_1 = *(eax + 4)
    
    if (esi_2 u>= 0x320)
        eax = sub_591930()
    
    int32_t ebx_1 = esi_2 * 0x64
    
    if (sub_5754f0(eax, *(ebx_1 + edi_1 + 0x1a4c), edi_1, 4, 0) != 0)
        void* eax_2 = sub_573400()
        sub_590760(eax_2, *(eax_2 + 0xc), *(eax_2 + 4), 1, 1, 0, 0)
        void* eax_3 = sub_573400()
        int32_t ecx_4 = *(eax_3 + 0xc)
        
        if (ecx_4 == 0xffffffff)
            sub_63b870(eax_3, &data_801800, "c.activePlayer != PLAYER_NONE", 
                "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        int32_t eax_4 = *(eax_3 + 4)
        int32_t ecx_5 = ecx_4 * 0x5a30
        *(eax_4 + ecx_5 + 0x17558) |= 2
    
    void* eax_5 = sub_573400()
    void* edi_2 = *(eax_5 + 4)
    
    if (esi_2 u>= 0x320)
        eax_5 = sub_591930()
    
    uint32_t eax_6 = sub_5754f0(eax_5, *(ebx_1 + edi_2 + 0x1a4c), edi_2, 2, 0)
    
    if (eax_6.b != 0)
        sub_561af0(eax_6, 0, 1, 0)
    
    uint32_t eax_7 = sub_573400()
    void* edi_3 = *(eax_7 + 4)
    
    if (esi_2 u>= 0x320)
        eax_7 = sub_591930()
    
    int32_t ecx_8
    result, ecx_8 = sub_5754f0(eax_7, *(ebx_1 + edi_3 + 0x1a4c), edi_3, 8, 0)
    
    if (result.b != 0)
        int32_t var_1c_2 = ecx_8
        return sub_561e00(result, 0, 1, 0)

return result
