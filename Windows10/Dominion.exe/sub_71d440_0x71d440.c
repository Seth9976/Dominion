// 函数: sub_71d440
// 地址: 0x71d440
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = *(arg1 + 0x1c)
int32_t edx = *(arg1 + 0xb0)
void* eax_1 = *(arg1 + 0x40)
void* eax_2 = *(arg1 + 0x44)
void* eax_3 = *(arg1 + 0x14)
int32_t eax_4 = *(arg1 + 0x10)
uint32_t edi_1 = *(arg1 + 0xa0) u>> 2
void* result = *(arg1 + 0x60) + (*(arg1 + 0x4c) << 1)
int32_t ecx_1 = *(arg1 + 0xb4)
void* result_1 = result

if (edx s>= 0)
    int32_t ecx_2 = *(arg1 + 0xa8)
    
    if (arg2 s> ecx_2)
        while (true)
            if (ecx_2 s>= 0 && ecx_2 s< *(arg1 + 0x18))
                void* eax_7 = ecx_1 + ((edx * edi_1) << 2)
                result = sub_71bc80(eax_7, eax_3, arg1, arg1, edi_1, ecx_2 * eax + eax_4, eax_7, 
                    eax_1, eax_2, result)
            
            int32_t ecx_6 = *(arg1 + 0xa8)
            
            if (ecx_6 == *(arg1 + 0xac))
                *(arg1 + 0xb0) = 0xffffffff
                *(arg1 + 0xa8) = 0
                *(arg1 + 0xac) = 0
                break
            
            ecx_2 = ecx_6 + 1
            int32_t eax_9 = *(arg1 + 0xb0) + 1
            *(arg1 + 0xa8) = ecx_2
            edx = mods.dp.d(sx.q(eax_9), *(arg1 + 0xa4))
            result = result_1
            *(arg1 + 0xb0) = edx
            
            if (arg2 s<= ecx_2)
                return result

return result
