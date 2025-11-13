// 函数: sub_56bba0
// 地址: 0x56bba0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax
int32_t edx
eax, edx = sub_573400()
uint32_t eax_1 = *eax
int32_t var_14 = *(eax + 0x28)
uint32_t var_18 = *(eax + 0x2c)
int32_t var_38
char const* const ecx_7
uint32_t var_10_2
int32_t var_c_1
uint32_t var_8_1
void* ebx_1

if (eax_1 != 2)
    if (eax_1 == 3)
        ebx_1 = eax + 4
        uint32_t eax_5
        int32_t edx_1
        eax_5, edx_1 = sub_5916d0(eax_1, edx, *(eax + 4), *(eax + 0x10))
        var_8_1 = eax_5
        var_c_1 = edx_1
        int32_t edx_2
        eax_1, edx_2 = sub_5915b0(eax_5, edx_1, *ebx_1, *(eax + 0x10))
        var_10_2 = eax_1
        
        if ((*(eax + 0x10) & 0x30) == 0)
            void* eax_6 = sub_576940(eax_1, edx_2, *ebx_1, *(eax + 0x10))
            eax_1 = *(eax_6 + 0x3c)
            var_14 = *(eax_6 + 0x38)
            var_18 = eax_1
        
        goto label_56bc4e
    
    char const* const var_34_6 = "StartOfNextTurn"
    var_38 = 0x11a0
    ecx_7 = "Halt"
else
    uint32_t ecx = *(eax + 0x10)
    ebx_1 = eax + 4
    uint32_t esi_2 = zx.d(ecx.w)
    var_c_1 = *(eax + 0x14)
    int32_t eax_3 = *ebx_1
    var_8_1 = ecx
    
    if (esi_2 u>= 0x320)
        sub_591930()
    
    eax_1 = *(esi_2 * 0x64 + eax_3 + 0x1a4c)
    var_10_2 = eax_1
label_56bc4e:
    void* ecx_6 = *ebx_1
    
    if (*(ecx_6 + 0x19b8) s< 0x100)
        void* eax_7 = sub_5768a0(ecx_6)
        int32_t ecx_8 = *(eax + 0xc)
        *(eax_7 + 0x1c) = var_8_1
        *(eax_7 + 0x20) = var_c_1
        *(eax_7 + 0x24) = var_10_2
        *(eax_7 + 0x14) = ecx_8
        *(eax_7 + 0x18) = 0xffffffff
        int32_t ecx_9 = *(eax + 0x1c)
        *(eax_7 + 0x48) = *(eax + 0x20)
        *(eax_7 + 0x44) = ecx_9
        *(eax_7 + 0x28) = *(eax + 0x24)
        *eax_7 = 3
        
        if ((arg6 & 0x40000) != 0)
            *(eax_7 + 4) = 6
        
        *(eax_7 + 0x54) = arg3
        *(eax_7 + 0x60) = arg6
        *(eax_7 + 0x58) = arg2
        *(eax_7 + 0x4c) = 2
        *(eax_7 + 0x50) = 1
        *(eax_7 + 0x64) = *(*ebx_1 + 0x19e4)
        *(eax_7 + 0x84) = arg5
        *(eax_7 + 0x38) = var_14
        *(eax_7 + 0x3c) = var_18
        *(eax_7 + 0x70) = 0
        *(eax_7 + 0x74) = 0
        *(eax_7 + 0x7c) = 0
        return sub_56b8e0(eax_7 + 0x78, eax_7 + 0x70, *ebx_1, eax_7 + 0x74, eax_7 + 0x78, arg4)
    
    char const* const var_34_4 = "StartOfNextTurn"
    var_38 = 0x11aa
    ecx_7 = "c.g->numScheduledAbilities < MAX_ABILITIES"
sub_63b870(eax_1, &data_801800, ecx_7, "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", var_38, 
    "StartOfNextTurn")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
