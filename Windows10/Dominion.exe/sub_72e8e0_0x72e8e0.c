// 函数: sub_72e8e0
// 地址: 0x72e8e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = arg1[4]
int32_t* count_2 = arg1
int32_t var_34
int32_t* eax_3
char const* const ecx

if (eax == 1)
    uint128_t xmm0_1 = *arg1
    int32_t var_10_1 = 2
    uint128_t var_20 = xmm0_1
    void* xmm0_2 = _mm_bsrli_si128(xmm0_1, 4)
    uint32_t eax_6 = sub_6a9570(xmm0_2, 2)
    char* esi_1 = var_20:8.d
    var_20:0xc.d = eax_6
    var_20.d = sub_687730(sub_6a9660(eax_6, esi_1, xmm0_2, 2))
    sub_6a9de0(count_2, &var_20)
    int32_t edi_3 = var_20.d
    eax_3 = sub_71f100(&count_2, eax_6, edi_3, xmm0_2, esi_1, 4, &count_2)
    
    if (eax_3 != 0)
        int32_t* count_1 = count_2
        int32_t eax_10 = sub_687730(count_1)
        arg2[2] = eax_10
        *arg2 = count_1
        memcpy(eax_10, eax_3, count_1)
        int32_t result = free(eax_3)
        
        if (edi_3 == 0)
            return result
        
        return _aligned_free(edi_3)
    
    char const* const var_30_6 = "PngWriteImageSpecToBits"
    var_34 = 0x35
    ecx = "result"
else
    char* eax_4
    
    if (eax == 2)
        eax_4 = 4
    label_72e930:
        eax_3 = sub_71f100(eax_4, arg1[3], *arg1, arg1[1], arg1[2], eax_4, &count_2)
        
        if (eax_3 != 0)
            int32_t* count = count_2
            int32_t eax_5 = sub_687730(count)
            arg2[2] = eax_5
            *arg2 = count
            memcpy(eax_5, eax_3, count)
            return free(eax_3)
        
        char const* const var_30_3 = "PngWriteImageSpecToBits"
        var_34 = 0x43
        ecx = "result"
    else
        eax_3 = eax - 5
        
        if (eax == 5)
            eax_4 = 3
            goto label_72e930
        
        char const* const var_30 = "PngWriteImageSpecToBits"
        var_34 = 0x3f
        ecx = "Halt"

sub_63b870(eax_3, &data_801800, ecx, "C:\x\ax2017\Engine\stb_image_resize.cpp", var_34, 
    "PngWriteImageSpecToBits")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
