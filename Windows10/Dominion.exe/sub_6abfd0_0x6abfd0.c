// 函数: sub_6abfd0
// 地址: 0x6abfd0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int128_t* ebx = arg4
int32_t ecx = *(arg3 + 4)
int32_t var_14 = ecx

if (ecx == 0)
    var_14 = ebx[1].d

int32_t edi = 1

if (*(arg3 + 0x10) == 1)
    edi = 6

*arg2 = *(ebx + 4)
int32_t eax_2 = *(ebx + 8)
arg2[0xf] = edi
void* var_18 = &arg2[1]
arg2[1] = eax_2
int32_t count = edi << 4
arg2[4] = 1
int32_t eax_3 = sub_687730(count)
int32_t ecx_4 = memset(eax_3, 0, count)
int32_t var_90 = arg5
void* var_8 = &arg2[0x12]
arg2[0x12] = eax_3
int32_t* esi_1 = arg2
esi_1[6] = var_14
esi_1[5] = 6
int32_t eax_6 = *(arg3 + 0x10)
esi_1[7] = eax_6
sub_6aa120(eax_6, ebx, ecx_4)

if (*(arg3 + 0x10) != 1)
    int32_t** edx_24 = arg2[0x12]
    *edx_24 = nullptr
    sub_72e8e0(ebx, edx_24)
