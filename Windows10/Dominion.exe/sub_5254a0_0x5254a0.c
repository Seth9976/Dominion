// 函数: sub_5254a0
// 地址: 0x5254a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_24 = ecx
int32_t eax
sub_561e00(eax, 0, 1, 0)
void* eax_1 = sub_573400()
sub_590760(eax_1, *(eax_1 + 0xc), *(eax_1 + 4), 1, 1, 0, 0)
void* eax_2 = sub_573400()
int32_t ecx_2 = *(eax_2 + 0xc)

if (ecx_2 != 0xffffffff)
    int32_t eax_3 = *(eax_2 + 4)
    int32_t ecx_3 = ecx_2 * 0x5a30
    *(ecx_3 + eax_3 + 0x17558) |= 2
    uint32_t result = sub_566920(arg2)
    
    if (result == 0)
        return result
    
    uint32_t esi = zx.d(result.w)
    int32_t var_14
    
    if (sub_567340(arg2, arg1, var_14) == 0)
        void* eax_5 = sub_573400()
        int32_t eax_6 = *(eax_5 + 4)
        
        if (esi u>= 0x320)
            sub_591930()
        
        sub_582d10(eax_6, *(esi * 0x64 + eax_6 + 0x1a70), *(eax_5 + 4), result, 0x3ee, 0xb, 0x3eb, 
            2, *(eax_5 + 0x28), *(eax_5 + 0x2c), *(eax_5 + 0x30), 0, 0, nullptr, 0, nullptr, 
            nullptr)
    
    void* eax_7 = sub_573400()
    void* ebx_2 = *(eax_7 + 4)
    
    if (esi u>= 0x320)
        eax_7 = sub_591930()
    
    int32_t edi_1 = esi * 0x64
    
    if (sub_5754f0(eax_7, *(edi_1 + ebx_2 + 0x1a4c), ebx_2, 4, 0) == 0)
        goto label_5255f4
    
    void* eax_9 = sub_573400()
    sub_590760(eax_9, *(eax_9 + 0xc), *(eax_9 + 4), 1, 1, 0, 0)
    eax_2 = sub_573400()
    int32_t ecx_8 = *(eax_2 + 0xc)
    
    if (ecx_8 != 0xffffffff)
        int32_t eax_10 = *(eax_2 + 4)
        int32_t ecx_9 = ecx_8 * 0x5a30
        *(ecx_9 + eax_10 + 0x17558) |= 2
    label_5255f4:
        void* eax_11 = sub_573400()
        void* ebx_3 = *(eax_11 + 4)
        
        if (esi u>= 0x320)
            eax_11 = sub_591930()
        
        uint32_t eax_12 = sub_5754f0(eax_11, *(edi_1 + ebx_3 + 0x1a4c), ebx_3, 2, 0)
        
        if (eax_12.b != 0)
            sub_561af0(eax_12, 0, 1, 0)
        
        void* eax_13 = sub_573400()
        void* ebx_4 = *(eax_13 + 4)
        
        if (esi u>= 0x320)
            eax_13 = sub_591930()
        
        int32_t ecx_12
        result, ecx_12 = sub_5754f0(eax_13, *(edi_1 + ebx_4 + 0x1a4c), ebx_4, 8, 0)
        
        if (result.b == 0)
            return result
        
        int32_t var_24_1 = ecx_12
        return sub_561e00(result, 0, 1, 0)

sub_63b870(eax_2, &data_801800, "c.activePlayer != PLAYER_NONE", 
    "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
