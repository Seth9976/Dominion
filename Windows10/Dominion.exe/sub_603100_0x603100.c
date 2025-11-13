// 函数: sub_603100
// 地址: 0x603100
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_c = arg3
int32_t result = 0
int32_t edx = 1
int32_t esi = 0

while (true)
    if (edx == 0 && esi == 0x2000)
        goto label_603137
    
    while (true)
        if (((edx & arg4) | (esi & arg5)) != 0)
            *(arg3 + (result << 3)) = edx
            *(arg3 + (result << 3) + 4) = esi
            result += 1
        
    label_603137:
        esi = esi << 1 | edx u>> 0xffffffe1
        edx *= 2
        
        if (esi u< 0x8000)
            break
        
        if (esi u> 0x8000)
            return result
        
        if (edx u>= 0)
            return result
