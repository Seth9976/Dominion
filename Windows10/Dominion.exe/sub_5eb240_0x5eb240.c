// 函数: sub_5eb240
// 地址: 0x5eb240
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char** var_c = arg1
uint32_t eax = sub_4c89a0()
int32_t ebx = arg2 * 3
uint32_t var_8 = eax
char const* const var_28
int32_t var_24
char const* const var_20
char* ecx

if (*((ebx << 2) + &data_7feaf8) == arg2)
    eax = sub_68c730((&data_7feafc)[ebx], eax, arg2)
    int32_t* edx_1 = eax
    
    if (edx_1 != 0)
        eax.b = *((ebx << 2) + &data_7feb00)
        eax.b &= 1
        uint32_t var_20_1 = zx.d(eax.b)
        eax = sub_693050(var_8, edx_1)
        
        if (eax != 0)
            sub_63d720(arg1, eax)
            return arg1
        
        var_20 = "XString::XString"
        var_24 = 0x94
        var_28 = "C:\x\ax2017\Engine\xString.cpp"
        ecx = &data_871e0c
    else
        var_20 = "GetKingdomViewLabelStr"
        var_24 = 0x6249
        var_28 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
        ecx = &data_8248d4
else
    var_20 = "GetKingdomViewLabelStr"
    var_24 = 0x6247
    var_28 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
    ecx = "def.category == category"

sub_63b870(eax, &data_801800, ecx, var_28, var_24, var_20)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
