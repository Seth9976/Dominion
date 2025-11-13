// 函数: sub_6a97a0
// 地址: 0x6a97a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_10
uint32_t eax

if (arg2 s> 0x3eb)
label_6a9ad5:
    char const* const var_c_1 = "ImagePixelToRgba"
    var_10 = 0x154
label_6a9aee:
    sub_63b870(eax, &data_801800, "Halt", "C:\x\ax2017\Engine\ImageUtils.cpp", var_10, 
        "ImagePixelToRgba")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

if (arg2 == 0x3eb)
    float xmm0_13 = *arg1 * 255f
    float xmm0_14
    
    if (0 f<= xmm0_13)
        xmm0_14 = xmm0_13 + 0.5f
    else
        xmm0_14 = xmm0_13 - 0.5f
    
    float xmm0_16 = *(arg1 + 4) * 255f
    float xmm0_17
    
    if (0 f<= xmm0_16)
        xmm0_17 = xmm0_16 + 0.5f
    else
        xmm0_17 = xmm0_16 - 0.5f
    
    float xmm0_19 = *(arg1 + 8) * 255f
    float xmm0_20
    
    if (0 f<= xmm0_19)
        xmm0_20 = xmm0_19 + 0.5f
    else
        xmm0_20 = xmm0_19 - 0.5f
    
    float xmm0_22 = *(arg1 + 0xc) * 255f
    float xmm0_23
    
    if (0 f<= xmm0_22)
        xmm0_23 = xmm0_22 + 0.5f
    else
        xmm0_23 = xmm0_22 - 0.5f
    
    return ((zx.d((int.d(xmm0_23)).b) << 8 | zx.d((int.d(xmm0_20)).b)) << 8
        | zx.d((int.d(xmm0_17)).b)) << 8 | zx.d((int.d(xmm0_14)).b)

if (arg2 - 1 u> 0x73)
    goto label_6a9ad5

eax = zx.d(*(arg2 + &jump_table_6a9b08[0xd]:3))

switch (eax)
    case 0
        return ((zx.d(arg1[3]) << 8 | zx.d(*arg1)) << 8 | zx.d(arg1[1])) << 8 | zx.d(arg1[2])
    case 1
        return ((zx.d(arg1[3]) << 8 | zx.d(arg1[2])) << 8 | zx.d(arg1[1])) << 8 | zx.d(*arg1)
    case 2
        return *arg1
    case 3
        return ((zx.d(*arg1) | 0xffffff00) << 8 | zx.d(arg1[1])) << 8 | zx.d(arg1[2])
    case 4
        eax.b = *arg1
        int32_t ebx
        ebx:1.b = arg1[1]
        ebx.b = eax.b
        uint32_t esi_1 = zx.d(eax.b)
        int32_t edx
        edx.b = ebx:1.b
        eax.b <<= 4
        edx.b u>>= 4
        uint32_t eax_24
        eax_24.b = edx.b
        ebx.b u>>= 4
        eax_24.b <<= 4
        uint32_t eax_25
        eax_25.b = ebx.b
        eax_25.b <<= 4
        int32_t edx_2 = zx.d(ebx:1.b) & 0xf
        ebx:1.b <<= 4
        int32_t eax_30 = (zx.d(ebx.b)
            | (((esi_1 & 0xf) ^ zx.d(eax.b)) | (zx.d(eax_24.b) | zx.d(edx.b)) << 8) << 8
            | zx.d(eax_25.b)) << 8 | (edx_2 ^ zx.d(ebx:1.b))
        return eax_30
    case 5
        uint32_t ecx_13 = zx.d(*arg1)
        int32_t edx_5 = ecx_13 & 0x1f
        int32_t eax_33 = ecx_13 u>> 5 & 0x1f
        int32_t esi_9 = ecx_13 u>> 0xa & 0x1f
        int32_t eax_40 = ((((eax_33 | (edx_5 & 0xfffffffc) << 8) & 0xfffffffc)
            | ((sx.d(ecx_13.w) s>> 0x1f << 5 | edx_5) << 8 | eax_33) << 5) << 3 | esi_9) << 3
            | esi_9 u>> 2
        return eax_40
    case 6
        uint32_t edx_8 = zx.d(*arg1)
        int32_t edx_9 = edx_8 & 0x1f
        int32_t eax_43 = edx_8 u>> 5 & 0x1f
        int32_t esi_13 = edx_8 u>> 0xa & 0x1f
        return (((eax_43 | (edx_9 | 0xffffffe0) << 8) << 5
            | (((edx_9 & 0xfffffffc) << 8 | eax_43) & 0xfffffffc)) << 3 | esi_13) << 3 | esi_13 u>> 2
    case 7
        uint32_t edx_12 = zx.d(*arg1)
        int32_t edx_13 = edx_12 & 0x1f
        int32_t eax_53 = edx_12 u>> 5 & 0x2f
        uint32_t esi_16 = edx_12 u>> 0xb
        return (((((eax_53 | (edx_13 & 0xfffffffc) << 0xa) & 0xfffffff0)
            | ((edx_13 | 0xffffffe0) << 9 | eax_53) << 6) * 2) | esi_16) << 3 | esi_16 u>> 2
    case 8
        return zx.d(*arg1) << 0x18 | &data_ffffff
    case 9
        return ((zx.d(arg1[2]) | 0xffffff00) << 8 | zx.d(arg1[1])) << 8 | zx.d(*arg1)
    case 0xa
        char const* const var_c = "ImagePixelToRgba"
        var_10 = 0x151
        goto label_6a9aee
    case 0xb
        return ((zx.d(*arg1) << 8 | zx.d(arg1[3])) << 8 | zx.d(arg1[2])) << 8 | zx.d(arg1[1])
    case 0xc
        float xmm0_1 = *arg1 * 255f
        float xmm0_2
        
        if (0 f<= xmm0_1)
            xmm0_2 = xmm0_1 + 0.5f
        else
            xmm0_2 = xmm0_1 - 0.5f
        
        float xmm0_4 = *(arg1 + 4) * 255f
        float xmm0_5
        
        if (0 f<= xmm0_4)
            xmm0_5 = xmm0_4 + 0.5f
        else
            xmm0_5 = xmm0_4 - 0.5f
        
        float xmm0_7 = *(arg1 + 8) * 255f
        float xmm0_8
        
        if (0 f<= xmm0_7)
            xmm0_8 = xmm0_7 + 0.5f
        else
            xmm0_8 = xmm0_7 - 0.5f
        
        float xmm0_10 = *(arg1 + 0xc) * 255f
        float xmm0_11
        
        if (0 f<= xmm0_10)
            xmm0_11 = xmm0_10 + 0.5f
        else
            xmm0_11 = xmm0_10 - 0.5f
        
        return ((zx.d((int.d(xmm0_2)).b) << 8 | zx.d((int.d(xmm0_5)).b)) << 8
            | zx.d((int.d(xmm0_8)).b)) << 8 | zx.d((int.d(xmm0_11)).b)
    case 0xd
        goto label_6a9ad5
