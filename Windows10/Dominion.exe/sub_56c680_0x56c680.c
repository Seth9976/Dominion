// 函数: sub_56c680
// 地址: 0x56c680
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
int32_t eax_1 = *eax
int32_t var_2c
char const* const ecx_6
void* esi_1

if (eax_1 != 2)
    if (eax_1 == 4)
        esi_1 = sub_5768a0(*(eax + 4))
        *(esi_1 + 0x14) = *(eax + 0xc)
        *(esi_1 + 0x18) = 0xffffffff
        *(esi_1 + 0x1c) = 0
        *(esi_1 + 0x20) = 0
        *(esi_1 + 0x24) = *(eax + 0x10)
    label_56c775:
        *esi_1 = 0
        *(esi_1 + 0x4c) = 2
        *(esi_1 + 0x54) = arg2
        *(esi_1 + 0x50) = arg3
        *(esi_1 + 0x58) = arg4
        *(esi_1 + 0x60) = arg5
        *(esi_1 + 0x64) = 0xffffffff
        *(esi_1 + 0x70) = 0
        *(esi_1 + 0x74) = 0
        *(esi_1 + 0x7c) = 0
        *(esi_1 + 0x84) = arg7
        return sub_56b8e0(esi_1 + 0x78, esi_1 + 0x70, *(eax + 4), esi_1 + 0x74, esi_1 + 0x78, arg6)
    
    char const* const var_28_2 = "Forever"
    var_2c = 0x13de
    ecx_6 = "Halt"
else
    esi_1 = sub_5768a0(*(eax + 4))
    *(esi_1 + 0x14) = *(eax + 0xc)
    *(esi_1 + 0x18) = 0xffffffff
    int32_t ecx_2 = *(eax + 0x14)
    int32_t edx = *(eax + 0x10)
    int32_t var_10_1 = ecx_2
    *(esi_1 + 0x1c) = edx
    *(esi_1 + 0x20) = ecx_2
    int32_t ecx_3 = *(eax + 0x10)
    int32_t eax_3
    
    if (ecx_3 != 0)
        int32_t eax_4 = *(eax + 4)
        uint32_t ebx_1 = zx.d(ecx_3.w)
        
        if (ebx_1 u>= 0x320)
            sub_591930()
            edx = *(esi_1 + 0x1c)
        
        eax_3 = *(ebx_1 * 0x64 + eax_4 + 0x1a4c)
    else
        eax_3 = 0
    
    *(esi_1 + 0x24) = eax_3
    eax_1 = *(eax + 0x28)
    int32_t ecx_5 = *(eax + 0x2c)
    *(esi_1 + 0x38) = eax_1
    *(esi_1 + 0x3c) = ecx_5
    
    if (edx != 0)
        int32_t ecx_7 = *(eax + 0x20)
        *(esi_1 + 0x44) = *(eax + 0x1c)
        *(esi_1 + 0x48) = ecx_7
        *(esi_1 + 0x28) = *(eax + 0x24)
        goto label_56c775
    
    char const* const var_28 = "Forever"
    var_2c = 0x13b5
    ecx_6 = "ability.which.which != CARDID_NULL"
sub_63b870(eax_1, &data_801800, ecx_6, "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", var_2c, 
    "Forever")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
