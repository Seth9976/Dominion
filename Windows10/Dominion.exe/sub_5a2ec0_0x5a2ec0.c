// 函数: sub_5a2ec0
// 地址: 0x5a2ec0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
__security_cookie
int32_t* esi_1 = *arg4

if (esi_1 != 0)
    void* i = esi_1[0xb]
    int32_t edx = esi_1[0x19]
    int32_t edi_1 = esi_1[0x17]
    int32_t var_28_1 = edx
    
    while (i != 0)
        esi_1[0xb] = *(i + 4)
        edx(edi_1, i)
        i = esi_1[0xb]
        edx = var_28_1
    
    edx(edi_1, *esi_1)

int32_t var_7c_3 = 0x60094
int32_t eax_3 = _fclose_file_func(0)
memset(eax_3, 0, 0x60094)
int32_t* edi_3 = (eax_3 + 3) & 0xfffffffc
*edi_3 = eax_3
void* eax_5 = (edi_3 + 0x7b) & 0xfffffffc
edi_3[0x17] = 0
edi_3[6] = eax_5
edi_3[5] = eax_5 + 0x40000
edi_3[0x18] = _fclose_file_func
edi_3[0x19] = _ferror_file_func
edi_3[0xe] = eax_5 + 0x4000c
int32_t* ecx_1 = edi_3[0xd]

if (ecx_1 == 0)
    ecx_1 = sub_5a1410(edi_3, 0x20)
else
    edi_3[0xd] = ecx_1[2]

*ecx_1 = 0
ecx_1[1] = 0
ecx_1[2] = 0
ecx_1[6] = 0
ecx_1[7] = 0
edi_3[2] = ecx_1
int32_t* ecx_3 = edi_3[0xd]

if (ecx_3 == 0)
    ecx_3 = sub_5a1410(edi_3, 0x20)
else
    edi_3[0xd] = ecx_3[2]

*ecx_3 = 0
ecx_3[1] = 0
ecx_3[2] = 0
ecx_3[6] = 0
ecx_3[7] = 0
void* eax_12 = edi_3[2]
edi_3[3] = ecx_3
void* esi_4 = arg2 + 0x10
*(eax_12 + 4) = 0
*(edi_3[2] + 8) = edi_3[3]
*(edi_3[3] + 4) = edi_3[2]
*(edi_3[3] + 8) = 0
int32_t* eax_16 = edi_3[5]
int32_t ecx_7 = edi_3[0xe]
edi_3[4] = 0
*eax_16 = 0x8000
eax_16[1] = 1
eax_16[2] = ecx_7
void* _Base = edi_3[6]
edi_3[8] = 0x4000
int32_t edi_4 = 2
void* edx_1 = _Base + 8

do
    int32_t eax_17 = *(esi_4 - 0x10)
    esi_4 += 0x20
    int32_t ecx_8 = *(esi_4 - 0x2c)
    edx_1 += 0x40
    *(edx_1 - 0x48) = eax_17
    *(edx_1 - 0x40) = edi_4 - 2
    *(edx_1 - 0x44) = ecx_8
    *(edx_1 - 0x3c) = 0
    int32_t ecx_9 = *(esi_4 - 0x24)
    *(edx_1 - 0x38) = *(esi_4 - 0x28)
    *(edx_1 - 0x30) = edi_4 - 1
    *(edx_1 - 0x34) = ecx_9
    *(edx_1 - 0x2c) = 0
    int32_t ecx_10 = *(esi_4 - 0x1c)
    *(edx_1 - 0x28) = *(esi_4 - 0x20)
    *(edx_1 - 0x20) = edi_4
    *(edx_1 - 0x24) = ecx_10
    *(edx_1 - 0x1c) = 0
    int32_t ecx_11 = *(esi_4 - 0x14)
    *(edx_1 - 0x18) = *(esi_4 - 0x18)
    int32_t eax_23 = edi_4 + 1
    edi_4 += 4
    *(edx_1 - 0x10) = eax_23
    *(edx_1 - 0x14) = ecx_11
    *(edx_1 - 0xc) = 0
