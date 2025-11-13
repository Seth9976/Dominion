// 函数: sub_56ba40
// 地址: 0x56ba40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax
int32_t edx
eax, edx = sub_573400()
uint32_t eax_1 = *eax
int32_t var_24
char const* const ecx_2
uint32_t var_8_1
uint32_t esi_1

if (eax_1 != 2)
    if (eax_1 == 3)
        uint32_t edx_1
        eax_1, edx_1 = sub_5916d0(eax_1, edx, *(eax + 4), *(eax + 0x10))
        var_8_1 = edx_1
        esi_1 = eax_1
        goto label_56ba84
    
    char const* const var_20_4 = "NextTime"
    var_24 = 0x115d
    ecx_2 = "Halt"
else
    eax_1 = *(eax + 0x14)
    esi_1 = *(eax + 0x10)
    var_8_1 = eax_1
label_56ba84:
    void* ecx_1 = *(eax + 4)
    
    if (*(ecx_1 + 0x19b8) s< 0x100)
        void* eax_2 = sub_5768a0(ecx_1)
        int32_t ecx_3 = *(eax + 0xc)
        *(eax_2 + 0x20) = var_8_1
        *(eax_2 + 0x1c) = esi_1
        *(eax_2 + 0x14) = ecx_3
        *(eax_2 + 0x18) = 0xffffffff
        int32_t ecx_4 = *(eax + 0x1c)
        *(eax_2 + 0x48) = *(eax + 0x20)
        *(eax_2 + 0x44) = ecx_4
        *(eax_2 + 0x28) = *(eax + 0x24)
        *eax_2 = 3
        *(eax_2 + 4) = 1
        *(eax_2 + 0x10) = *(eax + 0x38)
        *(eax_2 + 0x54) = arg2
        *(eax_2 + 0x50) = arg3
        *(eax_2 + 0x58) = arg4
        *(eax_2 + 0x60) = arg7
        *(eax_2 + 0x4c) = 2
        *(eax_2 + 0x64) = *(*(eax + 4) + 0x19e4)
        int32_t ecx_5 = *(eax + 0x2c)
        *(eax_2 + 0x68) = *(eax + 0x28)
        *(eax_2 + 0x84) = arg6
        *(eax_2 + 0x6c) = ecx_5
        *(eax_2 + 0x70) = 0
        *(eax_2 + 0x74) = 0
        *(eax_2 + 0x7c) = 0
        int32_t ecx_6 = *(eax + 0x2c)
        *(eax_2 + 0x38) = *(eax + 0x28)
        *(eax_2 + 0x3c) = ecx_6
        return sub_56b8e0(eax_2 + 0x78, eax_2 + 0x70, *(eax + 4), eax_2 + 0x74, eax_2 + 0x78, arg5)
    
    char const* const var_20_2 = "NextTime"
    var_24 = 0x1163
    ecx_2 = "c.g->numScheduledAbilities < MAX_ABILITIES"
sub_63b870(eax_1, &data_801800, ecx_2, "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", var_24, 
    "NextTime")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
