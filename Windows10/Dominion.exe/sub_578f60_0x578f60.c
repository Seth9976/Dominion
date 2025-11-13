// 函数: sub_578f60
// 地址: 0x578f60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_8 = arg1
void* ebx = arg2
void* var_8_1 = arg1
int32_t edi = 0
void* const i

if (*(ebx + 0x400) s<= 0)
label_5790ae:
    i.b = 1
    return i

int32_t esi_1 = *ebx
uint32_t eax_2 = esi_1 u>> 4 & 3
int32_t var_1c
char const* const var_18_3
int32_t eax_6
char* ecx_2
uint32_t esi_2

switch (eax_2)
    case 0
    label_578f8d:
        void* eax_3
        eax_3, arg2 = sub_576940(eax_2, arg2, arg1, esi_1)
        esi_2 = *(eax_3 + 0x28)
        
        if (esi_2 == 0)
            uint32_t esi_4 = zx.d((*(eax_3 + 0x1c)).w)
            
            if (esi_4 u>= 0x320)
                arg2 = sub_591930()
            
            arg1 = var_8_1
            esi_2 = *(esi_4 * 0x64 + arg1 + 0x1a4c)
        else
            arg1 = var_8_1
        
        goto label_578ff4
    case 1
    label_578fc6:
        uint32_t esi_5 = esi_1 u>> 0x12
        
        if (esi_5 u>= 0x320)
            arg2 = sub_591930()
            arg1 = var_8_1
        
        esi_2 = *(esi_5 * 0x64 + arg1 + 0x1a4c)
        goto label_578ff4
    case 2
    label_578fe7:
        eax_6.b = esi_1.b & 0x30
        
        if (eax_6.b != 0x20)
            var_18_3 = "AbilityID::static_ability_card_enum"
            var_1c = 0x111
            char const* const var_20 = "C:\x\ax2017\Jams\Dominion\code\DomGame.h"
            ecx_2 = "type() == ABILITY_CARD_ENUM"
        label_5790e6:
            sub_63b870(eax_6, &data_801800, ecx_2, "C:\x\ax2017\Jams\Dominion\code\DomGame.h", 
                var_1c, var_18_3)
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        esi_2 = esi_1 u>> 0x12
    label_578ff4:
        
        for (i = &data_820f60; i s< "dom_log_entry_source"; i += 4)
            if (*i == esi_2)
                goto label_57908e
        
        uint32_t eax_7 = *(ebx + (edi << 2))
        int32_t ecx
        
        if ((eax_7.b & 0x30) != 0)
            void* eax_9
            eax_9, arg2 = sub_5769e0(eax_7, arg2, arg1, eax_7)
            ecx = *(eax_9 + 0xb0)
        else
            void* eax_8
            eax_8, arg2 = sub_576940(eax_7, arg2, arg1, eax_7)
            ecx = *(eax_8 + 0x84)
        
        for (i = &data_820f48; i s< &data_820f60; i += 8)
            if (*i == esi_2 && *(i + 4) == ecx)
                goto label_57908e
        
        i.b = 0
        return i
    case 3
        while (true)
            eax_6 = esi_1 & 0x30
            
            if (eax_6.b != 0x30)
                var_18_3 = "AbilityID::static_ability_token_id"
                var_1c = 0x12a
                char const* const var_20_1 = "C:\x\ax2017\Jams\Dominion\code\DomGame.h"
                ecx_2 = "type() == ABILITY_TOKEN"
                break
            
            i = &data_820f38
            
            while (*i != *((esi_1 u>> 0x12 << 5) + arg1 + 0x152c8))
                i += 4
                
                if (i s>= &data_820f48)
                    i.b = 0
                    return i
            
        label_57908e:
            edi += 1
            
            if (edi s>= *(ebx + 0x400))
                goto label_5790ae
            
            esi_1 = *(ebx + (edi << 2))
            arg1 = var_8_1
            eax_2 = esi_1 u>> 4 & 3
            
            switch (eax_2)
                case 0
                    goto label_578f8d
                case 1
                    goto label_578fc6
                case 2
                    goto label_578fe7
                case 3
                    continue
        
        goto label_5790e6