while (edi_4 - 2 s< 0x4000)

qsort(_Base, 0x4000, 0x10, sub_5a1360)
int32_t* edi_5 = edi_3
int32_t eax_25 = 0
float xmm6 = 3.40282347e+38f
float xmm7 = -3.40282347e+38f
int32_t esi_5 = 0
int32_t ecx_12 = edi_5[8]
void* edx_2 = edi_5[6]
int32_t (* var_68)(float arg1, void* arg2) = sub_5a1550
float* (* var_64)(void* arg1, float* arg2, float* arg3) = sub_5a2340
int32_t var_34 = ecx_12
float var_40 = 3.40282347e+38f
float var_38_1 = -3.40282347e+38f
int32_t var_2c = 0
*(edi_5 + 0x3c) = sub_5a1510.o
int128_t var_5c
int128_t xmm0_1 = var_5c
var_5c.d = 0x7f7fffff
var_5c:8.d = 0xff7fffff
*(edi_5 + 0x4c) = xmm0_1
var_5c:4.d = 0x7f7fffff
int32_t var_30_1 = 0xff7fffff
var_5c:0xc.d = 0xff7fffff

if (ecx_12 s> 0)
    int32_t xmm5_1 = -0x800001
    int32_t xmm4_1 = 0x7f7fffff
    var_5c.d = 0x7f7fffff
    int32_t* edx_3 = edx_2 + 4
    var_5c:8.d = 0xff7fffff
    int32_t xmm7_1 = 0x7f7fffff
    
    do
        if (esi_5 == 0)
        label_5a31e6:
            *(((esi_5 - var_2c) << 4) + edx_2) = *(edx_3 - 4)
            eax_25 = var_2c
            int32_t xmm1_2 = __maxss_xmmss_memss(var_30_1, *edx_3)
            xmm4_1 = __minss_xmmss_memss(xmm4_1, edx_3[-1])
            xmm7_1 = __minss_xmmss_memss(xmm7_1, *edx_3)
            xmm5_1 = __maxss_xmmss_memss(xmm5_1, edx_3[-1])
            var_30_1 = xmm1_2
            var_5c.d = xmm4_1
            var_5c:4.d = xmm7_1
            var_5c:8.d = xmm5_1
            var_5c:0xc.d = xmm1_2
        else
            int32_t eax_26
            eax_26.b = 1.1920929e-07f f> _mm_and_ps(*edx_3 f- edx_3[-4], 0x7fffffff)
            
            if (eax_26 == 0)
                goto label_5a31e6
            
            int32_t eax_27
            eax_27.b = 1.1920929e-07f f> _mm_and_ps(edx_3[-1] f- edx_3[-5], 0x7fffffff)
            
            if (eax_27 == 0)
                goto label_5a31e6
            
            eax_25 = var_2c + 1
            var_2c = eax_25
        
        esi_5 += 1
        edx_3 = &edx_3[4]
    while (esi_5 s< ecx_12)
    
    xmm7 = -3.40282347e+38f
    edi_5 = edi_3

int128_t* esi_6 = arg3
float edx_5 = edi_5[8] - eax_25
bool cond:0 = edi_5[0xf] == 0
float var_48 = edx_5
edi_5[8] = edx_5
int128_t var_24 = var_5c
void* var_4c

