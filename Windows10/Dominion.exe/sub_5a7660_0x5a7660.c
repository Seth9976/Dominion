// 函数: sub_5a7660
// 地址: 0x5a7660
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t i = 0
uint32_t* ebx = &arg2[0x5bfe8]
uint32_t* var_54 = ebx
int64_t var_40
float result_1
float xmm0_1

do
    int32_t i_6 = i
    uint32_t* var_98_1 = ebx
    uint32_t eax_4 = sub_5a7460(i.w, arg2)
    *var_54 = eax_4
    uint32_t eax_5 = eax_4 * 3
    xmm0_1 = arg2[eax_5 + 4]
    result_1 = arg2[eax_5 + 5]
    sub_5a1010(eax_5, &var_40:4, arg4, 0.075000003f, 2)
    var_54 = &var_54[1]
    i += 1
while (i s< 0xa)

float xmm3 = 9999999f
int32_t edx_2 = 0
int32_t var_58 = 0
int32_t i_7 = 0

while (true)
    uint32_t eax_7 = *ebx * 3
    int64_t xmm0_2 = *(arg2 + (eax_7 << 2) + 0x10)
    result_1 = arg2[eax_7 + 6]
    var_40 = xmm0_2
    int32_t i_1 = edx_2 + 1
    
    if (edx_2 + 1 s>= 0xa)
        break
    
    void* esi = &ebx[1]
    
    do
        float xmm4_1 = xmm3
        int32_t i_10 = i_7
        int32_t eax_11 = *esi * 3
        int64_t xmm0_3 = *(arg2 + (eax_11 << 2) + 0x10)
        float xmm2_2 = xmm0_1 f- xmm0_3:4.d
        float xmm1_3 = var_40.d f- xmm0_3.d
        float xmm0_5 = result_1 f- arg2[eax_11 + 6]
        float xmm2_5 = xmm2_2 * xmm2_2 + xmm1_3 * xmm1_3 + xmm0_5 * xmm0_5
        
        if (not(xmm3 <= xmm2_5))
            xmm3 = xmm2_5
            var_58 = edx_2
        
        i_7 = i_1
        
        if (xmm4_1 <= xmm2_5)
            i_7 = i_10
        
        i_1 += 1
        esi += 4
    while (i_1 s< 0xa)
    
    edx_2 += 1
    ebx = &ebx[1]

int32_t esi_1 = arg2[0x5bfe8]
int32_t edx_4 = arg2[var_58 + 0x5bfe8]
int32_t var_34 = arg2[var_58 + 0x5bfe8]
int32_t var_30 = arg2[i_7 + 0x5bfe8]
int32_t eax_16 = 2
int32_t var_2c

if (esi_1 != edx_4 && esi_1 != arg2[i_7 + 0x5bfe8])
    var_2c = esi_1
    eax_16 = 3

int32_t esi_2 = arg2[0x5bfe9]

if (esi_2 != edx_4 && esi_2 != arg2[i_7 + 0x5bfe8])
    (&var_34)[eax_16] = esi_2
    eax_16 += 1

int32_t esi_3 = arg2[0x5bfea]

if (esi_3 != edx_4 && esi_3 != arg2[i_7 + 0x5bfe8])
    (&var_34)[eax_16] = esi_3
    eax_16 += 1

int32_t esi_4 = arg2[0x5bfeb]

if (esi_4 != edx_4 && esi_4 != arg2[i_7 + 0x5bfe8])
    (&var_34)[eax_16] = esi_4
    eax_16 += 1

int32_t esi_5 = arg2[0x5bfec]

if (esi_5 != edx_4 && esi_5 != arg2[i_7 + 0x5bfe8])
    (&var_34)[eax_16] = esi_5
    eax_16 += 1

int32_t esi_6 = arg2[0x5bfed]

if (esi_6 != edx_4 && esi_6 != arg2[i_7 + 0x5bfe8])
    (&var_34)[eax_16] = esi_6
    eax_16 += 1

int32_t esi_7 = arg2[0x5bfee]

if (esi_7 != edx_4 && esi_7 != arg2[i_7 + 0x5bfe8])
    (&var_34)[eax_16] = esi_7
    eax_16 += 1

int32_t esi_8 = arg2[0x5bfef]

if (esi_8 != edx_4 && esi_8 != arg2[i_7 + 0x5bfe8])
    (&var_34)[eax_16] = esi_8
    eax_16 += 1

