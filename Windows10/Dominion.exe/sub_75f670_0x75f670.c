// 函数: sub_75f670
// 地址: 0x75f670
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_c = arg2
int32_t var_8 = 0
sub_75ae50(arg1)
int32_t* eax = sub_761e10(arg1, arg2)
int32_t* esi_1 = &var_c

if (eax != 0)
    esi_1 = eax

int32_t i = *esi_1

while (i != 0)
    int32_t eax_1 = sub_75fa60(arg1, i)
    
    if (eax_1 != 0xffffffff)
        float xmm0_2 = arg3 + arg4
        *(*(arg1 + (eax_1 << 2) + 0x50) + 0x94) = 0
        void* eax_2 = *(arg1 + (eax_1 << 2) + 0x50)
        *(eax_2 + 0x18) = arg3
        *(eax_2 + 0x1c) = arg4
        int32_t ecx_3 = *(eax_2 + 0x48)
        
        if (ecx_3 != 4)
            if (ecx_3 != 6)
                goto label_75f6f2
            
            float xmm0_4 = xmm0_2 * 0.5f
            *(eax_2 + 0x20) = xmm0_4
            *(eax_2 + 0x24) = xmm0_4
            *(eax_2 + 0x28) = arg3
            *(eax_2 + 0x2c) = arg4
        else
            *(eax_2 + 0x20) = arg3
            *(eax_2 + 0x24) = arg4
        label_75f6f2:
            
            if (ecx_3 == 8)
                float xmm0_3 = xmm0_2 * 0.5f
                *(eax_2 + 0x20) = xmm0_3
                *(eax_2 + 0x24) = xmm0_3
                *(eax_2 + 0x28) = arg3
                *(eax_2 + 0x2c) = arg4
                *(eax_2 + 0x30) = arg3
                *(eax_2 + 0x34) = arg4
    
    i = esi_1[1]
    esi_1 = &esi_1[1]

return sub_75ec70(arg1)
