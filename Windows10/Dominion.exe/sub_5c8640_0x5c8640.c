// 函数: sub_5c8640
// 地址: 0x5c8640
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_14 = arg2

if (arg2 s>= arg4)
    return 

int32_t* eax = *arg3
int32_t* ebx_1 = arg3[1]
int32_t* var_8_1 = ebx_1

do
    int32_t* ecx = *ebx_1
    int32_t* edi_1 = *ecx + (arg2 << 2)
    int32_t edx = ecx[2]
    int32_t xmm0_1
    
    if (edx != 0)
        int32_t ebx_2 = ecx[1]
        void* ecx_1 = 1
        xmm0_1 = *edi_1
        
        if (edx s<= 1)
            ebx_1 = var_8_1
        else if (edx - 1 s< 4)
        label_5c8710:
            
            do
                int32_t eax_7 = ebx_2 * ecx_1
                ecx_1 += 1
                xmm0_1 = xmm0_1 f+ edi_1[eax_7]
            while (ecx_1 s< edx)
            
            ebx_1 = var_8_1
        else
            float* esi_1 = &edi_1[ebx_2]
            float* eax_4 = &edi_1[ebx_2 * 3]
            float* ebx_3 = &edi_1[ebx_2 * 2]
            float* edi_4 = &edi_1[ebx_2 * 4]
            int32_t i_2 = ((*(*var_8_1 + 8) - 5) u>> 2) + 1
            int32_t i_1 = i_2
            ecx_1 = (i_2 << 2) + 1
            int32_t i
            
            do
                float xmm0_2 = xmm0_1 f+ *esi_1
                esi_1 = &esi_1[ebx_2 * 4]
                float xmm0_3 = xmm0_2 + *ebx_3
                ebx_3 = &ebx_3[ebx_2 * 4]
                float xmm0_4 = xmm0_3 + *eax_4
                eax_4 = &eax_4[ebx_2 * 4]
                xmm0_1 = xmm0_4 + *edi_4
                edi_4 = &edi_4[ebx_2 * 4]
                i = i_1
                i_1 -= 1
            while (i != 1)
            ebx_1 = var_8_1
            edx = *(*ebx_1 + 8)
            
            if (ecx_1 s< edx)
                goto label_5c8710
    else
        xmm0_1 = (zx.o(0)).d
    
    *(*eax + (var_14 << 2)) = xmm0_1
    arg2 = var_14 + 1
    var_14 = arg2
while (arg2 s< arg4)