int32_t esi_9 = arg2[0x5bff0]

if (esi_9 != edx_4 && esi_9 != arg2[i_7 + 0x5bfe8])
    (&var_34)[eax_16] = esi_9
    eax_16 += 1

int32_t esi_10 = arg2[0x5bff1]

if (esi_10 != edx_4 && esi_10 != arg2[i_7 + 0x5bfe8])
    (&var_34)[eax_16] = esi_10

for (int32_t i_2 = 2; i_2 s< 0xa; i_2 += 1)
    int32_t esi_11 = 0
    float xmm6_2 = 9999999f
    int32_t j_4 = 0xffffffff
    int32_t j = i_2
    int32_t eax_18 = var_34 * 3
    int64_t xmm0_7 = *(arg2 + (eax_18 << 2) + 0x10)
    float eax_19 = arg2[eax_18 + 6]
    int32_t eax_21 = (&result_1)[i_2] i* 3
    int64_t xmm0_8 = *(arg2 + (eax_21 << 2) + 0x10)
    float eax_22 = arg2[eax_21 + 6]
    
    do
        int32_t eax_24 = (&var_34)[j] * 3
        float result_3 = arg2[eax_24 + 6]
        var_40 = *(arg2 + (eax_24 << 2) + 0x10)
        float xmm1_6 = xmm0_7.d f- var_40.d
        float xmm5_3 = xmm0_7:4.d - xmm0_1
        float xmm4_3 = xmm0_8:4.d - xmm0_1
        result_1 = result_3
        float xmm0_11 = eax_19 - result_1
        float xmm1_9 = xmm0_8.d f- var_40.d
        float xmm5_6 = xmm5_3 * xmm5_3 + xmm1_6 * xmm1_6 + xmm0_11 * xmm0_11
        float xmm0_14 = eax_22 - result_1
        float xmm4_6 = xmm4_3 * xmm4_3 + xmm1_9 * xmm1_9 + xmm0_14 * xmm0_14
        
        if (not(xmm4_6 <= xmm5_6) && not(xmm6_2 <= xmm5_6))
            xmm6_2 = xmm5_6
            esi_11 = 0
            j_4 = j
        else if (not(xmm5_6 <= xmm4_6) && not(xmm6_2 <= xmm4_6))
            xmm6_2 = xmm4_6
            esi_11 = 1
            j_4 = j
        
        j += 1
    while (j s< 0xa)
    
    if (esi_11 != 0)
        int32_t ecx_5 = (&var_34)[i_2]
        (&var_34)[i_2] = (&var_34)[j_4]
        (&var_34)[j_4] = ecx_5
    else
        int32_t esi_12 = (&var_34)[j_4]
        (&var_34)[j_4] = (&var_34)[i_2]
        memmove(&var_30, &var_34, i_2 << 2)
        var_34 = esi_12

int32_t edx_5 = var_34
float var_24
int32_t var_14
int32_t var_10

if (not(arg2[edx_5 * 3 + 4] f<= arg2[var_10 * 3 + 4]))
    int32_t ecx_7 = var_30
    var_30 = var_14
    var_14 = ecx_7
    int32_t var_18
    int32_t var_2c_1 = var_18
    int32_t var_18_1 = var_2c
    int32_t var_1c
    int32_t var_28_1 = var_1c
    int32_t var_28
    int32_t var_1c_1 = var_28
    float ecx_10 = var_24
    var_34 = var_10
    int32_t var_10_1 = edx_5
    float var_20
    var_24 = var_20
    float var_20_1 = ecx_10

int32_t j_3
float eax_27

