// 函数: sub_52bd10
// 地址: 0x52bd10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* result = sub_562880(arg3, arg2, arg1)

if (result != 0)
    void* eax = sub_573400()
    uint32_t esi_1 = zx.d(result.w)
    void* edi = *(eax + 4)
    
    if (esi_1 u>= 0x320)
        eax = sub_591930()
    
    int32_t ebx_1 = esi_1 * 0x64
    uint32_t eax_1
    int32_t ecx_2
    eax_1, ecx_2 = sub_5754f0(eax, *(ebx_1 + edi + 0x1a4c), edi, 4, 0)
    
    if (eax_1.b != 0)
        int32_t var_1c_1 = ecx_2
        sub_561e00(eax_1, 0, 2, 0)
        void* eax_2 = sub_573400()
        sub_590760(eax_2, *(eax_2 + 0xc), *(eax_2 + 4), 1, 2, 0, 0)
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
    void* edi_1 = *(eax_5 + 4)
    
    if (esi_1 u>= 0x320)
        eax_5 = sub_591930()
    
    uint32_t eax_6 = sub_5754f0(eax_5, *(ebx_1 + edi_1 + 0x1a4c), edi_1, 2, 0)
    
    if (eax_6.b != 0)
        sub_561af0(eax_6, 0, 2, 0)
    
    uint32_t eax_7 = sub_573400()
    void* edi_2 = *(eax_7 + 4)
    
    if (esi_1 u>= 0x320)
        eax_7 = sub_591930()
    
    result = sub_5754f0(eax_7, *(ebx_1 + edi_2 + 0x1a4c), edi_2, 8, 0)
    
    if (result.b != 0)
        return sub_562100(2, 0)

return result
