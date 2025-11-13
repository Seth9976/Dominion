// 函数: sub_700f80
// 地址: 0x700f80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result = arg2

if (result != 0)
    uint32_t ecx = zx.d(result.w)
    
    if (ecx u< *(arg1 + 0x4250))
        int32_t* esi_2 = ecx * 0x14c + *(arg1 + 0x424c)
        
        if (esi_2[0x52] == result && esi_2 != 0)
            arg2 = *esi_2
            (*__glewDeleteBuffers)(1, &arg2)
            int32_t eax_2 = esi_2[0x36]
            
            if (eax_2 != 0)
                _aligned_free(eax_2)
                esi_2[0x36] = 0
            
            int32_t ecx_1 = *(arg1 + 0x4258)
            *(arg1 + 0x4258) = zx.d(esi_2[0x52].w)
            esi_2[0x52] = ecx_1
            *(arg1 + 0x425c) -= 1
            return sub_700c30(0)

return result
