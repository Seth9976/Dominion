// 函数: sub_5e0d50
// 地址: 0x5e0d50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
int32_t ecx_1 = 0
int32_t edi = *arg1
int32_t ebx = arg1[1]

while (*((ecx_1 << 3) + &data_86ee48) != edi || *((ecx_1 << 3) + &data_86ee4c) != ebx)
    ecx_1 += 1
    
    if (ecx_1 s>= 9)
        ecx_1 = 0xffffffff
        break

int32_t edx = 0
int32_t esi = *arg2
int32_t result = arg2[1]

while (*((edx << 3) + &data_86ee48) != esi || *((edx << 3) + &data_86ee4c) != result)
    edx += 1
    
    if (edx s>= 9)
        edx = 0xffffffff
        break

if (ecx_1 == 0xffffffff)
    if (edx != ecx_1 || ebx u> result)
        result.b = 0
        return result
    
    if (ebx u>= result && edi u>= esi)
        result.b = 0
        return result
else if (edx != 0xffffffff)
    result.b = ecx_1 s< edx
    return result

result.b = 1
return result
