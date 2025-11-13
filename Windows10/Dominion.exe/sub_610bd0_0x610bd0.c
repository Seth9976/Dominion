// 函数: sub_610bd0
// 地址: 0x610bd0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t eax = sub_64e7a0(arg1)
*(eax + 0x18bc) = sub_608520
int32_t edx_1 = data_ccf6e8 - 1
int32_t edx_2 = neg.d(edx_1)
sub_60de40(eax, sbb.d(edx_2, edx_2, edx_1 != 0) + 2, arg1, 0)

if (data_ccf6e8 == 1)
    uint32_t eax_1 = sub_64e7a0(arg1)
    sub_665db0(eax_1, &data_be620c, eax_1, 0x3f800000, 0xffffffff, 0)

void* var_c
void var_8

if (sub_4aceb0(data_be1538, &var_c).b != 0)
    uint32_t eax_3 = sub_64e7a0(arg1)
    sub_665db0(eax_3, &data_be40e0, eax_3, 0x3f800000, 0xffffffff, 0)
    
    if (data_ccf6e8 == 1)
        uint32_t eax_4 = sub_64e7a0(arg1)
        sub_665db0(eax_4, &data_be6200, eax_4, 0x3f800000, 0xffffffff, 0)
    
    int32_t edx_6 = data_ccf6f4
    
    if (edx_6 != 0 || *(data_be1538 + 0xbd4) != edx_6)
        uint32_t eax_6 = sub_64e7a0(arg1)
        sub_665db0(eax_6, &data_be61e8, eax_6, 0x3f800000, 0xffffffff, 0)
        edx_6 = data_ccf6f4
    
    int32_t ecx_12 = sub_6062d0(&var_c, edx_6, data_ccf6f0, &var_c, &var_8) - 1
    int32_t eax_11
    
    if (*(data_be1538 + 0xbd4) s>= ecx_12)
        eax_11 = sub_6062d0(&var_c, data_ccf6f4 + 1, data_ccf6f0, &var_c, &var_8)
    
    if (*(data_be1538 + 0xbd4) s< ecx_12 || eax_11 != 0)
        uint32_t eax_12 = sub_64e7a0(arg1)
        sub_665db0(eax_12, &data_be61f4, eax_12, 0x3f800000, 0xffffffff, 0)
    
    int32_t edi_1 = *(data_be1538 + 0xbd4)
    
    if (edi_1 != 0xffffffff)
        int32_t eax_14 = sub_6062d0(&var_c, data_ccf6f4, data_ccf6f0, &var_c, &var_8)
        
        if (edi_1 s>= eax_14)
            sub_63b870(eax_14, &data_801800, "Halt", 
                "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0xa61c, "CardGalleryZoomedCard")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        int32_t ecx_17 = *(var_c + (edi_1 << 2))
        uint32_t eax_16
        
        if (ecx_17 == 0x1309)
            eax_16 = sub_64e7a0(arg1)
            sub_665db0(eax_16, &data_be40d4, eax_16, 0x3f800000, 0xffffffff, 0)
        else if (ecx_17 != 0 && (*(sub_571b30(ecx_17, 0x18) + 0x9c) & 0x1000) != 0)
            eax_16 = sub_64e7a0(arg1)
            sub_665db0(eax_16, &data_be40d4, eax_16, 0x3f800000, 0xffffffff, 0)

float xmm1 = data_8c4634
float xmm2 = data_ccf6fc
void* eax_2

if (data_ccf6f8 == 0)
    int32_t xmm0_1 = (zx.o(0)).d
    xmm2 f- 0
    eax_2:1.b =
        (xmm2 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2, 0f) ? 1 : 0) << 2 | (xmm2 < 0f ? 1 : 0)
    bool p_3 = unimplemented  {test ah, 0x44}
    
    if (p_3)
        float xmm2_2 = xmm2 - xmm1 * 4f
        
        if (not(0 f> xmm2_2))
            xmm0_1 = _mm_min_ss(0x3f800000, xmm2_2)
        
        data_ccf6fc = xmm0_1
else
    xmm2 - 1f
    eax_2:1.b =
        (xmm2 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm2, 1f) ? 1 : 0) << 2 | (xmm2 < 1f ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (p_1)
        float xmm1_2 = xmm1 * 4f + xmm2
        int32_t xmm2_1 = (zx.o(0)).d
        
        if (not(0 f> xmm1_2))
            xmm2_1 = _mm_min_ss(0x3f800000, xmm1_2)
        
        data_ccf6fc = xmm2_1
int32_t edx_10 = data_ccf6f4

if (edx_10 == 0)
    uint32_t eax_17 = sub_64e7a0(arg1)
    sub_665db0(eax_17, &data_be5d80, eax_17, 0x3f800000, 0xffffffff, 0)
    edx_10 = data_ccf6f4

if (sub_6062d0(&var_8, edx_10 + 1, data_ccf6f0, &var_8, &var_c) == 0)
    uint32_t eax_20 = sub_64e7a0(arg1)
    sub_665db0(eax_20, &data_be5d8c, eax_20, 0x3f800000, 0xffffffff, 0)

return sub_6071e0(arg1)
