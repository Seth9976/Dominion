// 函数: sub_51d0e0
// 地址: 0x51d0e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t ebx = 0
int32_t eax_2 = arg2
int32_t edi = 0
int32_t var_44 = eax_2
int32_t var_58
char const* const var_54
char* ecx_5

if (arg4 s> 0)
    while (true)
        eax_2 = *(eax_2 + (edi << 2))
        
        if (*(eax_2 * 0x30 + 0x78dea0) != eax_2)
            var_54 = "FlavorThemeDefGet"
            var_58 = 0x2d49
            ecx_5 = "def.theme == theme"
            goto label_51d1d9
        
        void* edx_3 = eax_2 * 0x30 + 0x78deb8
        int32_t i_1 = 6
        int32_t var_3c[0xc]
        int32_t i
        
        do
            int32_t j = *edx_3
            int32_t eax_3 = 0
            
            if (ebx s<= 0)
            label_51d143:
                var_3c[ebx] = j
                ebx += 1
            else
                while (var_3c[eax_3] != j)
                    eax_3 += 1
                    
                    if (eax_3 s>= ebx)
                        goto label_51d143
            
            edx_3 += 4
            i = i_1
            i_1 -= 1
        while (i != 1)
        eax_2 = var_44
        edi += 1
        
        if (edi s>= arg4)
            if (ebx s<= 0)
                break
            
            int32_t esi_1 = arg3[1]
            int32_t edi_1 = *arg3
            int32_t eax_5
            int32_t edx_4
            eax_5, edx_4 = __allmul(edi_1, esi_1, 0x4c957f2d, 0x5851f42d)
            bool c = eax_5 + arg3[2] u< eax_5
            *arg3 = eax_5 + arg3[2]
            arg3[1] = adc.d(edx_4, arg3[3], c)
            uint32_t result = var_3c[modu.dp.d(
                0:(ror.d(esi_1 u>> 0xd ^ (edi_1 u>> 0x1b | esi_1 << 5), (esi_1 u>> 0x1b).b)), ebx)]
            CookieCheckFunction(result)
            return result

var_54 = "RandomDoodadFromFlavorTheme"
var_58 = 0x2df7
ecx_5 = "n > 0"
label_51d1d9:
sub_63b870(eax_2, &data_801800, ecx_5, "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 
    var_58, var_54)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
