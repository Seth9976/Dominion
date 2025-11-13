// 函数: sub_53c2a0
// 地址: 0x53c2a0
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
        uint32_t eax_2 = sub_563590(0xf46)
        
        if (eax_2 != 0)
            void* eax_3 = sub_573400()
            sub_583720(eax_3, *(eax_3 + 0xc), *(eax_3 + 4), eax_2, 0x476, nullptr, 0x476, 0, 0, 4)
    
    void* eax_4 = sub_573400()
    void* edi_3 = *(eax_4 + 4)
    
    if (esi_2 u>= 0x320)
        eax_4 = sub_591930()
    
    if (sub_5754f0(eax_4, *(ebx_1 + edi_3 + 0x1a4c), edi_3, 2, 0) != 0)
        uint32_t eax_6 = sub_563590(0x105)
        
        if (eax_6 != 0)
            void* eax_7 = sub_573400()
            sub_583720(eax_7, *(eax_7 + 0xc), *(eax_7 + 4), eax_6, 0x476, nullptr, 0x476, 0, 0, 4)
    
    void* eax_8 = sub_573400()
    void* edi_5 = *(eax_8 + 4)
    
    if (esi_2 u>= 0x320)
        eax_8 = sub_591930()
    
    int32_t ecx_7
    result, ecx_7 = sub_5754f0(eax_8, *(ebx_1 + edi_5 + 0x1a4c), edi_5, 8, 0)
    
    if (result.b != 0)
        int32_t var_1c_2 = ecx_7
        sub_561e00(result, 0, 1, 0)
        void* eax_9 = sub_573400()
        sub_590760(eax_9, *(eax_9 + 0xc), *(eax_9 + 4), 1, 1, 0, 0)
        void* eax_10 = sub_573400()
        int32_t ecx_9 = *(eax_10 + 0xc)
        
        if (ecx_9 == 0xffffffff)
            sub_63b870(eax_10, &data_801800, "c.activePlayer != PLAYER_NONE", 
                "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        result = *(eax_10 + 4)
        result[ecx_9 * 0x168c + 0x5d56] |= 2

return result
