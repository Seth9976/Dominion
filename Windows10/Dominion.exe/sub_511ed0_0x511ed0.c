// 函数: sub_511ed0
// 地址: 0x511ed0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* eax_4 = data_cca780 + 0xc + (data_cca784 << 0xb)
void* var_11c
void* eax_6 = sub_50af00(sub_516f30(0x1b58), &var_11c)
int32_t esi = 0
void* var_124 = eax_6
int32_t edi = 0
int32_t var_114 = 0
int32_t var_118 = 0
int32_t var_13c
char* ecx_6

if (eax_6 s> 0)
    int32_t* ebx_2 = var_11c + 4
    
    while (true)
        eax_6 = sub_511d80(*ebx_2, 0)
        int32_t var_10c[0x41]
        
        if (eax_6.b != 0)
            int32_t edi_1
            
            if (arg1 != 0)
                edi_1 = 0
                
                for (int32_t i = 0; i s< 0xa; )
                    eax_6 = eax_4
                    int32_t edx_3 = *(eax_6 + (i << 2))
                    
                    if (edx_3 == 0)
                        break
                    
                    i += 1
                    eax_6 = sub_511d80(*ebx_2, edx_3)
                    int32_t ecx_3 = edi_1 + 1
                    
                    if (eax_6.b == 0)
                        ecx_3 = edi_1
                    
                    edi_1 = ecx_3
                
                esi = var_114
                edi = var_118
            
            if (arg1 == 0 || edi_1 s>= 3)
                if (esi s>= 0x40)
                    char const* const var_138 = "RandomCardStamp"
                    var_13c = 0x13c0
                    ecx_6 = "numFilteredEntries < 64"
                    goto label_512012
                
                eax_6 = &ebx_2[-1]
                var_10c[esi] = eax_6
                esi += 1
                var_114 = esi
        
        edi += 1
        ebx_2 = &ebx_2[2]
        var_118 = edi
        
        if (edi s>= var_124)
            if (esi s<= 0)
                break
            
            uint32_t result = *(var_10c[sub_63ed10(&data_cc8de0, esi)] + 4)
            CookieCheckFunction(result)
            return result

char const* const var_138_1 = "RandomCardStamp"
var_13c = 0x13c4
ecx_6 = "numFilteredEntries > 0"
label_512012:
sub_63b870(eax_6, &data_801800, ecx_6, "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 
    var_13c, "RandomCardStamp")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
