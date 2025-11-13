// 函数: sub_4d8f30
// 地址: 0x4d8f30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* result_1 = data_cc8dc8
int32_t edx = 0
int32_t esi = *(result_1 + 0x1e1a0)
void* result

if (esi s<= 0)
    result = nullptr
    *(result_1 + 0x1e1a4) = *(result + 0x42b0)
else
    result = result_1
    
    while (*(result + 0x42b0) != arg1)
        edx += 1
        result += 0x7868
        
        if (edx s>= esi)
            goto label_4d8f58
    
    if (result == 0)
        if (esi s> 0)
        label_4d8f58:
            result = result_1
            *(result_1 + 0x1e1a4) = *(result + 0x42b0)
        else
            result = nullptr
            *(result_1 + 0x1e1a4) = *(result + 0x42b0)

*(result + 0x28) = 0
return result
