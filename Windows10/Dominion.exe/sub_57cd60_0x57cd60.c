// 函数: sub_57cd60
// 地址: 0x57cd60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx = arg6
int32_t ebx = 0
void* result = *(ecx * 0x64 + arg2 + 0x1a48)
void* result_1 = result
int32_t i = *(result + 0xa8)

if (i != 0)
    void* result_2 = result
    
    do
        if (i == 6 && *(result + 0xac) == i && *(result + 0xb4) == arg5)
            uint32_t eax_1 = sub_575de0(result, ebx, ecx, ecx)
            ecx = arg6
            result_2 = result_1
            
            if (sub_57c810(eax_1, arg4, arg2, eax_1, arg6, arg7, 0xffffffff, arg8) != 0)
                *(arg3 + (*(arg3 + 0x400) << 2)) = eax_1
                *(arg3 + 0x400) += 1
        
        ebx += 1
        result = ebx * 0xb4 + result_2
        i = *(result + 0xa8)
    while (i != 0)

return result
