// 函数: sub_5f1d60
// 地址: 0x5f1d60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax_1 = sub_571b30(arg1, sub_5cf7e0())
void* eax_3 = sub_571b30(arg2, sub_5cf7e0())
int32_t edx_2 = *(eax_1 + 0x98)
int32_t ebx

if ((edx_2 & 4) == 0)
    ebx.b = 0
else
    ebx.b = 1

int32_t ecx_5 = *(eax_3 + 0x98)
int32_t result

if ((ecx_5 & 4) == 0)
    result.b = 0
else
    result.b = 1

if (ebx.b == 0)
    if (result.b != 0)
        result.b = 0
        return result
    
    if ((edx_2 & 2) == 0)
        ebx.b = 0
    else
        ebx.b = 1
    
    if ((ecx_5 & 2) == 0)
        result.b = 0
    else
        result.b = 1
    
    if (ebx.b != 0)
        goto label_5f1dbe
    
    if (result.b != 0)
        result.b = 0
        return result
    
    int32_t edx_4
    
    if ((edx_2 & 0x40000) == 0)
        edx_4.b = 0
    else
        edx_4.b = 1
    
    if ((ecx_5 & 0x40000) == 0)
        result.b = 0
    else
        result.b = 1
    
    if (edx_4.b == 0)
        if (result.b == 0)
            return sub_58d5a0(arg1, arg2)
        
        result.b = 0
        return result
    
    if (result.b != 0)
        return sub_58d5a0(arg1, arg2)
else
label_5f1dbe:
    
    if (result.b != 0)
        return sub_58d5a0(arg1, arg2)

result.b = 1
return result
