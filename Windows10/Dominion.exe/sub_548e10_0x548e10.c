// 函数: sub_548e10
// 地址: 0x548e10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
void* eax = sub_573400()
int32_t* ecx_1 = *(eax + 0x64)
char const* const var_24
int32_t var_20
char const* const var_1c
char* ecx_2

if (ecx_1 != 0)
    int32_t eax_1 = *ecx_1
    int32_t edi_1
    
    if (eax_1 == 1)
        edi_1 = ecx_1[2]
    label_548e6c:
        eax = sub_573400()
        
        if (edi_1 == *(eax + 0xc))
            uint32_t esi_1 = zx.d(sub_56b800())
            int32_t ebx = *(sub_573400() + 4)
            
            if (esi_1 u>= 0x320)
                sub_591930()
            
            if (edi_1 == *(esi_1 * 0x64 + ebx + 0x1a70))
                uint32_t edi_2 = zx.d(arg1.w)
                void* ebx_1 = *(sub_573400() + 4)
                
                if (edi_2 u>= 0x320)
                    sub_591930()
                
                int32_t eax_6 = edi_2 * 0x64
                
                if (sub_5754f0(eax_6, *(eax_6 + ebx_1 + 0x1a4c), ebx_1, 2, 0).b != 0)
                    return sub_570250(arg1) != 0
            
            uint32_t result
            result.b = 0
            return result
        
        var_1c = "LandingParty::<lambda_a19804f7d1536fb9dc53deb67a70491c>::operator ()"
        var_20 = 0x2b1
        var_24 = "C:\x\ax2017\Jams\Dominion\code\DomCards_Plunder.cpp"
        ecx_2 = "who == CurrentWho()"
    else
        eax = eax_1 - 2
        
        if (eax_1 == 2)
            edi_1 = ecx_1[4]
            goto label_548e6c
        
        var_1c = "SnapshotOwner"
        var_20 = 0x1bc0
        var_24 = "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp"
        ecx_2 = "Halt"
else
    var_1c = "SnapshotOwner"
    var_20 = 0x1bb8
    var_24 = "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp"
    ecx_2 = "c.triggerInfo"

sub_63b870(eax, &data_801800, ecx_2, var_24, var_20, var_1c)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
