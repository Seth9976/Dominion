// 函数: sub_7116d0
// 地址: 0x7116d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* edi = *(arg2 + 8)

if (edi == 0)
    return 0xffffffff

int32_t result_1 = sub_7116d0()
*(edi + 0x34) = *(edi + 0x38)
*(edi + 0x44) = *(edi + 0x48)
float xmm0 = *(arg2 + 0x58)
int32_t result = result_1

if (not(xmm0 <= 0f))
    float xmm2 = *(arg2 + 0x5c)
    
    if (not(xmm0 < xmm2))
        float xmm0_1 = *(edi + 0x64)
        xmm0_1 f- 0
        result_1:1.b = (xmm0_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 0f) ? 1 : 0) << 2
            | (xmm0_1 < 0f ? 1 : 0)
        bool p_1 = unimplemented  {test ah, 0x44}
        bool p_3
        
        if (p_1)
            xmm2 f- 0
            result_1:1.b = (xmm2 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2, 0f) ? 1 : 0) << 2
                | (xmm2 < 0f ? 1 : 0)
            p_3 = unimplemented  {test ah, 0x44}
        
        if (not(p_1) || not(p_3))
            *(arg2 + 8) = *(edi + 8)
            void* eax_2 = *(edi + 8)
            
            if (eax_2 != 0)
                *(eax_2 + 0xc) = arg2
            
            *(arg2 + 0x60) = *(edi + 0x60)
            int32_t* esi_1 = *(arg1 + 0x24)
            sub_710f50(esi_1)
            *(esi_1[1] + (esi_1[2] << 2)) = 2
            esi_1[2] += 1
            sub_710f50(esi_1)
            *(esi_1[1] + (esi_1[2] << 2)) = edi
            void* eax_6 = *esi_1
            esi_1[2] += 1
            *(eax_6 + 0x34) = 1
        
        return result

*(edi + 0x40) = arg3 f* *(edi + 0x50) f+ *(edi + 0x40)
*(arg2 + 0x58) = arg3 f+ *(arg2 + 0x58)
return 0