else
    int32_t eax_7 = ebx[1].d
    int128_t var_30 = *ebx
    int32_t var_20_1 = eax_7
    int32_t eax_8 = *(arg3 + 0x14)
    int128_t var_74
    __builtin_memset(&var_74, 0, 0x18)
    void* var_14_1
    void* ecx_8
    void* edx_2
    
    if (eax_8 != 0)
        ecx_8 = ebx + 4
        edx_2 = ecx_8
        var_14_1 = ecx_8
    else
        int32_t edi_3 = *(ebx + 8)
        int32_t edx_1 = *(ebx + 4)
        
        if (edx_1 * 2 != edi_3 * 3)
            int32_t edi_4 = edi_3 << 2
            
            if (edx_1 * 3 != edi_4)
                eax_8 = 0
                
                if (edx_1 == edi_4)
                    eax_8 = 3
            else
                eax_8 = 2
        else
            eax_8 = 1
        
        edx_2 = ebx + 4
        var_18 = &esi_1[1]
        var_14_1 = edx_2
        var_8 = &esi_1[0x12]
        ecx_8 = ebx + 4
    
    int32_t var_5c
    int32_t var_14_2
    int32_t var_10_1
    void* eax_18
    void* ecx_10
    int32_t ebx_2
    int32_t edi_8
    int32_t var_54
    
    if (eax_8 != 1)
        if (eax_8 != 2)
            if (eax_8 != 3)
                sub_63b870(eax_8, &data_801800, "Halt", "C:\x\ax2017\Engine\TextureImport.cpp", 
                    0x5e7, "sTextureImportToPng")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            sub_6aba80(ecx_8, ebx)
            int32_t ecx_13 = *(ebx + 0xc)
            int32_t eax_27
            int32_t edx_16
            edx_16:eax_27 = muls.dp.d(0x2aaaaaab, *(ebx + 8))
            int32_t i = 0
            var_30:0xc.d = ecx_13
            ebx_2 = (edx_16 u>> 0x1f) + edx_16
            var_5c = 0
            edi_8 = *var_14_1
            int32_t edx_18 = ebx_2 * ecx_13
            bool cond:1_1 = data_cc8d30 s< 2
            var_14_2 = edi_8
            var_30:4.d = edi_8
            var_10_1 = ebx_2
            var_30:8.d = ebx_2
            int32_t var_58_3 = edx_18
            uint32_t xmm0_3[0x4] = _mm_shuffle_epi32(zx.o(edx_18), 0)
            
            if (cond:1_1)
                int32_t ecx_14 = edx_18 * 2
                
                do
                    (&var_54)[i] = ecx_14
                    i += 1
                    ecx_14 += edx_18
                while (i s< 4)
                
                eax_18 = &esi_1[0x12]
            else
                eax_18 = var_8
                var_54.o = __pmulld_xmmdq_memdq(xmm0_3, data_891470)
            
            ecx_10 = &esi_1[1]
        else
            int32_t eax_20
            int32_t edx_8
            edx_8:eax_20 = sx.q(*edx_2)
            int32_t eax_21
            int32_t edx_10
            edx_10:eax_21 = muls.dp.d(0x55555556, *(ebx + 8))
            edi_8 = ((edx_8 & 3) + eax_20) s>> 2
            ebx_2 = (edx_10 u>> 0x1f) + edx_10
            var_14_2 = edi_8
            int32_t eax_23
            int32_t edx_11
            edx_11:eax_23 = sx.q(var_30:0xc.d)
            var_30:4.d = edi_8
            var_10_1 = ebx_2
            var_30:8.d = ebx_2
            int32_t edx_14 = ebx_2 * var_30:0xc.d
            int32_t esi_6 = ((edx_11 & 3) + eax_23) s>> 2
            int32_t var_4c_2 = esi_6
            var_5c = edx_14
            int32_t var_58_2 = edx_14 + (esi_6 << 1)
            int32_t var_50_2 = esi_6 * 3 + edx_14
            esi_1 = arg2
            var_54 = edx_14 + esi_6
            ecx_10 = var_18
            int32_t var_48_2 = esi_6 + (edx_14 << 1)
            eax_18 = var_8
        
        var_8 = eax_18
        int32_t var_64_1 = 2
        var_74:8.d = 2
        var_74:4.d = 3
        var_74.d = 1
    else
        var_5c = 0
        int32_t eax_11
        int32_t edx_3
        edx_3:eax_11 = muls.dp.d(0x55555556, *ecx_8)
        edi_8 = (edx_3 u>> 0x1f) + edx_3
        int32_t eax_13
        int32_t edx_4
        edx_4:eax_13 = sx.q(*(ebx + 8))
        var_14_2 = edi_8
        var_30:4.d = edi_8
        ebx_2 = (eax_13 - edx_4) s>> 1
        var_10_1 = ebx_2
        var_30:8.d = ebx_2
        int32_t esi_4 = var_30:0xc.d s/ 3
        int32_t edx_7 = ebx_2 * var_30:0xc.d
        var_54 = esi_4
        int32_t ecx_9 = esi_4 * 2
        int32_t var_58_1 = ecx_9
        int32_t var_48_1 = edx_7
        esi_1 = arg2
        int32_t var_4c_1 = edx_7 + esi_4
        ecx_10 = var_18
        int32_t var_50_1 = ecx_9 + edx_7
        eax_18 = var_8
    *esi_1 = edi_8
    int32_t i_1 = 0
    *ecx_10 = ebx_2
    int32_t ebx_7 = 0
    
    do
        int32_t* esi_8 = *eax_18 + i_1
        int32_t eax_28 = *(&var_5c + ebx_7)
        *esi_8 = 0
        var_30.d = eax_28 + *arg4
        
        if (*(&var_74 + ebx_7) == 0)
            sub_72e8e0(&var_30, esi_8)
        else
            int32_t var_3c_1 = var_10_1
            int32_t var_40_1 = var_14_2
            int32_t var_34_1 = eax_7
            int32_t var_38_1 = sub_6a9570(var_14_2, eax_7)
            int32_t eax_35 = sub_687730(sub_6a9660(eax_7, var_10_1, var_14_2, eax_7))
            void* var_88_1 = *(&var_74 + ebx_7)
            int32_t var_44 = eax_35
            sub_6ab480(eax_35, &var_44, &var_30, var_88_1)
            sub_72e8e0(&var_44, esi_8)
            int32_t eax_36 = var_44
            
            if (eax_36 != 0)
                _aligned_free(eax_36)
        
        eax_18 = var_8
        i_1 += 0x10
        ebx_7 += 4
    while (i_1 s< 0x60)
    
    ebx = arg4

int32_t result = *ebx

if (result != 0)
    _aligned_free(result)

*ebx = 0
result.b = 1
return result
