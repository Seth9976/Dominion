// 函数: sub_66f130
// 地址: 0x66f130
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_14 = arg2
void* result = *(arg3 + 0x1600)

if (result == data_c27c20)
    int32_t ecx = arg5
    
    if (ecx == 1)
    label_66f1aa:
        result = *(arg3 + 0x189c)
        int32_t esi_1 = 0
        void* result_1 = result
        
        if (result != 0)
            int32_t ebx_1 = 2
            
            if (ecx != 2)
                ebx_1 = 0
            
            do
                sub_64e7a0(*(arg3 + (esi_1 << 2) + 0x179c))
                result = sub_66f130(arg4.d, ebx_1)
                esi_1 += 1
            while (esi_1 != result_1)
    else
        void* eax = sub_667ae0(arg3, arg2)
        int32_t* ecx_2
        int32_t edx
        
        if (arg4 == 0)
            int32_t* var_10
            var_10.q = 0
            int32_t var_c
            edx = var_c
            ecx_2 = var_10
        else
            ecx_2 = 1
            edx = 0
        
        sub_6dcc50(eax, eax, &data_8cae70, arg2, ecx_2, edx)
        sub_65bf00(arg3)
        result = sub_66ba20(arg3)
        ecx = arg5
        
        if (ecx != 0)
            goto label_66f1aa

return result
