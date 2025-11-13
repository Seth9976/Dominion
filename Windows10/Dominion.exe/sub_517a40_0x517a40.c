// 函数: sub_517a40
// 地址: 0x517a40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t eax_2 = data_cca790
void* ebx = data_cca780
int32_t* eax_6

if (eax_2 != 2)
    eax_6 = ebx + ((eax_2 + 0xa02) << 3)
else
    eax_6 = (data_cca784 << 0xb) + 0x540 + ebx

int32_t* var_90 = eax_6
int32_t edi = 0
int32_t var_8c[0x21]

for (int32_t* i = &data_cc97b8; i s< 0xcc99b8; i = &i[4])
    int32_t j = *i
    
    if (j != 2 && j != 0x13)
        int32_t ecx_1 = 0
        eax_6 = ebx + 0x5010
        
        while (*eax_6 != 0x834 || eax_6[1] != j)
            ecx_1 += 1
            eax_6 = &eax_6[2]
            
            if (ecx_1 s>= 2)
                eax_6 = data_cca784 << 0xb
                
                if (*(eax_6 + ebx + 0x540) != 0x834 || *(eax_6 + ebx + 0x544) != j)
                    var_8c[edi] = j
                    edi += 1
                
                break

if (edi s> 0)
    uint32_t result = var_8c[sub_63ed10(&data_cc8de0, edi)]
    var_90[1] = result
    CookieCheckFunction(result)
    return result

sub_63b870(eax_6, &data_801800, "numExps > 0", 
    "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 0x1eeb, "RollThemeExpansion")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