do
    eax_27.b = 0
    int32_t* ebx_2 = &var_30
    j_3 = 2
    char var_4d_1 = 0
    int32_t i_8 = 0xa
    int32_t j_5 = 2
    int32_t i_9 = 0xa
    int32_t i_3
    
    do
        int32_t j_1 = j_3
        
        if (j_3 s< 9)
            do
                int32_t ecx_11 = ebx_2[-1] * 3
                float result_4 = *ebx_2
                float xmm0_17 = arg2[ecx_11 + 5]
                float xmm7_3 = arg2[ecx_11 + 4]
                result_1 = result_4
                int32_t eax_32 = result_4 i* 3
                float xmm3_1 = arg2[eax_32 + 5]
                float xmm6_3 = arg2[eax_32 + 4]
                float xmm5_8 = xmm6_3 - xmm7_3
                float xmm3_2 = xmm3_1 - xmm0_17
                int32_t edx_6 = (&var_34)[j_1] * 3
                float xmm1_11 = arg2[edx_6 + 5]
                eax_27 = (&var_30)[j_1] * 3
                float xmm1_12 = arg2[eax_27 i+ 4]
                float xmm1_16 = ((xmm1_12 - xmm7_3) * xmm3_2
                    - (arg2[eax_27 i+ 5] f- arg2[ecx_11 + 5]) * xmm5_8) * (
                    (arg2[edx_6 + 4] f- xmm7_3) * xmm3_2 - (arg2[edx_6 + 5] f- xmm0_17) * xmm5_8)
                float xmm1_17
                float xmm2_11
                float xmm3_4
                
                if (not(xmm1_16 f> 0))
                    xmm1_17 = arg2[edx_6 + 4]
                    xmm2_11 = xmm1_12 - xmm1_17
                    xmm3_4 = arg2[eax_27 i+ 5] f- xmm1_11
                
                if (xmm1_16 f> 0 || ((xmm6_3 - xmm1_17) * xmm3_4 - (xmm3_1 - xmm1_11) * xmm2_11)
                        * ((xmm7_3 - xmm1_17) * xmm3_4 - (xmm0_17 - xmm1_11) * xmm2_11) f> 0)
                    eax_27.b = var_4d_1
                else
                    *ebx_2 = (&var_34)[j_1]
                    (&var_34)[j_1] = result_1
                    eax_27.b = 1
                    var_4d_1 = 1
                
                j_1 += 1
            while (j_1 s< 9)
            
            j_3 = j_5
            i_8 = i_9
        
        j_3 += 1
        ebx_2 = &ebx_2[1]
        i_3 = i_8
        i_8 -= 1
        j_5 = j_3
        i_9 = i_8
    while (i_3 != 1)
while (eax_27.b != 0)
int32_t i_4 = 0
int32_t* esi_15 = arg3 + 0x30
*(arg2 + 0x16ffa0) = var_34.o
*(arg2 + 0x16ffb0) = var_24.o
*(arg2 + 0x16ffc0) = var_14.q

do
    int32_t eax_36 = *esi_15
    
    if (eax_36 == 0x3a || eax_36 == 0x42 || eax_36 == 0x4d)
        j_3.b = 1
    else
        j_3.b = 0
    
    int32_t eax_38 = (&var_34)[i_4] * 3
    int32_t var_3c_2 = arg2[eax_38 + 4]
    result_1 = arg2[eax_38 + 5]
    
    if (j_3.b != 0)
        char eax_39
        eax_39, j_3 = sub_5a11b0(eax_38, &var_40:4, arg4, 0.0787499994f, 1)
        
        if (eax_39 == 0)
            *esi_15 = 0x3d
    
    i_4 += 1
    esi_15 = &esi_15[1]
while (i_4 s< 0xa)

int32_t i_5 = 0x18
float result = arg3 + 0x30
result_1 = result

do
    int32_t j_2 = 0
    float result_2 = result
    
    do
        int32_t eax_41 = *result_2
        int32_t xmm3_5
        
        if (eax_41 == 0x3a || eax_41 == 0x42 || eax_41 == 0x4d)
            i_4.b = 1
            xmm3_5 = 0x3c005800
        else
            i_4.b = 0
            xmm3_5 = 0x3bab2000
        
        int32_t eax_43 = (&var_34)[j_2] * 3
        float xmm1_23 = arg2[eax_43 + 5] f- *(arg2 + i_5 - 4)
        float xmm0_29 = arg2[eax_43 + 4] f- *(arg2 + i_5 - 8)
        
        if (not(xmm3_5 f<= xmm1_23 * xmm1_23 + xmm0_29 * xmm0_29))
            int32_t xmm0_31 = *(arg2 + i_5)
            
            if (i_4.b == 0)
                if (not(0 f<= xmm0_31))
                    *(arg2 + i_5) = 0x3dcccccd
            else if (not(xmm0_31 f< 0))
                *(arg2 + i_5) = 0xbc23d70a
        
        j_2 += 1
        result_2 += 4
    while (j_2 s< 0xa)
    
    result = result_1
    i_5 += 0xc
while (i_5 s< 0x30018)

CookieCheckFunction(result)
return result
