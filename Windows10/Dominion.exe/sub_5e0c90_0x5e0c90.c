// 函数: sub_5e0c90
// 地址: 0x5e0c90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char** var_10 = arg3
char* eax
int32_t edx
eax, edx = sub_5e0c10(arg2)
void* esi = &data_be3678
char const* const var_24
int32_t var_20
char const* const var_1c
char* ecx_2

while (true)
    if (*esi == eax && *(esi + 4) == edx)
        eax = *(esi + 8)
        
        if (arg4 != 0xffffffff)
            int32_t var_1c_1 = arg4
            char* var_20_1 = eax
            sub_63df30(arg3, "%s%d")
            return arg3
        
        if (eax != 0)
            sub_63d720(arg3, eax)
            return arg3
        
        var_1c = "XString::XString"
        var_20 = 0x94
        var_24 = "C:\x\ax2017\Engine\xString.cpp"
        ecx_2 = &data_871e0c
        break
    
    esi += 0x18
    
    if (esi == &data_be3ac8)
        var_1c = "DomTypeDefGet"
        var_20 = 0x4252
        var_24 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
        ecx_2 = "Halt"
        break

sub_63b870(eax, &data_801800, ecx_2, var_24, var_20, var_1c)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
