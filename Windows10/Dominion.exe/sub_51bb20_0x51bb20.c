// 函数: sub_51bb20
// 地址: 0x51bb20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi = arg2
int32_t result = 0
int32_t var_c = esi
int32_t var_10 = 0
int32_t* edi_1 = arg4 + 0x548
int32_t var_24
char const* const var_20_4
int32_t eax_1
char* ecx_5

while (true)
    int32_t ecx = *edi_1
    
    if (ecx != 0)
        eax_1 = *(sub_516f30(ecx) + 8)
        int32_t ecx_1
        
        if (eax_1 s> 0x1770)
            if (eax_1 != 0x1b58)
            label_51bc65:
                var_20_4 = "CampaignExtraApplies"
                var_24 = 0x29e1
                ecx_5 = "Halt"
                break
                break
            
            ecx_1 = arg5
            eax_1 = ecx_1 u>> 3
        else if (eax_1 == 0x1770)
            ecx_1 = arg5
            eax_1 = ecx_1 u>> 4
        else
            eax_1 -= 0xdad
            
            if (eax_1 u> 3)
                goto label_51bc65
            
            switch (eax_1)
                case 0
                    ecx_1 = arg5
                    eax_1 = ecx_1 u>> 1
                case 1
                    ecx_1 = arg5
                    eax_1.b = ecx_1.b
                case 2
                    ecx_1 = arg5
                    eax_1 = ecx_1 u>> 5
                case 3
                    ecx_1 = arg5
                    eax_1 = ecx_1 u>> 2
        
        if ((eax_1.b & 1) != 0)
            eax_1 = ecx_1 - 1
            
            if (eax_1 u> 0x1f)
            label_51bc59:
                var_20_4 = "CampaignApplyExtras"
                var_24 = 0x2a33
                ecx_5 = "Halt"
                break
                break
            
            eax_1 = zx.d(lookup_table_51bcb8[eax_1])
            
            switch (eax_1)
                case 0
                    result |= 1
                label_51bbd4:
                    
                    if (esi != 0xffffffff)
                        int32_t eax_8 = edi_1[2]
                        
                        if (eax_8 == esi || eax_8 == 0xffffffff)
                            sub_51b610(eax_8, edi_1, arg3, esi)
                    else
                        int32_t i = 0
                        
                        if (arg3[0x34e] s> 0)
                            do
                                eax_1 = sub_51b610(eax_1, edi_1, arg3, i)
                                i += 1
                            while (i s< arg3[0x34e])
                        
                        esi = var_c
                case 1
                    goto label_51bbd4
                case 2
                    if (esi != 0xffffffff)
                        var_20_4 = "CampaignApplyExtras"
                        var_24 = 0x2a2f
                        ecx_5 = "who == PLAYER_NONE"
                        break
                    
                    sub_51b610(eax_1, edi_1, arg3, esi)
                case 3
                    goto label_51bc59
        
        edi_1 = &edi_1[5]
        int32_t edx_2 = var_10 + 1
        var_10 = edx_2
        
        if (edx_2 s< 0x20)
            continue
    
    return result

sub_63b870(eax_1, &data_801800, ecx_5, "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 
    var_24, var_20_4)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
