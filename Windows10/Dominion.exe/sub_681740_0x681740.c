// 函数: sub_681740
// 地址: 0x681740
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_8 = arg3
int32_t* ebx = arg3
void* edx = *ebx
char* esi = *(edx + 8)
char* eax_1 = *(*arg2 + 8)
int32_t eax_3

while (true)
    arg3.b = *eax_1
    char temp0_1 = *esi
    bool c_1 = arg3.b u< temp0_1
    
    if (arg3.b == temp0_1)
        if (arg3.b == 0)
            eax_3 = 0
            break
        
        arg3.b = eax_1[1]
        char temp2_1 = esi[1]
        c_1 = arg3.b u< temp2_1
        
        if (arg3.b == temp2_1)
            eax_1 = &eax_1[2]
            esi = &esi[2]
            
            if (arg3.b != 0)
                continue
            
            eax_3 = 0
            break
    
    eax_3 = sbb.d(eax_1, eax_1, c_1) | 1
    break

if (eax_3 s< 0)
label_681793:
    int32_t ecx = arg2[6]
    int128_t xmm1_1 = *arg2
    int64_t xmm2_1 = *(arg2 + 0x10)
    *arg2 = *ebx
    *(arg2 + 0x10) = *(ebx + 0x10)
    arg2[6] = ebx[6]
    *ebx = xmm1_1
    *(ebx + 0x10) = xmm2_1
    ebx[6] = ecx
else if (eax_3 s<= 0)
    int32_t eax_4 = arg2[1]
    int32_t temp3_1 = ebx[1]
    
    if (eax_4 s< temp3_1 || (eax_4 s<= temp3_1 && *arg2 u< edx))
        goto label_681793

void** result_1 = *arg4
char* ecx_2 = *(*arg2 + 8)
void* eax_7 = result_1[2]
void** result

while (true)
    edx.b = *eax_7
    char temp4_1 = *ecx_2
    bool c_2 = edx.b u< temp4_1
    
    if (edx.b == temp4_1)
        if (edx.b == 0)
            result = nullptr
            break
        
        edx.b = *(eax_7 + 1)
        char temp6_1 = ecx_2[1]
        c_2 = edx.b u< temp6_1
        
        if (edx.b == temp6_1)
            eax_7 += 2
            ecx_2 = &ecx_2[2]
            
            if (edx.b != 0)
                continue
            
            result = nullptr
            break
    
    result = sbb.d(eax_7, eax_7, c_2) | 1
    break

if (result s< 0)
label_681820:
    void** result_2 = arg4[6]
    int128_t xmm1_2 = *arg4
    int64_t xmm2_2 = *(arg4 + 0x10)
    *arg4 = *arg2
    *(arg4 + 0x10) = *(arg2 + 0x10)
    arg4[6] = arg2[6]
    *arg2 = xmm1_2
    *(arg2 + 0x10) = xmm2_2
    arg2[6] = result_2
    char* ecx_4 = *(*ebx + 8)
    void* eax_12 = *(*arg2 + 8)
    
    while (true)
        void* edx_1
        edx_1.b = *eax_12
        char temp7_1 = *ecx_4
        bool c_3 = edx_1.b u< temp7_1
        
        if (edx_1.b == temp7_1)
            if (edx_1.b == 0)
                result = nullptr
                break
            
            edx_1.b = *(eax_12 + 1)
            char temp10_1 = ecx_4[1]
            c_3 = edx_1.b u< temp10_1
            
            if (edx_1.b == temp10_1)
                eax_12 += 2
                ecx_4 = &ecx_4[2]
                
                if (edx_1.b != 0)
                    continue
                
                result = nullptr
                break
        
        result = sbb.d(eax_12, eax_12, c_3) | 1
        break
    
    if (result s< 0)
    label_681893:
        *arg2 = *ebx
        *(arg2 + 0x10) = *(ebx + 0x10)
        arg2[6] = ebx[6]
        result = result_2
        *ebx = xmm1_2
        *(ebx + 0x10) = xmm2_2
        ebx[6] = result
    else if (result s<= 0)
        result = arg2[1]
        int32_t temp11_1 = ebx[1]
        
        if (result s< temp11_1)
            goto label_681893
        
        if (result s<= temp11_1)
            result = *arg2
            
            if (result u< *ebx)
                goto label_681893
else if (result s<= 0)
    result = arg4[1]
    int32_t temp8_1 = arg2[1]
    
    if (result s< temp8_1)
        goto label_681820
    
    if (result s<= temp8_1)
        result = result_1
        
        if (result u< *arg2)
            goto label_681820

return result
