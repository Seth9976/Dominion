// 函数: sub_67cf00
// 地址: 0x67cf00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t result = sub_64e7a0(arg1)

if (*(result + 0x15f8) != 3 || *(result + 0x1568) != 1 || *(result + 0x156a) != 1)
    int32_t edi_1 = *(result + 0x189c)
    int32_t ebx_1 = result + 0x179c
    int32_t esi_1 = 0
    
    if (edi_1 == 0)
    label_67cf63:
        result.b = 0
        return result
    
    while (true)
        *(ebx_1 + (esi_1 << 2))
        
        if (sub_67cf00().b == 1)
            break
        
        esi_1 += 1
        
        if (esi_1 == edi_1)
            goto label_67cf63
else
    int32_t var_10_1 = arg1
    sub_66cc40(arg1, 0)

result.b = 1
return result
