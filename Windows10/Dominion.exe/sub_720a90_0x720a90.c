// 函数: sub_720a90
// 地址: 0x720a90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t esi = arg2
int32_t edi = 0
void* edx = arg1
int32_t var_24 = esi
int32_t i = 0
void* var_14 = edx
int32_t i_3 = 0

do
    uint32_t count = *(esi + (i << 2))
    
    if (count s> 0)
        i.b += 1
        memset(edx + 0x500 + edi, zx.d(i.b), count)
        i = i_3
        edx = var_14
        edi += count
    
    esi = var_24
    i += 1
    i_3 = i
while (i s< 0x10)

*(edi + edx + 0x500) = 0
int32_t eax_1 = 0
int32_t i_1 = 1
int32_t edi_1 = 0
void* var_1c = edx + 0x608
int32_t i_4

while (true)
    char* edx_2 = edx + 0x500 + edi_1
    *(var_1c + 0x48) = edi_1 - eax_1
    i_4 = i_1
    
    if (zx.d(*edx_2) == i_4)
        int16_t* esi_4 = var_14 + 0x200 + (edi_1 << 1)
        int32_t var_24_1
        
        do
            *esi_4 = eax_1.w
            edx_2 = &edx_2[1]
            esi_4 = &esi_4[1]
            var_24_1 = eax_1
            edi_1 += 1
            eax_1 += 1
        while (zx.d(*edx_2) == i_1)
        
        i_4 = i_1
        
        if (var_24_1 u>= 1 << i_4.b)
            return 0
    
    int32_t edx_4 = eax_1
    eax_1 *= 2
    int32_t* ecx_9 = var_1c
    i_1 = i_4 + 1
    *ecx_9 = edx_4 << (0x10 - i_4.b)
    var_1c = &ecx_9[1]
    
    if (i_4 + 1 s> 0x10)
        break
    
    edx = var_14

*(var_14 + ((i_4 + 1) << 2) + 0x604) = 0xffffffff
memset(var_14, 0xff, 0x200)
int32_t c_1 = 0
int32_t c = 0

if (edi_1 s> 0)
    void* edx_6 = var_14
    void* var_20 = edx_6 + 0x200
    
    do
        uint32_t esi_6 = zx.d(*(edx_6 + c_1 + 0x500))
        uint32_t xmm0_2[0x4] = _mm_shuffle_epi32(zx.o(c_1), 0)
        
        if (esi_6 u<= 9)
            uint32_t esi_9 = zx.d(*var_20) << (9 - esi_6.b)
            int32_t esi_10 = 1 << (9 - esi_6.b)
            int32_t i_2 = 0
            
            if (esi_10 s> 0)
                if (esi_10 u>= 0x10)
                    int32_t eax_5 = esi_10 & 0x8000000f
                    
                    if (eax_5 s< 0)
                        eax_5 = ((eax_5 - 1) | 0xfffffff0) + 1
                    
                    uint32_t xmm0_3[0x4] = __andps_xmmxud_memxud(xmm0_2, data_891990)
                    int16_t xmm0_4[0x8] = _mm_packus_epi16(xmm0_3, xmm0_3)
                    int32_t xmm0_5 = _mm_packus_epi16(xmm0_4, xmm0_4)
                    void* eax_10 = esi_9 + 8 + edx_6
                    
                    do
                        *(eax_10 - 8) = xmm0_5
                        eax_10 += 0x10
                        *(eax_10 - 0x14) = xmm0_5
                        i_2 += 0x10
                        *(eax_10 - 0x10) = xmm0_5
                        *(eax_10 - 0xc) = xmm0_5
                    while (i_2 s< esi_10 - eax_5)
                    
                    edx_6 = var_14
                
                if (esi_10 u< 0x10 || i_2 s< esi_10)
                    memset(esi_9 + i_2 + edx_6, c, esi_10 - i_2)
                    edx_6 = var_14
                
                c_1 = c
        
        var_20 += 2
        c_1 += 1
        c = c_1
    while (c_1 s< edi_1)

return 1
