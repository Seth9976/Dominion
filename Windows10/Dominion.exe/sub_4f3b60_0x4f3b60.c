// 函数: sub_4f3b60
// 地址: 0x4f3b60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx = 0
int32_t edi = arg1[2]
int32_t* result

if (edi s> 0)
    result = *arg1
    
    do
        if (*result == arg2)
            return result
        
        ecx += 1
        result = &result[1]
    while (ecx s< edi)

int32_t ecx_1 = arg1[1]

if (ecx_1 == 0)
    int32_t var_20_1 = 0x10
    arg1[1] = 4
    *arg1 = sub_7597a2()
    int32_t eax_2 = arg1[1]
    int32_t eax_3 = eax_2 * 4
    
    if (mulu.dp.d(eax_2, 4) u>> 0x20 != 0)
        eax_3 = 0xffffffff
    
    int32_t var_24_1 = eax_3
    arg1[0xd] = sub_7597a2()
else if (edi == ecx_1)
    int32_t eax_5 = arg1[0xd]
    int32_t ebx_1 = *arg1
    int32_t eax_6 = ecx_1 * 2
    arg1[1] = eax_6
    int32_t eax_7 = eax_6 * 4
    
    if (mulu.dp.d(eax_6, 4) u>> 0x20 != 0)
        eax_7 = 0xffffffff
    
    int32_t var_20_2 = eax_7
    *arg1 = sub_7597a2()
    int32_t eax_9 = arg1[1]
    int32_t eax_10 = eax_9 * 4
    
    if (mulu.dp.d(eax_9, 4) u>> 0x20 != 0)
        eax_10 = 0xffffffff
    
    int32_t var_24_2 = eax_10
    int32_t eax_11 = sub_7597a2()
    int32_t count = ecx_1 << 2
    int32_t var_30_1 = *arg1
    arg1[0xd] = eax_11
    memcpy(var_30_1, ebx_1, count)
    memcpy(arg1[0xd], eax_5, count)
    sub_7597b9(ebx_1)
    sub_7597b9(eax_5)

*(arg1[0xd] + (arg1[2] << 2)) = 0
result = *arg1
result[arg1[2]] = arg2
arg1[2] += 1
return result
