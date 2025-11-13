// 函数: sub_5cb840
// 地址: 0x5cb840
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edi = *(arg3 + 0x17c0)
int32_t var_9c

if (arg6 != 0)
    int128_t* result = arg5
    var_9c = 1
    int128_t var_94 = *result
    int128_t var_84 = result[1]
    int128_t var_74 = result[2]
    int128_t var_64 = result[3]
    int128_t var_54 = result[4]
    int128_t var_44 = result[5]
    
    if (edi != 0)
        result = sub_633aa0(arg3 + 0x250, 1)
    
    *(arg3 + 0x17c0) = 0
    __builtin_memcpy(arg3 + 8, &var_9c, 0x88)
    __builtin_memcpy(arg3 + 0x90, &var_9c, 0x88)
    __builtin_memcpy(arg3 + 0x118, &var_9c, 0x88)
    return result

int32_t esi = 0

if (edi s> 0)
    void* ecx_1 = arg3 + 0x1c0
    void* edx = arg3 + 0x270
    void* var_c_1 = ecx_1
    arg6.d = edx
    void* ebx_2 = arg3 + 0x248
    int32_t eax_1
    
    do
        eax_1 = edi
        
        if (*ebx_2 == 0xa)
            memmove(ecx_1, edx, (edi - esi) * 0xb0 - 0xb0)
            esi -= 1
            ebx_2 -= 0xb0
            edx = arg6.d - 0xb0
            *(arg3 + 0x17c0) -= 1
            ecx_1 = var_c_1 - 0xb0
            eax_1 = *(arg3 + 0x17c0)
        
        esi += 1
        edx += 0xb0
        ecx_1 += 0xb0
        arg6.d = edx
        ebx_2 += 0xb0
        var_c_1 = ecx_1
        edi = eax_1
    while (esi s< eax_1)

var_9c = 1
int32_t var_140_2 = 6
int128_t var_94_1 = *arg5
int128_t var_84_1 = arg5[1]
int128_t var_74_1 = arg5[2]
int128_t var_64_1 = arg5[3]
int128_t var_54_1 = arg5[4]
int32_t var_124[0x22]
int32_t* var_144 = &var_124
int128_t var_44_1 = arg5[5]
__builtin_memcpy(&var_124, &var_9c, 0x88)
return sub_6371b0(arg3, var_144, var_140_2, arg2, arg4)
