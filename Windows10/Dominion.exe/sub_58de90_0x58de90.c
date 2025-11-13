// 函数: sub_58de90
// 地址: 0x58de90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edx = arg1
int32_t result = 0

for (int32_t i = 0; i s< 0x120; i += 0x48)
    int32_t ecx_1 = data_cce9c8
    int32_t eax_1 = *(ecx_1 + i + 0xa0)
    
    if (eax_1 == 0)
        break
    
    if (eax_1 == 1)
        if ((edx | arg2) == 0)
            result += 1
        else
            void* eax_4 = sub_571b30(*(ecx_1 + i + 0xa4), data_cce9b0)
            edx = arg1
            
            if (((edx & *(eax_4 + 0x98)) | (*(eax_4 + 0x9c) & arg2)) != 0)
                result += 1

return result
