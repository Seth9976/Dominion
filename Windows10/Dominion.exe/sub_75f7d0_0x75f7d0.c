// 函数: sub_75f7d0
// 地址: 0x75f7d0
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
            void* eax_2 = *(arg1 + (eax_1 << 2) + 0x50)
            
            if (ebx.b == 0)
                *(eax_2 + 0x10) &= 0xfffffffd
            else
                *(eax_2 + 0x10) |= 2
        
        i = esi_1[1]
        esi_1 = &esi_1[1]
    while (i != 0)

return sub_75ec70(arg1)
