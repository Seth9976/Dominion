// 函数: sub_58df00
// 地址: 0x58df00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result = 0
int32_t i = 0

if (data_cce9b8 s> 0)
    int32_t ebx_1 = 0
    
    do
        void* eax_2 = sub_571b30(*(ebx_1 + data_cce9c4 + 0x28), data_cce9b0)
        int32_t ecx_4
        
        if (((arg1 & *(eax_2 + 0x98)) | (*(eax_2 + 0x9c) & arg2)) == 0)
            ecx_4.b = 0
        else
            ecx_4.b = 1
        
        int32_t result_1 = result + 1
        
        if (ecx_4.b == 0)
            result_1 = result
        
        i += 1
        ebx_1 += 0x3c
        result = result_1
    while (i s< data_cce9b8)

return result
