// 函数: sub_5649c0
// 地址: 0x5649c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* esi = arg1
int32_t i = 0
int32_t result = 0
void* var_c = esi
int32_t result_1 = 0
void* var_18 = nullptr
int32_t i_1 = 0

if (*(esi + 0xc80) s> 0)
    int32_t eax_1 = 0
    int32_t ebx_1 = 0
    int32_t var_2c_1 = 0
    
    do
        int16_t ecx = (*(esi + (i << 2))).w
        int32_t edi_1 = 0
        uint32_t esi_1 = 1
        
        while (true)
            if (((esi_1 & eax_1) | (edi_1 & ebx_1)) != 0)
                eax_1 = var_2c_1
                result = result_1
            else
                void* ecx_4 = *(sub_573400() + 4)
                uint32_t eax_6 = zx.d(ecx)
                
                if (eax_6 u>= 0x320)
                    sub_591930()
                
                int32_t eax_7 = eax_6 * 0x64
                result = result_1
                eax_1 = var_2c_1
                
                if (sub_5754f0(eax_7, *(eax_7 + ecx_4 + 0x1a4c), ecx_4, esi_1, edi_1) != 0)
                    eax_1 |= esi_1
                    ebx_1 |= edi_1
                    result += 1
                    var_2c_1 = eax_1
                    result_1 = result
            
            edi_1 = edi_1 << 1 | esi_1 u>> 0xffffffe1
            esi_1 *= 2
            
            if (edi_1 u>= 0x8000)
                if (edi_1 u> 0x8000)
                    break
                
                if (esi_1 u>= 0)
                    break
        
        esi = var_c
        i = i_1 + 1
        i_1 = i
    while (i s< *(esi + 0xc80))

return result
