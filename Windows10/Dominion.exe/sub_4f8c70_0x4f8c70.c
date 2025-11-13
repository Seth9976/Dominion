// 函数: sub_4f8c70
// 地址: 0x4f8c70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_2c = ecx
int32_t eax
sub_561e00(eax, 0, 1, 0)
void* eax_1 = sub_573400()
sub_590760(eax_1, *(eax_1 + 0xc), *(eax_1 + 4), 1, 1, 0, 0)
void* eax_2 = sub_573400()
int32_t ecx_2 = *(eax_2 + 0xc)

if (ecx_2 == 0xffffffff)
    sub_63b870(eax_2, &data_801800, "c.activePlayer != PLAYER_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_3 = *(eax_2 + 4)
int32_t ecx_3 = ecx_2 * 0x5a30
*(ecx_3 + eax_3 + 0x17558) |= 2
void* eax_4 = sub_573400()
void* eax_5 = sub_5887c0(eax_4, *(eax_4 + 0xc), *(eax_4 + 4), 0)

if (eax_5 != 0)
    uint32_t esi_1 = zx.d(eax_5.w)
    void* edi_1 = *(sub_573400() + 4)
    
    if (esi_1 u>= 0x320)
        sub_591930()
    
    int32_t eax_7 = esi_1 * 0x64
    eax_5 = sub_5754f0(eax_7, *(eax_7 + edi_1 + 0x1a4c), edi_1, 2, 0)
else
    eax_5.b = 0

void* result = sub_566890(zx.d(eax_5.b) ^ 1)

if (result != 0)
    uint32_t esi_2 = zx.d(result.w)
    void* eax_9 = *(sub_573400() + 4)
    
    if (esi_2 u>= 0x320)
        sub_591930()
    
    int32_t edi_2 = esi_2 * 0x64
    
    if (sub_5754f0(eax_9, *(edi_2 + eax_9 + 0x1a4c), eax_9, 2, 0) != 0)
        void* eax_11 = sub_573400()
        int32_t ecx_9 = *(eax_11 + 4)
        
        if (esi_2 u>= 0x320)
            sub_591930()
        
        sub_582d10(eax_11, *(edi_2 + ecx_9 + 0x1a70), *(eax_11 + 4), result, 0x3eb, 0xb, 0x3ea, 3, 
            *(eax_11 + 0x28), *(eax_11 + 0x2c), *(eax_11 + 0x30), 0, 0, nullptr, 0, nullptr, 
            nullptr)
    
    void* eax_12 = sub_573400()
    void* ebx_1 = *(eax_12 + 4)
    
    if (esi_2 u>= 0x320)
        eax_12 = sub_591930()
    
    char eax_13 = sub_5754f0(eax_12, *(edi_2 + ebx_1 + 0x1a4c), ebx_1, 4, 0)
    
    if (eax_13 == 0)
        void* eax_14 = sub_573400()
        void* ebx_2 = *(eax_14 + 4)
        
        if (esi_2 u>= 0x320)
            eax_14 = sub_591930()
        
        result = sub_5754f0(eax_14, *(edi_2 + ebx_2 + 0x1a4c), ebx_2, 8, 0)
    
    if (eax_13 != 0 || result.b != 0)
        int32_t ecx_13 = 7
        int32_t* eax_17 = *(sub_573400() + 4) + 0x1594
        
        while (*eax_17 != 0xb0b)
            if (eax_17[1] == 0xb0b)
                break
            
            ecx_13 += 1
            eax_17 = &eax_17[4]
            
            if (ecx_13 s>= 0x48)
                ecx_13 = 0
                break
        
        int32_t var_2c_1 = ecx_13
        int32_t var_30_1 = 0
        
        if (sub_568960(eax_17, 0, ecx_13, 0) != 0)
            sub_56e9c0(1)
        
        result = sub_563590(0xb0b)
        
        if (result != 0)
            void* eax_19 = sub_573400()
            return sub_583720(eax_19, *(eax_19 + 0xc), *(eax_19 + 4), result, 0x476, nullptr, 
                0x476, 0, 0, 4)

return result
