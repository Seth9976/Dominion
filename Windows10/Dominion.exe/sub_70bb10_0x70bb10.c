// 函数: sub_70bb10
// 地址: 0x70bb10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx = data_147ded8
int32_t _Size = arg2 << 2
int32_t result_1
float ecx_1
int16_t edx

if (ecx == 0)
    result_1, edx, ecx_1 = malloc(_Size)
else
    result_1, edx, ecx_1 =
        ecx(_Size, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x264)

int32_t result = result_1
arg3 - 1f
int32_t var_8_1 = 0
result_1:1.b =
    (arg3 == 1f ? 1 : 0) << 6 | (is_unordered.d(arg3, 1f) ? 1 : 0) << 2 | (arg3 < 1f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}
int32_t ebx

if (p_1)
    if (arg2 s> 0)
        char* eax_11 = *arg1
        bool cond:0_1
        
        do
            ecx_1.b = *eax_11
            *arg1 = &eax_11[1]
            edx.b = eax_11[1]
            *arg1 = &eax_11[2]
            ebx.b = eax_11[2]
            *arg1 = &eax_11[3]
            edx:1.b = eax_11[3]
            *arg1 = &eax_11[4]
            *(result + (var_8_1 << 2)) = (
                ((zx.d(ecx_1.b) << 8 | zx.d(edx.b)) << 8 | zx.d(ebx.b)) << 8 | zx.d(edx:1.b)) * arg3
            cond:0_1 = var_8_1 + 1 s< arg2
            var_8_1 += 1
            eax_11 = &eax_11[4]
        while (cond:0_1)
else if (arg2 s> 0)
    char* eax = *arg1
    bool cond:1_1
    
    do
        ecx_1.b = *eax
        *arg1 = &eax[1]
        edx.b = eax[1]
        *arg1 = &eax[2]
        ebx.b = eax[2]
        *arg1 = &eax[3]
        edx:1.b = eax[3]
        *arg1 = &eax[4]
        *(result + (var_8_1 << 2)) =
            ((zx.d(ecx_1.b) << 8 | zx.d(edx.b)) << 8 | zx.d(ebx.b)) << 8 | zx.d(edx:1.b)
        cond:1_1 = var_8_1 + 1 s< arg2
        var_8_1 += 1
        eax = &eax[4]
    while (cond:1_1)
return result
