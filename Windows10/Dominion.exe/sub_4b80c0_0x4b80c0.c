// 函数: sub_4b80c0
// 地址: 0x4b80c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t result = data_19e2788
int32_t* edi = data_147abf0
int32_t ecx_3

if (result == 0)
    ecx_3 = 0
else
    uint32_t ecx = zx.d(result.w)
    
    if (ecx u>= edi[1])
        ecx_3 = 0
    else
        void* ecx_2 = ecx * 0x64 + *edi
        
        if (*(ecx_2 + 0x60) != result || ecx_2 == 0)
            ecx_3 = 0
        else
            ecx_3 = *(ecx_2 + 4)

int32_t xmm1_1

if (ecx_3 == arg1)
    result = 0
    uint32_t result_1 = *edi
    int32_t ecx_8 = edi[1] * 0x64 + result_1
    
    while (true)
        if (result != 0)
            result += 0x64
        else
            result = result_1
        
        if (result u>= ecx_8)
        label_4b8174:
            xmm1_1 = 0x3e4ccccd
            break
        
        while ((*(result + 0x60) & 0xffff0000) == 0)
            result += 0x64
            
            if (result u>= ecx_8)
                goto label_4b8174
        
        if (*(result + 0x5a) != 0)
            if (*result == arg1)
                goto label_4b818e
            
            if (*(result + 4) == arg1)
                goto label_4b818e
    
    goto label_4b817e

if (result != 0)
    uint32_t ecx_4 = zx.d(result.w)
    
    if (ecx_4 u< edi[1])
        void* ecx_6 = ecx_4 * 0x64 + *edi
        
        if (*(ecx_6 + 0x60) == result && ecx_6 != 0)
            *(ecx_6 + 0x2c) = *(data_147abe8 + 0x28)
            result = *(ecx_6 + 0x3c)
            *(ecx_6 + 0x30) = 0x40000000
            *(ecx_6 + 0x34) = result
            *(ecx_6 + 0x38) = 0
            *(ecx_6 + 0x28) = 1

if (arg1 != 0)
    xmm1_1 = 0x41200000
label_4b817e:
    result = sub_688930(xmm1_1)
    edi = data_147abf0
    data_19e2788 = result

label_4b818e:
int32_t edx = data_19e2784

if (edx != 0)
    result = zx.d(edx.w)
    
    if (result u< edi[1])
        result = result * 0x64 + *edi
        
        if (*(result + 0x60) == edx && result != 0 && *(result + 4) != 0 && edx != 0)
            result = zx.d(edx.w)
            void* ecx_11 = result * 0x64 + *edi
            
            if (*(ecx_11 + 0x60) == edx)
                *(ecx_11 + 0x2c) = *(data_147abe8 + 0x28)
                result = *(ecx_11 + 0x3c)
                *(ecx_11 + 0x30) = 0x3e99999a
                *(ecx_11 + 0x34) = result
                *(ecx_11 + 0x38) = 0
                *(ecx_11 + 0x28) = 1

return result
