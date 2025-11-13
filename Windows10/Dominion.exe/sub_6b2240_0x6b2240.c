// 函数: sub_6b2240
// 地址: 0x6b2240
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* edx = data_147b06c

if (*(edx + 0x164) != 0)
    sub_63b870(arg1, &data_801800, "!gpRenderAppData->uiProjectedInto3D", 
        "C:\x\ax2017\Engine\Windows\WindowsDx11.cpp", 0x986, "Dx11GraphicsInterface::GetUIMatrix")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

__builtin_memcpy(arg2, 
    "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x"
"00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00"
"00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
    0x40)
*arg2 = 2f f/ *(arg1 + 0x18)
float xmm0_1 = -2f f/ *(arg1 + 0x1c)
arg2[3] = 0xbf800000
arg2[7] = 0x3f800000
arg2[5] = xmm0_1
float var_48[0x10]
float* result = sub_642ae0(&var_48, edx + 0x124, arg2, &var_48)
int128_t xmm1 = *(result + 0x10)
int128_t xmm2 = *(result + 0x20)
int128_t xmm3 = *(result + 0x30)
*arg2 = *result
*(arg2 + 0x10) = xmm1
*(arg2 + 0x20) = xmm2
*(arg2 + 0x30) = xmm3
return result
