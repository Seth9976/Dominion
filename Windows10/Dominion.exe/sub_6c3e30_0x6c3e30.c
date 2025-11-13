// 函数: sub_6c3e30
// 地址: 0x6c3e30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_8 = arg3
int32_t edx = arg3[2]
int32_t edi = *arg3
int32_t eax = arg2[1]

if (edi s<= *arg2)
    edi = *arg2

bool cond:1 = edx s>= arg2[2]
*arg4 = edi

if (cond:1)
    edx = arg2[2]

bool cond:2 = arg3[1] s<= eax
arg4[2] = edx
int32_t ebx_1 = arg3[1]

if (cond:2)
    ebx_1 = eax

int128_t* result = arg4
int32_t* ecx_1 = arg2[3]
int32_t* esi_1 = arg3[3]
*(result + 4) = ebx_1

if (esi_1 s>= ecx_1)
    esi_1 = ecx_1

*(result + 0xc) = esi_1

if (edi s> edx || ebx_1 s> esi_1)
    *result = data_8003e8

return result
