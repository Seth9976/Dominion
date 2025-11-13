// 函数: sub_4f6540
// 地址: 0x4f6540
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
__security_cookie
int32_t var_b4 = arg5
int64_t* esi_1 = arg2 + (((arg4 - arg2) s/ 0xc) s>> 1) * 0xc
int32_t eax_7
eax_7.b = arg5.b
int32_t eax_12 = (arg4 - 0xc - arg2) s/ 0xc

if (eax_12 s<= 0x28)
    sub_4f7cb0(eax_12, esi_1, arg2, arg4 - 0xc)
else
    int32_t eax_14 = (eax_12 + 1) s>> 3
    int32_t eax_16 = eax_14 * 0xc
    int64_t* edx_4 = eax_16 + arg2
    int64_t* eax_17 = &arg2[eax_14 * 3]
    sub_4f7cb0(eax_17, edx_4, arg2, eax_17)
    int32_t edi_2 = eax_7.b.d
    int32_t var_bc_1 = edi_2
    int64_t* eax_18 = eax_16 + esi_1
    sub_4f7cb0(eax_18, esi_1, esi_1 - eax_16, eax_18)
    int64_t* edx_8 = arg4 - 0xc - eax_16
    int32_t var_c4_1 = edi_2
    void* eax_20 = arg4 - 0xc - eax_14 * 0x18
    int32_t var_cc_1 = edi_2
    sub_4f7cb0(sub_4f7cb0(eax_20, edx_8, eax_20, arg4 - 0xc), esi_1, edx_4, edx_8)

void* edi_4 = esi_1 + 0xc
void* var_90_1 = edi_4
uint32_t eax_22

if (arg2 u< esi_1)
    do
        int64_t xmm0_1 = *esi_1
        int64_t xmm0_2 = *(esi_1 - 0xc)
        eax_22 = xmm0_2.d
        int32_t temp0_1 = xmm0_1.d
        bool cond:0_1 = eax_22 s< temp0_1
        
        if (eax_22 == temp0_1)
            cond:0_1 = xmm0_2:4.d s< xmm0_1:4.d
        
        eax_22.b = cond:0_1
        
        if (eax_22.b != 0)
            break
        
        int64_t xmm0_3 = *(esi_1 - 0xc)
        int64_t xmm0_4 = *esi_1
        eax_22 = xmm0_4.d
        int32_t temp2_1 = xmm0_3.d
        bool cond:4_1 = eax_22 s< temp2_1
        
        if (eax_22 == temp2_1)
            cond:4_1 = xmm0_4:4.d s< xmm0_3:4.d
        
        eax_22.b = cond:4_1
        
        if (eax_22.b != 0)
            break
        
        esi_1 -= 0xc
    while (arg2 u< esi_1)
    
    edi_4 = var_90_1

void* ecx_12 = arg4

if (edi_4 u< ecx_12)
    int64_t xmm0_5 = *esi_1
    int32_t edx_11 = xmm0_5.d
    
    do
        int64_t xmm0_6 = *edi_4
        int32_t temp1_1 = xmm0_6.d
        bool cond:1_1 = temp1_1 s< edx_11
        
        if (temp1_1 == edx_11)
            cond:1_1 = xmm0_6:4.d s< xmm0_5:4.d
        
        eax_22.b = cond:1_1
        
        if (eax_22.b != 0)
            break
        
        int64_t xmm0_7 = *edi_4
        int64_t xmm0_8 = *esi_1
        eax_22 = xmm0_8.d
        int32_t temp3_1 = xmm0_7.d
        bool cond:6_1 = eax_22 s< temp3_1
        
        if (eax_22 == temp3_1)
            cond:6_1 = xmm0_8:4.d s< xmm0_7:4.d
        
        ecx_12 = arg4
        eax_22.b = cond:6_1
        
        if (eax_22.b != 0)
            break
        
        edi_4 += 0xc
    while (edi_4 u< ecx_12)
    
    var_90_1 = edi_4

int64_t* eax_23 = esi_1
void* edx_12 = edi_4
char var_8c
var_8c.d = eax_23

