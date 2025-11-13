// 函数: sub_4c1eb0
// 地址: 0x4c1eb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* eax = sub_69dd70(arg1, U"@.")

if (eax == 0 || eax == arg1)
label_4c1ef0:
    char result = sub_4c0160(arg1)
    
    if (result == 0)
        return result
else
    char* ecx_2 = sub_69dd70(eax, U".")
    
    if (ecx_2 == 0)
        goto label_4c1ef0
    
    char* eax_1
    
    do
        eax_1.b = *ecx_2
        ecx_2 = &ecx_2[1]
    while (eax_1.b != 0)
    
    if (ecx_2 - &ecx_2[1] u< 3)
        goto label_4c1ef0

sub_63d8d0(&data_8db800, arg1)
sub_4d46e0(7, 0)
return sub_4b8e40(arg1) __tailcall