if (not(cond:0))
    int128_t* ecx_13 = &var_24
    
    if (esi_6 != 0)
        ecx_13 = esi_6
    
    int32_t eax_33 = *ecx_13
    edi_5[0x13] = *(ecx_13 + 4)
    void* ecx_15 = esi_6 + 8
    edi_5[0x12] = eax_33
    
    if (esi_6 == 0)
        ecx_15 = &var_24:8
    
    int32_t eax_34 = *ecx_15
    float xmm2_1 = 3.40282347e+38f
    float xmm3_1 = -3.40282347e+38f
    edi_5[0x15] = *(ecx_15 + 4)
    int32_t ecx_17 = 0
    edi_5[0x14] = eax_34
    void* eax_35 = edi_5[6]
    var_5c:4.d = 0x7f7fffff
    var_5c.d = 0x7f7fffff
    var_5c:0xc.d = 0xff7fffff
    var_5c:8.d = 0xff7fffff
    int32_t var_2c_1 = 0
    
    if (edx_5 s> 0)
        void* edx_6 = &edi_5[0xf]
        float var_34_1 = 3.40282347e+38f
        void* esi_7 = eax_35
        var_5c.d = 0x7f7fffff
        int32_t edi_7 = 0
        var_4c = edx_6
        float var_30_2 = -3.40282347e+38f
        var_5c:8.d = 0xff7fffff
        
        do
            ecx_17 = var_2c_1
            xmm2_1 = var_34_1
            xmm3_1 = var_30_2
            xmm6 = var_40
            xmm7 = var_38_1
            
            if ((*edx_6)(edx_6, *esi_7, *(esi_7 + 4)) != 0)
                *(((edi_7 - ecx_17) << 4) + eax_35) = *esi_7
                xmm2_1 = __minss_xmmss_memss(xmm2_1, *esi_7)
                xmm6 = __minss_xmmss_memss(xmm6, *(esi_7 + 4))
                xmm3_1 = __maxss_xmmss_memss(xmm3_1, *esi_7)
                xmm7 = __maxss_xmmss_memss(xmm7, *(esi_7 + 4))
                var_34_1 = xmm2_1
                var_5c.d = xmm2_1
                var_40 = xmm6
                var_5c:4.d = xmm6
                var_30_2 = xmm3_1
                var_5c:8.d = xmm3_1
                var_38_1 = xmm7
                var_5c:0xc.d = xmm7
            else
                ecx_17 += 1
                var_2c_1 = ecx_17
            
            edx_6 = var_4c
            edi_7 += 1
            esi_7 += 0x10
        while (edi_7 s< var_48)
        
        edi_5 = edi_3
        esi_6 = arg3
    
    edi_5[8] -= ecx_17
    var_24 = var_5c
    
    if (esi_6 == 0)
        float xmm5_3 = _mm_cvtepi32_ps(zx.o(int.d(xmm2_1)))
        
        if (not(xmm5_3 <= xmm2_1))
            xmm5_3 = xmm5_3 - 1f
        
        float xmm4_3 = _mm_cvtepi32_ps(zx.o(int.d(xmm6)))
        
        if (not(xmm4_3 <= xmm6))
            xmm4_3 = xmm4_3 - 1f
        
        float xmm2_3 = _mm_cvtepi32_ps(zx.o(int.d(xmm3_1)))
        
        if (not(xmm3_1 <= xmm2_3))
            xmm2_3 = xmm2_3 + 1f
        
        float xmm1_4 = _mm_cvtepi32_ps(zx.o(int.d(xmm7)))
        
        if (not(xmm7 <= xmm1_4))
            xmm1_4 = xmm1_4 + 1f
        
        float xmm5_4 = xmm5_3 - 10f
        float xmm4_4 = xmm4_3 - 10f
        float xmm2_4 = xmm2_3 + 10f
        float xmm1_5 = xmm1_4 + 10f
        var_24.d = xmm5_4
        var_24:4.d = xmm4_4
        var_24:8.d = xmm2_4
        var_24:0xc.d = xmm1_5
        edi_5[0x12] = xmm5_4
        edi_5[0x13] = xmm4_4
        edi_5[0x14] = xmm2_4
        edi_5[0x15] = xmm1_5

int128_t* eax_46 = &var_24

if (esi_6 != 0)
    eax_46 = esi_6

