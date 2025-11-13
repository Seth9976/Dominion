// 函数: sub_7129a0
// 地址: 0x7129a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void** var_8 = arg3
int32_t edi = 1
int32_t* eax
int32_t edx
eax, edx = sub_712a90(arg3, 0)
int32_t* esi = eax

if (esi != 0)
    float xmm0_1 = esi[0x12]
    xmm0_1 - -1f
    eax:1.b = (xmm0_1 == -1f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, -1f) ? 1 : 0) << 2
        | (xmm0_1 < -1f ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (p_2)
        eax, edx = sub_712cb0(arg3, esi)
    else
        *arg3[2] = esi[2]
        void* esi_1 = arg3[9]
        sub_710f50(esi_1)
        *(*(esi_1 + 4) + (*(esi_1 + 8) << 2)) = 1
        *(esi_1 + 8) += 1
        sub_710f50(esi_1)
        *(*(esi_1 + 4) + (*(esi_1 + 8) << 2)) = esi
        *(esi_1 + 8) += 1
        int32_t* esi_2 = arg3[9]
        sub_710f50(esi_2)
        *(esi_2[1] + (esi_2[2] << 2)) = 2
        esi_2[2] += 1
        sub_710f50(esi_2)
        *(esi_2[1] + (esi_2[2] << 2)) = esi
        void* eax_6 = *esi_2
        esi_2[2] += 1
        *(eax_6 + 0x34) = 1
        eax, edx = sub_712cb0(arg3, esi)
        esi = esi[2]
        edi = 0

int32_t* result = sub_712b20(eax, edx, arg3, arg4, arg5, esi)
sub_7128b0(result, 0, arg3, result, edi)
sub_710fd0(arg3[9])
return result
