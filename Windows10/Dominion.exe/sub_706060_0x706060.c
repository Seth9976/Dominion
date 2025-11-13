// 函数: sub_706060
// 地址: 0x706060
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ecx = data_147b06c

if (*(ecx + 0x164) != 0)
    int32_t eax
    sub_63b870(eax, &data_801800, "!gpRenderAppData->uiProjectedInto3D", 
        "C:\x\ax2017\Engine\OpenGLGraphics.cpp", 0x156b, "OpenGLInterface::GetUIMatrix")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void* eax_1 = data_cf65b8
__builtin_memcpy(arg2, 
    "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x"
"00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00"
"00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
    0x40)
*arg2 = 2f / _mm_cvtepi32_ps(zx.o(*(eax_1 + 0x14)))
float xmm0_3 = _mm_cvtepi32_ps(zx.o(*(eax_1 + 0x18)))
arg2[3] = 0xbf800000
arg2[7] = 0x3f800000
arg2[5] = -2f / xmm0_3
float var_48[0x10]
float* result = sub_642ae0(&var_48, arg2, ecx + 0x124, &var_48)
int128_t xmm1_2 = *(result + 0x10)
int128_t xmm2 = *(result + 0x20)
int128_t xmm3 = *(result + 0x30)
*arg2 = *result
*(arg2 + 0x10) = xmm1_2
*(arg2 + 0x20) = xmm2
*(arg2 + 0x30) = xmm3

if (*(arg1 + 0x426c) != 0)
    arg2[5] ^= (data_8937c0.o).d
    arg2[7] ^= (data_8937c0.o).d

return result