while (true)
    void* var_98_2 = edx_12
    
    while (true)
        if (edx_12 u< ecx_12)
            do
                int64_t xmm0_9 = *edx_12
                int64_t xmm0_10 = *esi_1
                int32_t eax_24 = xmm0_10.d
                int32_t temp4_1 = xmm0_9.d
                bool cond:3_1 = eax_24 s< temp4_1
                
                if (eax_24 == temp4_1)
                    cond:3_1 = xmm0_10:4.d s< xmm0_9:4.d
                
                eax_24.b = cond:3_1
                
                if (eax_24.b == 0)
                    int64_t xmm0_11 = *esi_1
                    int64_t xmm0_12 = *edx_12
                    int32_t eax_25 = xmm0_12.d
                    int32_t temp6_1 = xmm0_11.d
                    bool cond:7_1 = eax_25 s< temp6_1
                    
                    if (eax_25 == temp6_1)
                        cond:7_1 = xmm0_12:4.d s< xmm0_11:4.d
                    
                    eax_25.b = cond:7_1
                    
                    if (eax_25.b != 0)
                        break
                    
                    if (edi_4 == edx_12)
                        edi_4 += 0xc
                    else
                        int64_t xmm1_1 = *edi_4
                        int32_t ecx_13 = *(edi_4 + 8)
                        *edi_4 = *edx_12
                        *(edi_4 + 8) = *(edx_12 + 8)
                        edi_4 += 0xc
                        *edx_12 = xmm1_1
                        *(edx_12 + 8) = ecx_13
                
                edx_12 += 0xc
            while (edx_12 u< arg4)
            
            eax_23 = var_8c.d
            var_90_1 = edi_4
            var_98_2 = edx_12
        
        bool cond:2_1 = eax_23 != arg2
        
        if (eax_23 u> arg2)
            void* edx_13 = var_8c.d
            int64_t* ecx_15 = edx_13 - 0xc
            var_8c.d = ecx_15
            
            do
                int64_t xmm0_14 = *esi_1
                int64_t xmm0_15 = *ecx_15
                int32_t eax_28 = xmm0_15.d
                int32_t temp5_1 = xmm0_14.d
                bool cond:5_1 = eax_28 s< temp5_1
                
                if (eax_28 == temp5_1)
                    cond:5_1 = xmm0_15:4.d s< xmm0_14:4.d
                
                eax_28.b = cond:5_1
                
                if (eax_28.b == 0)
                    int64_t xmm0_16 = *ecx_15
                    int64_t xmm0_17 = *esi_1
                    int32_t eax_29 = xmm0_17.d
                    int32_t temp7_1 = xmm0_16.d
                    bool cond:8_1 = eax_29 s< temp7_1
                    
                    if (eax_29 == temp7_1)
                        cond:8_1 = xmm0_17:4.d s< xmm0_16:4.d
                    
                    eax_29.b = cond:8_1
                    
                    if (eax_29.b != 0)
                        break
                    
                    esi_1 -= 0xc
                    
                    if (esi_1 != ecx_15)
                        int64_t* eax_30 = var_8c.d
                        int32_t ecx_16 = esi_1[1].d
                        int64_t xmm1_2 = *esi_1
                        *esi_1 = *eax_30
                        esi_1[1].d = eax_30[1].d
                        int64_t* eax_32 = var_8c.d
                        *eax_32 = xmm1_2
                        eax_32[1].d = ecx_16
                        ecx_15 = eax_32
                
                edx_13 -= 0xc
                ecx_15 -= 0xc
                var_8c.d = ecx_15
            while (arg2 u< edx_13)
            
            edi_4 = var_90_1
            var_8c.d = edx_13
            eax_23 = var_8c.d
            cond:2_1 = eax_23 != arg2
            edx_12 = var_98_2
        
        if (not(cond:2_1))
            if (edx_12 == arg4)
                *(arg3 + 4) = edi_4
                *arg3 = esi_1
                CookieCheckFunction(arg3)
                return arg3
            
            if (edi_4 != edx_12)
                int64_t xmm1_3 = *esi_1
                int32_t ecx_18 = esi_1[1].d
                *esi_1 = *edi_4
                esi_1[1].d = *(edi_4 + 8)
                *edi_4 = xmm1_3
                *(edi_4 + 8) = ecx_18
            
            int32_t ecx_19 = esi_1[1].d
            edi_4 += 0xc
            int64_t xmm1_4 = *esi_1
            *esi_1 = *edx_12
            esi_1[1].d = *(edx_12 + 8)
            esi_1 += 0xc
            eax_23 = var_8c.d
            *edx_12 = xmm1_4
            *(edx_12 + 8) = ecx_19
            edx_12 += 0xc
            ecx_12 = arg4
            var_90_1 = edi_4
            break
        
        var_8c.d = eax_23 - 0xc
        
        if (edx_12 != arg4)
            int32_t ecx_22 = *(edx_12 + 8)
            int64_t xmm1_7 = *edx_12
            *edx_12 = *(eax_23 - 0xc)
            var_8c.d = eax_23 - 0xc
            *(edx_12 + 8) = *(eax_23 - 4)
            edx_12 += 0xc
            eax_23 = var_8c.d
            *eax_23 = xmm1_7
            eax_23[1].d = ecx_22
            ecx_12 = arg4
            break
        
        esi_1 -= 0xc
        
        if (eax_23 - 0xc != esi_1)
            int64_t xmm1_5 = *(eax_23 - 0xc)
            int32_t ecx_20 = *(eax_23 - 4)
            *(eax_23 - 0xc) = *esi_1
            *(var_8c.d + 8) = esi_1[1].d
            edx_12 = var_98_2
            *esi_1 = xmm1_5
            esi_1[1].d = ecx_20
        
        int32_t ecx_21 = esi_1[1].d
        edi_4 -= 0xc
        int64_t xmm1_6 = *esi_1
        var_90_1 = edi_4
        *esi_1 = *edi_4
        esi_1[1].d = *(edi_4 + 8)
        eax_23 = var_8c.d
        *edi_4 = xmm1_6
        *(edi_4 + 8) = ecx_21
        ecx_12 = arg4
