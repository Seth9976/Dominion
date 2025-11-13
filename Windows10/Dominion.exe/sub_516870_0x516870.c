// 函数: sub_516870
// 地址: 0x516870
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t ecx = data_cca790
int32_t eax_2 = data_cca780
int32_t* ecx_3

if (ecx != 2)
    ecx_3 = eax_2 + ((ecx + 0xa02) << 3)
else
    eax_2 += 0x540
    ecx_3 = (data_cca784 << 0xb) + eax_2

if (*ecx_3 != 0x384)
    sub_63b870(eax_2, &data_801800, "theme.piece == CTHEME_CATEGORY", 
        "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 0x1c31, 
        "ThemePiece_CategoryCombo::<lambda_f432f8b976f9d1c000aabc76fd2255ce>::operator ()")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

uint32_t result = sub_516ec0(ecx_3[1])
int32_t ecx_6 = data_ccb414
int32_t i = 0
int32_t edi = 0
int32_t* edx = result + 4
int32_t* var_1a4 = edx
int32_t* ebx = edx
int32_t var_1a0[0x65]
var_19c

while (*ebx != 0)
    result = 0
    
    if (ecx_6 s> 0)
        do
            if (*((result << 2) + &data_cca794) == edx[edi])
                result = *(sub_571b30(*ebx, 0x17) + 0x9c) & 0x800
                
                if (result == 0)
                    result = *(sub_571b30(*ebx, result + 0x17) + 0x9c) & 0x40
                    
                    if (result == 0)
                        void* ecx_13
                        
                        if (edi s< 0xa)
                            ecx_13 = result + 0x32
                        else if (edi s< 0x14)
                            ecx_13 = 0x19
                        else if (edi s>= 0x1e)
                            int32_t ecx_14
                            ecx_14.b = edi s< 0x28
                            ecx_13 = (ecx_14 << 1) + 5
                        else
                            ecx_13 = 0xd
                        
                        result = *ebx
                        var_1a0[i * 2] = ecx_13
                        *(&var_19c + (i << 3)) = result
                        i += 1
                
                ecx_6 = data_ccb414
                break
            
            result += 1
        while (result s< ecx_6)
        
        edx = var_1a4
    
    edi += 1
    ebx = &ebx[1]
    
    if (edi u>= 0x32)
        break

int32_t ebx_1 = 0

while (i != 0)
    int32_t eax_5
    int32_t edx_4
    eax_5, edx_4 = sub_51e050(result, &var_1a0, &data_cc8de0, i)
    
    if (sub_50a6a0(eax_5, edx_4, eax_5, 2, 0) != 0)
        sub_58ffd0(&data_cca794, eax_5)
    
    result = 0
    
    if (i s> 0)
        do
            int32_t edx_6 = result << 3
            
            if (*(&var_19c + edx_6) == eax_5)
                int32_t __saved_ebx
                result = (&__saved_ebx)[i * 2]
                i -= 1
                int32_t ecx_16 = *(&var_19c + (i << 3))
                var_1a0[result * 2] = result
                *(&var_19c + edx_6) = ecx_16
                break
            
            result += 1
        while (result s< i)
    
    ebx_1 += 1
    
    if (ebx_1 s>= 1)
        break

CookieCheckFunction(result)
return result
