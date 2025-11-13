// 函数: sub_5a5670
// 地址: 0x5a5670
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ecx = __chkstk(0x10008)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
int32_t i = 0
int32_t entry_ebx
int32_t var_8_1 = entry_ebx
void* edi = ecx + 8
void* eax_2 = edi
void var_10008

do
    int32_t xmm0_1 = *(eax_2 - 8)
    int32_t xmm0_2
    
    if (not(0.0250000004f f> xmm0_1) && not(xmm0_1 f> 1.97500002f))
        xmm0_2 = *(eax_2 - 4)
    
    int32_t xmm0_3
    
    if (0.0250000004f f> xmm0_1 || xmm0_1 f> 1.97500002f || 0.0250000004f f> xmm0_2
            || xmm0_2 f> 0.975000024f)
        xmm0_3 = *eax_2
    else
        xmm0_3 = 0x41200000
    
    *(&var_10008 + (i << 2)) = xmm0_3
    eax_2 += 0xc
    i += 1
while (i s< 0x4000)

void* edx = ecx
void* j = edx + 0xeffc0

do
    entry_ebx.b = 0
    void* j_1 = j
    
    for (int32_t i_1 = 0; i_1 s< 0x4000; )
        float xmm1_1 = *(&var_10008 + (i_1 << 2))
        float xmm2_1 = *edi
        xmm1_1 - xmm2_1
        j:1.b = (xmm1_1 == xmm2_1 ? 1 : 0) << 6 | (is_unordered.d(xmm1_1, xmm2_1) ? 1 : 0) << 2
            | (xmm1_1 < xmm2_1 ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (p_2)
            void* edx_1 = edx + (*j_1 << 2)
            j = *(edx_1 + 0xfffc0)
            void* edx_2 = edx_1 + 0xfffc0
            
            while (j != 0xffffffff)
                float xmm0_5 = *(&var_10008 + (j << 2)) + 9.99999975e-06f
                
                if (xmm2_1 >= xmm0_5)
                    *(&var_10008 + (i_1 << 2)) = xmm2_1
                    entry_ebx.b = 1
                    break
                
                if (not(xmm1_1 <= xmm0_5) && not(xmm0_5 <= xmm2_1))
                    *(&var_10008 + (i_1 << 2)) = xmm0_5
                    entry_ebx.b = 1
                    xmm1_1 = xmm0_5
                
                j = *(edx_2 + 4)
                edx_2 += 4
            
            edx = ecx
        
        i_1 += 1
        edi += 0xc
        j_1 += 4
    
    j = edx + 0xeffc0
    edi = edx + 8
while (entry_ebx.b != 0)

int32_t i_2 = 0
void* edx_3 = edx + 0x14
uint32_t result

do
    edx_3 += 0x60
    *(edx_3 - 0x6c) = *(&var_10008 + (i_2 << 2))
    void var_10004
    *(edx_3 - 0x60) = *(&var_10004 + (i_2 << 2))
    void var_10000
    *(edx_3 - 0x54) = *(&var_10000 + (i_2 << 2))
    void var_fffc
    *(edx_3 - 0x48) = *(&var_fffc + (i_2 << 2))
    void var_fff8
    *(edx_3 - 0x3c) = *(&var_fff8 + (i_2 << 2))
    void var_fff4
    *(edx_3 - 0x30) = *(&var_fff4 + (i_2 << 2))
    void var_fff0
    *(edx_3 - 0x24) = *(&var_fff0 + (i_2 << 2))
    int32_t var_ffec[0x3ff7]
    result = var_ffec[i_2]
    i_2 += 8
    *(edx_3 - 0x18) = result
while (i_2 s< 0x4000)

CookieCheckFunction(result)
return result
