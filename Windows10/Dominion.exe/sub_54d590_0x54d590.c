// 函数: sub_54d590
// 地址: 0x54d590
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* edi = sub_577bb0(*(sub_573400() + 4) + 0xd4c, arg1)
int32_t esi_1 = 0
void* result

while (true)
    int32_t ecx_2 = *(edi + (esi_1 << 2))
    
    if (ecx_2 != 0)
        if (sub_563590(ecx_2) != 0)
            break
        
        esi_1 += 1
        
        if (esi_1 s< 0xe)
            continue
    
    result.b = 0
    return result

result.b = 1
return result
