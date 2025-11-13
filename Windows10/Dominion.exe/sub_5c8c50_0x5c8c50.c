// 函数: sub_5c8c50
// 地址: 0x5c8c50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg2 s>= arg4)
    return 

int32_t* ecx = *arg3[1]
int32_t* eax_1 = *arg3
int32_t* var_10_1 = ecx

do
    int32_t ebx_1 = arg2 << 2
    int32_t edi_1 = ecx[2]
    int32_t* eax_3 = *ecx + ebx_1
    float xmm1_1 = *eax_3
    float var_8 = xmm1_1
    
    if (edi_1 s> 1)
        int32_t esi_2 = ecx[1] << 2
        int32_t i_1 = edi_1 - 1
        void* ecx_1 = &eax_3[ecx[1]]
        int32_t i
        
        do
            float xmm0_1 = *ecx_1
            float var_c
            int32_t* eax_4 = &var_c
            var_c = xmm0_1
            
            if (xmm0_1 <= xmm1_1)
                eax_4 = &var_8
            
            ecx_1 += esi_2
            xmm1_1 = *eax_4
            var_8 = xmm1_1
            i = i_1
            i_1 -= 1
        while (i != 1)
        ecx = var_10_1
        ebx_1 = arg2 << 2
    
    arg2 += 1
    *(ebx_1 + *eax_1) = xmm1_1
while (arg2 s< arg4)
