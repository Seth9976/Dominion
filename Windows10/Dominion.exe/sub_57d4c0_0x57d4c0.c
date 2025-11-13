// 函数: sub_57d4c0
// 地址: 0x57d4c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* esi = arg2
void* var_8 = esi
int32_t eax_1 = *sub_5722c0(arg1, 0x3e9, esi, arg4)
int32_t edi_2

if (eax_1 != 0)
    uint32_t edi_1 = zx.d(eax_1.w)
    
    if (edi_1 u>= 0x320)
        sub_591930()
    
    edi_2 = *(edi_1 * 0x64 + esi + 0x1aa4)
    goto label_57d512

while (true)
    edi_2 = 0
label_57d512:
    
    if (eax_1 == 0)
        int32_t result = *sub_5722c0(eax_1, 0x451, esi, arg4)
        int32_t result_1
        
        if (result != 0)
            uint32_t edi_3 = zx.d(result.w)
            
            if (edi_3 u>= 0x320)
                sub_591930()
            
            result_1 = *(edi_3 * 0x64 + esi + 0x1aa4)
            goto label_57d5c0
        
        while (true)
            result_1 = 0
        label_57d5c0:
            
            if (result == 0)
                return result
            
            uint32_t eax_9 = sub_57d450(result, result, esi, arg5, arg6)
            
            if (sub_57c810(eax_9, arg4, var_8, eax_9, arg6, 0, 0xffffffff, 0) != 0)
                *(arg3 + (*(arg3 + 0x400) << 2)) = eax_9
                *(arg3 + 0x400) += 1
            
            result = result_1
            
            if (result_1 != 0)
                break
            
            esi = var_8
        
        uint32_t esi_4 = zx.d(result_1.w)
        
        if (esi_4 u>= 0x320)
            sub_591930()
        
        esi = var_8
        result_1 = *(esi_4 * 0x64 + esi + 0x1aa4)
        goto label_57d5c0
    
    uint32_t eax_3 = sub_57d450(eax_1, eax_1, esi, arg5, arg6)
    
    if (sub_57c810(eax_3, arg4, var_8, eax_3, arg6, 0, 0xffffffff, 0) != 0)
        *(arg3 + (*(arg3 + 0x400) << 2)) = eax_3
        *(arg3 + 0x400) += 1
    
    eax_1 = edi_2
    
    if (edi_2 != 0)
        break
    
    esi = var_8

uint32_t esi_2 = zx.d(edi_2.w)

if (esi_2 u>= 0x320)
    sub_591930()

esi = var_8
edi_2 = *(esi_2 * 0x64 + esi + 0x1aa4)
goto label_57d512
