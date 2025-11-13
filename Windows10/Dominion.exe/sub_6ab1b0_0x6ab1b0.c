// 函数: sub_6ab1b0
// 地址: 0x6ab1b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi = arg6
int32_t eax_1 = arg2[1].d
int32_t var_18 = eax_1
int32_t* edi = arg3
int128_t var_28 = *arg2
int32_t ebx

if (esi == 1)
    ebx = var_28.d
else
    eax_1, arg3 = sub_687730(var_28:0xc.d * var_28:8.d)
    ebx = eax_1
    var_28.d = ebx

if (edi != 0xb)
    int32_t var_4c_4 = arg5
    char result = sub_6aaff0(eax_1, &var_28, arg3, arg4)
    
    if (result == 0)
        return result
else
    int32_t* var_4c = arg3
    uint32_t var_14
    uint32_t eax_3 = sub_72f030(&var_14, arg5, arg4, &var_14)
    uint32_t esi_1 = eax_3
    uint32_t var_3c = esi_1
    int32_t var_50_1
    char* ecx_3
    
    if (esi_1 == 0)
        char const* const var_4c_1 = "TextureLoadWithQOI"
        var_50_1 = 0xc3
        ecx_3 = "sourceSpec.pImage"
    label_6ab32b:
        sub_63b870(eax_3, &data_801800, ecx_3, "C:\x\ax2017\Engine\stb_image_resize.cpp", var_50_1, 
            "TextureLoadWithQOI")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    uint32_t ecx_4 = var_14
    int32_t var_10
    int32_t var_34_1 = var_10
    char var_c
    eax_3 = zx.d(var_c)
    uint32_t var_38_1 = ecx_4
    int32_t edx_1
    
    if (eax_3 != 4)
        if (eax_3 == 3)
            edx_1 = 5
            goto label_6ab24c
        
        char const* const var_4c_5 = "TextureLoadWithQOI"
        var_50_1 = 0xdc
        ecx_3 = "Halt"
        goto label_6ab32b
    
    edx_1 = eax_3 - 3
label_6ab24c:
    int32_t var_2c_1 = edx_1
    int32_t var_30_1 = sub_6a9570(ecx_4, edx_1)
    sub_6a9de0(&var_3c, &var_28)
    _aligned_free(esi_1)
    esi = arg6

if (esi != 1)
    int32_t edi_1 = var_28:4.d
    int32_t temp0_1 = divs.dp.d(sx.q(edi_1), esi)
    int32_t var_6c_1 = 4
    int32_t temp0_2 = divs.dp.d(sx.q(var_28:8.d), arg6)
    *(arg2 + 4) = temp0_1
    int32_t var_74_1 = 0x3f800000
    int32_t var_78_1 = 0x3f800000
    *(arg2 + 8) = temp0_2
    int32_t temp0_3 = divs.dp.d(sx.q(var_28:0xc.d), arg6)
    int32_t var_90_1 = *arg2
    *(arg2 + 0xc) = temp0_3
    void var_84
    sub_71dda0(temp0_3, ebx, temp0_2, edi_1, var_28:8.d, temp0_2, var_90_1, temp0_1, temp0_2, 
        var_84, 0f, 0)
    
    if (ebx != 0)
        _aligned_free(ebx)

return 1
