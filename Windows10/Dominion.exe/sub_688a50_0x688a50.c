// 函数: sub_688a50
// 地址: 0x688a50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_4 = arg1
void* esi = nullptr
int32_t result

while (true)
    int32_t* edx_1 = data_147abf0
    
    if (esi != 0)
        esi += 0x64
    else
        esi = *edx_1
    
    result = edx_1[1] * 0x64 + *edx_1
    
    if (esi u>= result)
        break
    
    while ((*(esi + 0x60) & 0xffff0000) == 0)
        esi += 0x64
        
        if (esi u>= result)
            return result
    
    if (*esi != arg1 && *(esi + 4) != arg1)
        continue
    
    (*(*data_147abec + 0x28))(esi)
    *(esi + 0x5a) = 0
    sub_688260(esi)

return result
