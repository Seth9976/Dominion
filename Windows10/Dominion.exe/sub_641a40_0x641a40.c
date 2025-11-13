// 函数: sub_641a40
// 地址: 0x641a40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg1[1] != 0x25)
    int32_t eax
    sub_63b870(eax, &data_801800, "ttf->assetType == ASSET_TYPE_TRUETYPE", 
        "C:\x\ax2017\Engine\TTFont.cpp", 0x1ef, "TTFontGet")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void* eax_1 = sub_5af880(arg1)
void* ecx = *(eax_1 + 0x38)
int32_t esi = *(ecx + 0x14)
int32_t ecx_1 = *(ecx + 4)
int32_t result = *(eax_1 + 0x10) - *(eax_1 + 0x14)
_mm_cvtepi32_ps(zx.o((zx.d(*(esi + ecx_1 + 0x12)) << 8) + zx.d(*(esi + ecx_1 + 0x13))))
_mm_cvtepi32_ps(zx.o(result))
return result
