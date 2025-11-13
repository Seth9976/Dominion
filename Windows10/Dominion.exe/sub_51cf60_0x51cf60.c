// 函数: sub_51cf60
// 地址: 0x51cf60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t* eax_2 = arg6
int32_t* var_2c = eax_2
int32_t var_4c
char const* const var_48
char* ecx

if (arg4 s< 1)
    var_48 = "RollTerrainElements"
    var_4c = 0x2db1
    ecx = "numThemes >= 1"
else if (arg4 s<= 2)
    eax_2 = *arg2
    int32_t var_24 = 0xc
    
    if (*(eax_2 * 0x30 + 0x78dea0) == eax_2)
        int32_t eax_3 = *(eax_2 * 0x30 + 0x78dea8)
        *arg5 = eax_3
        int32_t edx
        edx.b = eax_3 != 3
        arg5[1] = (edx << 1) + 1
        
        if (eax_3 == 2 || eax_3 == 5)
            *arg5 = (edx << 1) + 1
            arg5[1] = eax_3
        
        *var_2c = *(eax_2 * 0x30 + 0x78deac)
        int32_t var_20_1 = *(eax_2 * 0x30 + 0x78deb0)
        int32_t var_1c_1 = *(eax_2 * 0x30 + 0x78deb4)
        uint32_t result_1
        int32_t eax_10
        int32_t ecx_7
        int32_t esi_1
        int32_t edi_1
        
        if (arg4 s< 2)
            esi_1 = 3
            edi_1 = 1
            eax_10 = 3
            result_1 = 1
            ecx_7 = 3
        label_51d072:
            int32_t ebx_1 = 0
            sub_63eda0(eax_10, &var_24, arg3, eax_10, ecx_7)
            uint32_t result = result_1
            __builtin_memcpy(&var_2c[edi_1], &var_24, esi_1 << 2)
            
            do
                ebx_1 += 1
                result += 1
            while (ebx_1 s< esi_1)
            
            CookieCheckFunction(result)
            return result
        
        eax_2 = arg2[1]
        
        if (*(eax_2 * 0x30 + 0x78dea0) == eax_2)
            esi_1 = 4
            var_2c[1] = *(eax_2 * 0x30 + 0x78deac)
            int32_t var_18_1 = *(eax_2 * 0x30 + 0x78deb0)
            ecx_7 = 4
            int32_t var_14_1 = *(eax_2 * 0x30 + 0x78deb4)
            eax_10 = 5
            result_1 = 2
            edi_1 = 2
            goto label_51d072
    
    var_48 = "FlavorThemeDefGet"
    ecx = "def.theme == theme"
    var_4c = 0x2d49
else
    var_48 = "RollTerrainElements"
    var_4c = 0x2db2
    ecx = "numThemes <= 2"

sub_63b870(eax_2, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 
    var_4c, var_48)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
