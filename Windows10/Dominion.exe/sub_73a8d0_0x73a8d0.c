// 函数: sub_73a8d0
// 地址: 0x73a8d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi_1 = *(arg4 + 0x30)
int32_t ebx = *arg2
void* edi = arg2[1]
int32_t eax_2 = sub_6a9450(esi_1) * ebx
int32_t var_14 = eax_2
int32_t eax_4 = sub_687730(sub_6a9660(eax_2, edi, ebx, esi_1))
int32_t var_20 = eax_4

if (eax_4 == 0)
    sub_63b870(eax_4, &data_801800, "destSpec.pImage", "C:\x\ax2017\Engine\Editor\AtlasMaker.cpp", 
        0x18f, "AtlasLoadTextureIntoImageData")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

bool eax_5 = sub_735a50(arg2, &var_20)

if (eax_5 == 0)
    return eax_5

float xmm2 = *(arg4 + 0x4c)
float xmm0_2 = _mm_cvtepi32_ps(zx.o(ebx)) / xmm2
float xmm0_3

if (0 f<= xmm0_2)
    xmm0_3 = xmm0_2 + 0.5f
else
    xmm0_3 = xmm0_2 - 0.5f

int32_t esi_2 = int.d(xmm0_3)
float xmm0_6 = _mm_cvtepi32_ps(zx.o(edi)) / xmm2
float xmm0_7

if (0 f<= xmm0_6)
    xmm0_7 = xmm0_6 + 0.5f
else
    xmm0_7 = xmm0_6 - 0.5f

xmm2 - 1f
int32_t ecx_4 = int.d(xmm0_7)
int32_t eax_6
eax_6:1.b =
    (xmm2 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm2, 1f) ? 1 : 0) << 2 | (xmm2 < 1f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (not(p_1) || esi_2 s<= 0 || ecx_4 s<= 0)
    int32_t eax_11 = var_20
    *arg3 = ebx
    arg3[2] = eax_11
    eax_11.b = 1
    arg3[1] = edi
    return eax_11

*arg3 = esi_2
arg3[1] = ecx_4
arg3[2] = sub_687730(sub_6a9660(eax_6, ecx_4, esi_2, esi_1))
int32_t eax_9
int32_t ecx_8
eax_9, ecx_8 = sub_6a9450(esi_1)
int32_t var_54 = eax_9
int32_t var_5c = 0x3f800000
int32_t var_60 = 0x3f800000
void var_6c
sub_71dda0(eax_9, var_20, ecx_8, ebx, edi, ecx_8, arg3[2], *arg3, arg3[1], var_6c, 0f, 0)
int32_t eax_10
eax_10.b = 1
return eax_10