*(edi_5 + 0x68) = *eax_46
int32_t ecx_18 = edi_5[0x1b]
arg4[2] = edi_5[0x1a]
arg4[3] = ecx_18
int32_t ecx_19 = edi_5[0x1d]
arg4[4] = edi_5[0x1c]
arg4[5] = ecx_19
arg4[1] = edi_5[8]
*arg4 = edi_5
int32_t ecx_20 = edi_5[9]
int32_t esi_8 = edi_5[8]
void* edx_8 = edi_5[5]
void* var_28_3 = edx_8
int32_t eax_49
float* esi_11

if (ecx_20 s>= esi_8)
    edi_5[7] = 0
    esi_11 = nullptr
else
    eax_49 = (ecx_20 << 4) + edi_5[6]
    edi_5[9] = ecx_20 + 1
    edi_5[7] = eax_49
    
    if (ecx_20 + 1 s>= esi_8)
        esi_11 = nullptr
    else
        esi_11 = ((ecx_20 + 1) << 4) + edi_5[6]
        edi_5[9] = ecx_20 + 2

while (true)
    int32_t ecx_22 = *(edx_8 + 4)
    void* xmm1_6
    float xmm2_5
    
    if (ecx_22 == 1)
        xmm1_6 = var_4c
        xmm2_5 = var_48
    else
        eax_49 = *(*(edx_8 + 8) + 4)
        xmm2_5 = *(eax_49 + 0xc)
        xmm1_6 = *(eax_49 + 0x14)
        var_48 = xmm2_5
        var_4c = xmm1_6
    
    if (esi_11 != 0)
        int32_t eax_53
        
        if (ecx_22 != 1)
            float xmm0_13 = esi_11[1]
            xmm0_13 f- xmm1_6
            eax_49:1.b = (xmm0_13 f== xmm1_6 ? 1 : 0) << 6
                | (is_unordered.d(xmm0_13, xmm1_6) ? 1 : 0) << 2 | (xmm0_13 f< xmm1_6 ? 1 : 0)
            bool p_2 = unimplemented  {test ah, 0x44}
            bool cond:3_1
            
            if (p_2)
                cond:3_1 = xmm1_6 f> xmm0_13
            else
                cond:3_1 = xmm2_5 > *esi_11
            
            eax_53.b = cond:3_1
        
        if (ecx_22 == 1 || eax_53 != 0)
            sub_5a1d30(edi_5, esi_11, esi_11.w, edi_5)
            eax_49 = edi_5[9]
            
            if (eax_49 s>= edi_5[8])
                edx_8 = var_28_3
                esi_11 = nullptr
                continue
            else
                edx_8 = var_28_3
                esi_11 = (eax_49 << 4) + edi_5[6]
                edi_5[9] = eax_49 + 1
                continue
    else if (ecx_22 == 1)
        void* result = edi_5[2]
        
        for (void** i_1 = *(result + 8); i_1 != edi_5[3]; i_1 = i_1[2])
            result = sub_5a2040(edi_5, *i_1)
        
        void* esi_15 = *arg4
        
        if (*(esi_15 + 0x44) != 0)
            int32_t i_2 = 0
            
            if (*(esi_15 + 0x20) s> 0)
                int32_t ecx_26 = 0
                void* edx_11 = esi_15 + 0x3c
                int32_t var_3c_1 = 0
                
                do
                    result = (*(esi_15 + 0x44))(edx_11, esi_15, *(esi_15 + 0x18) + ecx_26)
                    edx_11 = esi_15 + 0x3c
                    i_2 += 1
                    ecx_26 = var_3c_1 + 0x10
                    var_3c_1 = ecx_26
                while (i_2 s< *(esi_15 + 0x20))
        
        CookieCheckFunction(result)
        return result
    
    sub_5a2a50(edi_5, esi_11.w, edi_5)
    edx_8 = var_28_3
