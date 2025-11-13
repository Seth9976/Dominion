// 函数: sub_75f760
// 地址: 0x75f760
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_c = arg2
int32_t var_8 = 0
sub_75ae50(arg1)
int32_t* eax = sub_761e10(arg1, arg2)
int32_t* esi_1 = &var_c

if (eax != 0)
    esi_1 = eax

int32_t i = *esi_1

if (i != 0)
    int32_t ebx
    ebx.b = arg3
    
    do
        int32_t eax_1 = sub_75fa60(arg1, i)
        
        if (eax_1 != 0xffffffff)
            sub_760af0(arg1, eax_1, zx.d(ebx.b))
        
        i = esi_1[1]
        esi_1 = &esi_1[1]
    while (i != 0)

return sub_75ec70(arg1)
