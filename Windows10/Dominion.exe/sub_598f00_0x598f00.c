// 函数: sub_598f00
// 地址: 0x598f00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = arg4
int32_t* edi_2 = (eax << 5) + 0x7c0170
int32_t* var_8 = arg3
char const* const var_24
int32_t var_20
char const* const var_1c
char* ecx

if (*edi_2 == eax)
    eax = sub_68c730(edi_2[1], arg2, arg3)
    
    if (eax != 0)
        char* eax_1 = *eax
        *arg3 = eax_1
        
        if (eax_1 == 0 || *eax_1 == 0)
            return arg3
        
        char* eax_2 = sub_63d4e0(arg3)
        *(eax_2 + 4) += 1
        return arg3
    
    char* edx = edi_2[6]
    
    if (edx != 0)
        sub_63d720(arg3, edx)
        return arg3
    
    var_1c = "XString::XString"
    var_20 = 0x94
    var_24 = "C:\x\ax2017\Engine\xString.cpp"
    ecx = &data_871e0c
else
    var_1c = "GetLocString"
    var_20 = 0x46e
    var_24 = "C:\x\ax2017\Jams\Dominion\code\DomLog.cpp"
    ecx = "entry.loc == loc"

sub_63b870(eax, &data_801800, ecx, var_24, var_20, var_1c)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
