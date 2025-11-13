// 函数: sub_7128b0
// 地址: 0x7128b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_8 = arg3
void* eax = sub_712a90(arg3, arg2)
void* ecx = arg4
*(*(arg3 + 8) + (arg2 << 2)) = ecx

if (eax != 0)
    if (arg5 != 0)
        void* esi_1 = *(arg3 + 0x24)
        sub_710f50(esi_1)
        *(*(esi_1 + 4) + (*(esi_1 + 8) << 2)) = 1
        *(esi_1 + 8) += 1
        sub_710f50(esi_1)
        *(*(esi_1 + 4) + (*(esi_1 + 8) << 2)) = eax
        *(esi_1 + 8) += 1
        ecx = arg4
    
    *(ecx + 8) = eax
    *(eax + 0xc) = ecx
    *(ecx + 0x58) = 0
    
    if (*(eax + 8) != 0)
        float xmm1_1 = *(eax + 0x5c)
        
        if (not(xmm1_1 f<= 0))
            *(ecx + 0x60) = _mm_min_ss(0x3f800000, *(eax + 0x58) / xmm1_1) f* *(ecx + 0x60)
    
    *(eax + 0x78) = 0

int32_t* esi_2 = *(arg3 + 0x24)
sub_710f50(esi_2)
*(esi_2[1] + (esi_2[2] << 2)) = 0
esi_2[2] += 1
sub_710f50(esi_2)
*(esi_2[1] + (esi_2[2] << 2)) = arg4
void* result = *esi_2
esi_2[2] += 1
*(result + 0x34) = 1
return result
