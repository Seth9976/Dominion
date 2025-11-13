// 函数: sub_5916d0
// 地址: 0x5916d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t eax_2 = arg4 u>> 4 & 3
char const* const var_2c
int32_t var_28
char const* const var_24_1
void* eax_6
char* ecx_1
uint32_t esi_1

switch (eax_2)
    case 0
        void* eax_3 = sub_576940(eax_2, arg2, arg3, arg4)
        *(eax_3 + 0x20)
        return *(eax_3 + 0x1c)
    case 1
        esi_1 = arg4 u>> 0x12
    label_591708:
        uint32_t edi_1 = zx.d(esi_1.w)
        
        if (edi_1 u>= 0x320)
            sub_591930()
        
        *(edi_1 * 0x64 + arg3 + 0x1a54)
        return esi_1
    case 2
        eax_6.b = arg4.b & 0x30
        
        if (eax_6.b != 0x20)
            var_24_1 = "AbilityID::static_ability_card_enum"
            var_28 = 0x111
            var_2c = "C:\x\ax2017\Jams\Dominion\code\DomGame.h"
            ecx_1 = "type() == ABILITY_CARD_ENUM"
        label_59184f:
            sub_63b870(eax_6, &data_801800, ecx_1, var_2c, var_28, var_24_1)
            
            if (sub_63bc30() == 0)
                sub_63bb00()
                noreturn
            
            breakpoint
        
        int32_t ecx_2 = *(arg3 + 0x1520)
        int32_t edi_2 = 0
        
        if (ecx_2 s> 0)
            int32_t* eax_7 = arg3 + 0x1a4c
            
            do
                if (*eax_7 == arg4 u>> 0x12)
                    uint32_t esi_3 = zx.d(edi_2.w)
                    
                    if (esi_3 u>= 0x320)
                        sub_591930()
                    
                    *(esi_3 * 0x64 + arg3 + 0x1a54)
                    return edi_2
                
                edi_2 += 1
                eax_7 = &eax_7[0x19]
            while (edi_2 s< ecx_2)
        
        int64_t var_10 = 0
        return 0
    case 3
        eax_6 = arg4 & 0x30
        
        if (eax_6.b == 0x30)
            eax_6 = sub_591420(arg3, arg4 u>> 0x12)
            int32_t edx_6 = *(arg3 + 0x1520)
            esi_1 = 0
            
            if (edx_6 s> 0)
                void* ecx_4 = arg3 + 0x1a4c
                int32_t* eax_11 = ecx_4
                
                while (true)
                    if (*eax_11 == eax_6)
                        goto label_591708
                    
                    esi_1 += 1
                    eax_11 = &eax_11[0x19]
                    
                    if (esi_1 s>= edx_6)
                        esi_1 = 0
                        
                        while (true)
                            if (*ecx_4 == 0xb38)
                                goto label_591708
                            
                            esi_1 += 1
                            ecx_4 += 0x64
                            
                            if (esi_1 s>= edx_6)
                                eax_6 = arg3 + 0x1a4c
                                esi_1 = 0
                                
                                do
                                    if (*eax_6 == 0x1222)
                                        goto label_591708
                                    
                                    esi_1 += 1
                                    eax_6 += 0x64
                                while (esi_1 s< edx_6)
                                
                                break
                        
                        break
            
            var_24_1 = "AbilitySourceCardRef"
            var_28 = 0x4dba
            ecx_1 = "Halt"
            var_2c = "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp"
        else
            var_24_1 = "AbilityID::static_ability_token_id"
            var_28 = 0x12a
            var_2c = "C:\x\ax2017\Jams\Dominion\code\DomGame.h"
            ecx_1 = "type() == ABILITY_TOKEN"
        
        goto label_59184f
