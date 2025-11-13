// 函数: sub_4f22d0
// 地址: 0x4f22d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t ecx
uint32_t edx
ecx, edx = __chkstk(0x5230)
int32_t __saved_ebp
int32_t var_c = __security_cookie ^ &__saved_ebp
void var_37f0
sub_5939a0(&var_37f0, arg2)
int32_t var_37b0

if (var_37b0 != 0)
    int32_t var_37ec
    *(edx + 0xbc) = var_37ec
    int32_t var_37a0
    *(edx + 0xb8) = var_37a0
    *(edx + 0xc0) = var_37b0
    *(edx + 0xc8) = *(ecx + 0x19e4)
    void* eax_5 = *((var_37a0 << 2) + &data_1779f8c)
    int32_t eax_6
    
    if (eax_5 == 0)
        eax_6 = 0xffffffff
    else
        eax_6 = *(eax_5 + 0xc8)
    
    *(edx + 0xcc) = eax_6
    int32_t var_37a4
    *(edx + 0xc4) = var_37a4
    uint32_t result = var_37ec - 1
    uint32_t result_2
    int32_t i_3
    int32_t var_3784
    int32_t var_3780[0x320]
    
    if (result u> 8)
        int32_t var_14_21 = var_37ec
        sub_63b870(sub_4f7f30("Unknown choice type %d\n"), &data_801800, "Halt", 
            "C:\x\ax2017\Jams\Dominion\code\DomAIMCTS.cpp", 0x11fa, "FillNode")
    else
        switch (result)
            case 0
                int32_t eax_10 = var_3784 << 2 s>> 2
                void* var_37f8
                sub_4f5990(eax_10, &var_3780[var_3784], &var_3780, eax_10, var_37f8)
                
                if (result_2 != 1)
                    result = sub_4f1230(&var_37f0, edx, ecx, &var_37f0)
                    goto label_4f2761
                
                int32_t esi = 0
                
                if (i_3 == 0 || i_3 == 1)
                    void var_1dc0
                    sub_5939a0(&var_1dc0, &var_37f0)
                    int32_t edx_5 = var_3784
                    result = 0
                    int32_t var_1d54_1 = 1
                    uint32_t result_1 = 0
                    
                    if (edx_5 s> 0)
                        do
                            int32_t eax_12 = var_3780[result]
                            int32_t i = *(eax_12 * 0x64 + ecx + 0x1a4c)
                            int32_t eax_14 = 0
                            int32_t var_428[0x3e]
                            
                            if (esi s<= 0)
                            label_4f2489:
                                int32_t var_1d50_1 = eax_12
                                sub_4efcf0(&var_1dc0, edx, ecx, &var_1dc0)
                                edx_5 = var_3784
                                var_428[esi] = i
                                esi += 1
                            else
                                while (i != var_428[eax_14])
                                    eax_14 += 1
                                    
                                    if (eax_14 s>= esi)
                                        goto label_4f2489
                            result = result_1 + 1
                            result_1 = result
                        while (result s< edx_5)
                    
                    if (i_3 == 0)
                        int32_t var_1d54_2 = 0
                        result = sub_4efcf0(&var_1dc0, edx, ecx, &var_1dc0)
                    
                    goto label_4f2761
                
                sub_63b870(i_3, &data_801800, "yld.minChoices == 0 || yld.minChoices == 1", 
                    "C:\x\ax2017\Jams\Dominion\code\DomAIMCTS.cpp", 0xe73, "FillNodeUnique")
            case 1
                void var_330
                memset(&var_330, 0, 0x320)
                void var_10a8
                result = sub_4f14d0(&var_37f0, edx, ecx, &var_37f0, &var_10a8, 0, &var_330)
            label_4f2761:
                
                if (*(edx + 0xd4) s> 0)
                    CookieCheckFunction(result)
                    return result
                
                sub_63b870(result, &data_801800, "node->numEdges > 0", 
                    "C:\x\ax2017\Jams\Dominion\code\DomAIMCTS.cpp", 0x11fd, "FillNode")
            case 2
                if (var_3784 == 1)
                    void var_4518
                    __builtin_memcpy(&var_4518, &var_37f0, 0xd18)
                    int32_t esi_1 = 0
                    int32_t var_2ae0
                    
                    if (var_2ae0 s> 0)
                        do
                            int32_t var_2b00[0x8]
                            int32_t var_3818_1 = var_2b00[esi_1]
                            result = sub_4efcf0(&var_4518, edx, ecx, &var_4518)
                            esi_1 += 1
                        while (esi_1 s< var_2ae0)
                    
                    goto label_4f2761
                
                sub_63b870(result, &data_801800, "yld.numChoices == 1", 
                    "C:\x\ax2017\Jams\Dominion\code\DomAIMCTS.cpp", 0xf9b, "FillNodeWhere")
            case 3
                if (result_2 s< 0x20)
                    result = sub_4f16b0(&var_37f0, edx, ecx, &var_37f0, 0, 0)
                    goto label_4f2761
                
                sub_63b870(result, &data_801800, "yld.maxChoices < 32", 
                    "C:\x\ax2017\Jams\Dominion\code\DomAIMCTS.cpp", 0xfcc, "FillNodeOptions")
            case 4, 8
                result = result_2
                void var_5230
                __builtin_memcpy(&var_5230, &var_37f0, 0xd18)
                
                for (int32_t i_1 = i_3; i_1 s<= result; i_1 += 1)
                    if (i_1 s< 0x29)
                        int32_t i_2 = i_1
                        sub_4efcf0(&var_5230, edx, ecx, &var_5230)
                        result = result_2
                
                goto label_4f2761
            case 5
                if (i_3 == 0 || i_3 == 1)
                    if (result_2 == 1)
                        void var_2ad8
                        result = sub_5939a0(&var_2ad8, &var_37f0)
                        int32_t esi_2 = 0
                        int32_t var_2a6c_1 = 1
                        
                        if (var_3784 s> 0)
                            do
                                int32_t var_2a68_1 = var_3780[esi_2]
                                result = sub_4efcf0(&var_2ad8, edx, ecx, &var_2ad8)
                                esi_2 += 1
                            while (esi_2 s< var_3784)
                        
                        if (i_3 == 0)
                            int32_t var_2a6c_2 = 0
                            result = sub_4efcf0(&var_2ad8, edx, ecx, &var_2ad8)
                        
                        goto label_4f2761
                    
                    sub_63b870(i_3, &data_801800, "yld.maxChoices == 1", 
                        "C:\x\ax2017\Jams\Dominion\code\DomAIMCTS.cpp", 0xea0, "FillNodeAbility")
                else
                    sub_63b870(i_3, &data_801800, "yld.minChoices == 0 || yld.minChoices == 1", 
                        "C:\x\ax2017\Jams\Dominion\code\DomAIMCTS.cpp", 0xe9f, "FillNodeAbility")
            case 6, 7
                result = sub_4f1780(&var_37f0, edx, ecx, &var_37f0)
                goto label_4f2761
else
    sub_63b870(sub_4f7f30("Got no hint!\n"), &data_801800, "Halt", 
        "C:\x\ax2017\Jams\Dominion\code\DomAIMCTS.cpp", 0x11be, "FillNode")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
