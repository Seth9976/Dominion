// 函数: sub_50d7b0
// 地址: 0x50d7b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
void* result = sub_573400()
void* edi = 7
void* result_1 = result

for (int32_t i = 0x70; i s< 0x480; )
    int32_t ebx_1 = *(result + 4)
    
    if (edi s>= 0x48)
        sub_591930()
        result = result_1
    
    int32_t edx_1 = *(i + ebx_1 + 0x1524)
    
    if (edx_1 != 0 && sub_5754f0(result, edx_1, *(result + 4), 2, 0) != 0)
        void* eax_1 = sub_573400()
        int32_t var_1c_1 = 0
        int32_t var_20_1 = 0xffffffff
        int32_t var_24_1 = 0
        sub_571fa0(eax_1, 0xffffffff, *(eax_1 + 4), 0x601, 8, edi, nullptr)
    
    result = result_1
    i += 0x10
    edi += 1

return result
