// 函数: sub_5a5cd0
// 地址: 0x5a5cd0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* edx = __chkstk(0x1001c)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
void* ecx = edx
void* eax_2 = ecx + 0x14
void* var_1000c = ecx
void* ebx = ecx + 0xeffc0
void* esi = ecx + 8
int32_t i_1 = 3
uint32_t result
int32_t i

do
    int32_t* eax_8 = ebx
    int32_t* var_10014_1 = esi
    int32_t j = 0
    int32_t* var_10018_1 = eax_8
    int32_t j_2 = 0
    int32_t* ebx_1 = esi
    void var_10008
    
    do
        int32_t edi_1 = 0
        float xmm4_1 = *ebx_1
        int32_t eax_4 = *eax_8 + 0x3fff0
        int32_t ebx_2 = 0
        *(&var_10008 + (j << 2)) = xmm4_1
        int32_t xmm3_1 = (zx.o(0)).d
        int32_t xmm2_1 = (zx.o(0)).d
        int32_t* esi_1 = ecx + (eax_4 << 2)
        int32_t k = *esi_1
        
        if (k != 0xffffffff)
            do
                int32_t ecx_1 = edi_1
                float xmm1_1 = *(var_1000c + k * 0xc + 8)
                esi_1 = &esi_1[1]
                int32_t eax_6 = ebx_2 + 1
                edi_1 = ecx_1 + 1
                int32_t xmm0_2 = _mm_min_ss(xmm1_1, xmm3_1)
                
                if (0f <= xmm1_1)
                    edi_1 = ecx_1
                
                int32_t xmm1_2 = _mm_max_ss(xmm1_1, xmm2_1)
                xmm3_1 = xmm0_2
                
                if (xmm1_1 <= 0f)
                    eax_6 = ebx_2
                
                ebx_2 = eax_6
                k = *esi_1
                xmm2_1 = xmm1_2
            while (k != 0xffffffff)
            
            j = j_2
            
            if (0f f<= xmm3_1 || xmm2_1 f<= 0)
                ecx = var_1000c
            else
                ecx = var_1000c
                
                if (ebx_2 s<= edi_1)
                    *(&var_10008 + (j << 2)) = (xmm3_1 f- xmm4_1) * 0.5f + xmm4_1
                else
                    *(&var_10008 + (j << 2)) = (xmm2_1 f- xmm4_1) * 0.5f + xmm4_1
        
        j += 1
        ebx_1 = &var_10014_1[3]
        eax_8 = &var_10018_1[1]
        j_2 = j
        var_10014_1 = ebx_1
        var_10018_1 = eax_8
    while (j s< 0x4000)
    
    void* edx_2 = eax_2
    
    for (int32_t j_1 = 0; j_1 s< 0x4000; )
        edx_2 += 0x60
        *(edx_2 - 0x6c) = *(&var_10008 + (j_1 << 2))
        void var_10004
        *(edx_2 - 0x60) = *(&var_10004 + (j_1 << 2))
        void var_10000
        *(edx_2 - 0x54) = *(&var_10000 + (j_1 << 2))
        void var_fffc
        *(edx_2 - 0x48) = *(&var_fffc + (j_1 << 2))
        void var_fff8
        *(edx_2 - 0x3c) = *(&var_fff8 + (j_1 << 2))
        void var_fff4
        *(edx_2 - 0x30) = *(&var_fff4 + (j_1 << 2))
        void var_fff0
        *(edx_2 - 0x24) = *(&var_fff0 + (j_1 << 2))
        int32_t var_ffec[0x3ff7]
        result = var_ffec[j_1]
        j_1 += 8
        *(edx_2 - 0x18) = result
    
    i = i_1
    i_1 -= 1
    ecx = var_1000c
    ebx = ecx + 0xeffc0
    esi = ecx + 8
while (i != 1)
CookieCheckFunction(result)
return result
