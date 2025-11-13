// 函数: sub_4f1780
// 地址: 0x4f1780
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t eax_2 = *(arg4 + 0x60)
int32_t var_d48
char const* const ecx

if (eax_2 == 0 || eax_2 == 1)
    if (*(arg4 + 0x5c) == 1)
        void var_d28
        uint32_t result = sub_5939a0(&var_d28, arg4)
        int32_t i = 0
        int32_t var_cbc = 1
        
        if (*(arg4 + 0x6c) s> 0)
            void* edi_1 = arg4 + 0x70
            
            do
                int32_t var_cb8_1 = *edi_1
                result = sub_4efcf0(&var_d28, arg2, arg3, &var_d28)
                i += 1
                edi_1 += 4
            while (i s< *(arg4 + 0x6c))
        
        if (*(arg4 + 0x60) == 0)
            int32_t var_cbc_1 = 0
            result = sub_4efcf0(&var_d28, arg2, arg3, &var_d28)
        
        CookieCheckFunction(result)
        return result
    
    char const* const var_d44_4 = "FillNodeType"
    var_d48 = 0xfe7
    ecx = "yld.maxChoices == 1"
else
    char const* const var_d44_1 = "FillNodeType"
    var_d48 = 0xfe6
    ecx = "yld.minChoices == 0 || yld.minChoices == 1"

sub_63b870(eax_2, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomAIMCTS.cpp", var_d48, 
    "FillNodeType")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
