// 函数: sub_5c6110
// 地址: 0x5c6110
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebx
int32_t var_30 = ebx
int32_t var_14
int32_t var_10
int32_t var_c
TEB* fsbase

if (data_1a8a0e0 s> *(*fsbase->ThreadLocalStoragePointer + 8))
    sub_75970e(&data_1a8a0e0)
    
    if (data_1a8a0e0 == 0xffffffff)
        data_1a8a0e4 = 0xffffffff
        data_1a8a0e8 = 0xffffffff
        int32_t eax_2
        int32_t ecx
        int32_t edx
        int32_t ebx_1
        eax_2, ebx_1, ecx, edx = __cpuid(0, 0)
        data_1a8a0ec = 0xffffffff
        int32_t eax_10
        int32_t ecx_3
        int32_t edi_3
        
        if ((ebx_1 != 0x756e6547 || edx != 0x49656e69 || ecx != 0x6c65746e) && ((ebx_1 == 0x68747541
                && edx == 0x69746e65 && ecx == 0x444d4163)
                || (ebx_1 == 0x69444d41 && edx == 0x74656273 && ecx == 0x21726574)))
            int32_t var_24_2 = 0
            int32_t var_2c = 0
            int32_t eax_4
            int32_t ecx_2
            int32_t edx_2
            int32_t ebx_3
            eax_4, ebx_3, ecx_2, edx_2 = __cpuid(0x80000000, 0)
            int32_t var_28_2 = ebx_3
            int32_t var_24_3 = ecx_2
            ecx_3 = 0
            int32_t var_20_2 = edx_2
            
            if (eax_4 u< 0x80000006)
                eax_10 = 0
                edi_3 = 0
            else
                int32_t eax_5
                int32_t ecx_4
                int32_t edx_3
                int32_t ebx_5
                eax_5, ebx_5, ecx_4, edx_3 = __cpuid(0x80000005, 0)
                var_2c = eax_5
                int32_t var_28_3 = ebx_5
                int32_t var_20_3 = edx_3
                int32_t var_3c_4 = ebx
                int32_t eax_6
                int32_t ecx_5
                int32_t edx_4
                int32_t ebx_7
                eax_6, ebx_7, ecx_5, edx_4 = __cpuid(0x80000006, 0)
                edi_3 = ecx_4 s>> 0x18 << 0xa
                int32_t var_20_4 = 0
                int32_t var_24_5 = 0
                var_2c = eax_6
                int32_t var_28_4 = ebx_7
                ecx_3 = ecx_5 s>> 0x10 << 0xa
                eax_10 = (edx_4 s>> 0x12 & 0x3ff) << 0x13
        else
            sub_5b0b80(&var_c, &var_10, &var_14, &var_c, eax_2)
            edi_3 = var_14
            ecx_3 = var_10
            eax_10 = var_c
        
        if (edi_3 s<= 0)
            edi_3 = 0x8000
        
        data_1a8a0e4 = edi_3
        
        if (ecx_3 s<= 0)
            ecx_3 = 0x40000
        
        data_1a8a0e8 = ecx_3
        
        if (eax_10 s<= 0)
            eax_10 = 0x200000
        
        data_1a8a0ec = eax_10
        __Init_thread_footer(&data_1a8a0e0)

int32_t eax_12 = data_1a8a0e8
uint32_t ecx_9 = *arg2
uint32_t esi_6 = *arg4
int32_t edi_5 = *arg3
int32_t edx_6 = data_1a8a0e4

if (ecx_9 s< esi_6)
    ecx_9 = esi_6

var_c = data_1a8a0ec
uint32_t eax_14 = edi_5

if (edi_5 s< ecx_9)
    eax_14 = ecx_9

var_10 = edx_6
var_14 = edi_5

if (eax_14 s>= 0x30)
    int32_t eax_16
    int32_t edx_7
    edx_7:eax_16 = sx.q(edx_6 - 0x40)
    int32_t ebx_11 = ((edx_7 & 0x1f) + eax_16) s>> 5 & 0xfffffff8
    
    if (ebx_11 s< 1)
        ebx_11 = 1
    
    if (edi_5 s> ebx_11)
        int32_t eax_18
        int32_t edx_9
        edx_9:eax_18 = sx.q(edi_5)
        edi_5 = ebx_11
        int32_t temp1_1 = mods.dp.d(edx_9:eax_18, ebx_11)
        
        if (temp1_1 != 0)
            edi_5 -=
                divs.dp.d(sx.q(ebx_11 - temp1_1 - 1), (divs.dp.d(edx_9:eax_18, ebx_11) << 3) + 8)
                << 3
        
        *arg3 = edi_5
        esi_6 = *arg4
    
    void* edx_14 = var_10 - (((*arg2 * edi_5) << 2) + 0x40)
    uint32_t eax_33
    
    if (edx_14 s< edi_5 << 4)
        eax_33 = divu.dp.d(0:sub_480000, ebx_11 << 4)
    else
        eax_33 = divu.dp.d(0:edx_14, edi_5 << 2)
    
    eax_14 = divu.dp.d(0:0x180000, edi_5 << 3)
    uint32_t ebx_13 = eax_14
    
    if (eax_33 s< ebx_13)
        ebx_13 = eax_33
    
    int32_t ebx_14 = ebx_13 & 0xfffffffc
    
    if (esi_6 s> ebx_14)
        int32_t eax_37
        int32_t edx_21
        edx_21:eax_37 = sx.q(esi_6)
        int32_t temp1_6 = mods.dp.d(edx_21:eax_37, ebx_14)
        
        if (temp1_6 != 0)
            ebx_14 -=
                divs.dp.d(sx.q(ebx_14 - temp1_6), (divs.dp.d(edx_21:eax_37, ebx_14) << 2) + 4) << 2
        
        *arg4 = ebx_14
        return arg4
    
    if (var_14 == edi_5)
        int32_t edx_25 = 0x180000
        int32_t esi_8 = (esi_6 * edi_5) << 2
        uint32_t ebx_16
        
        if (esi_8 s> 0x400)
            uint32_t eax_46 = *arg2
            ebx_16 = eax_46
            
            if (var_c != 0 && esi_8 s<= 0x8000)
                edx_25 = eax_12
                ebx_16 = 0x240
                
                if (eax_46 s< 0x240)
                    ebx_16 = eax_46
        else
            edx_25 = var_10
            ebx_16 = *arg2
        
        eax_14 = divu.dp.d(0:edx_25, edi_5 * 0xc)
        uint32_t esi_9 = eax_14
        
        if (ebx_16 s< esi_9)
            esi_9 = ebx_16
        
        if (esi_9 s> 4)
            int32_t ecx_20 = esi_9 & 0x80000003
            
            if (ecx_20 s< 0)
                ecx_20 = ((ecx_20 - 1) | 0xfffffffc) + 1
            
            esi_9 -= ecx_20
            goto label_5c645e
        
        if (esi_9 != 0)
        label_5c645e:
            uint32_t* ebx_18 = arg2
            int32_t eax_49
            int32_t edx_28
            edx_28:eax_49 = sx.q(*ebx_18)
            int32_t temp1_9 = mods.dp.d(edx_28:eax_49, esi_9)
            eax_14 = divs.dp.d(edx_28:eax_49, esi_9)
            
            if (temp1_9 != 0)
                eax_14 = divs.dp.d(sx.q(esi_9 - temp1_9), (eax_14 << 2) + 4) << 2
                esi_9 -= eax_14
            
            *ebx_18 = esi_9

return eax_14
