// 函数: sub_5a0f60
// 地址: 0x5a0f60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

float xmm3 = *(arg1 + 0x20)

if (not(xmm3 + 9.99999975e-06f < arg2))
    return 0

if (not(arg2 < *(arg1 + 0x28) - 9.99999975e-06f))
    return *(arg1 + 0x38) - 1

float xmm0_5 = sub_4d5cb0((arg2 - xmm3) f/ *(arg1 + 0x30))
float xmm0_6

if (0 f<= xmm0_5)
    xmm0_6 = xmm0_5 + 0.5f
else
    xmm0_6 = xmm0_5 - 0.5f

int32_t result = int.d(xmm0_6)
int32_t var_c
char* ecx

if (result s>= 0)
    if (result s< *(arg1 + 0x38))
        return result
    
    char const* const var_8_1 = "BinGetCoordY"
    var_c = 0x73
    ecx = "iy < bin.dims.y"
else
    char const* const var_8 = "BinGetCoordY"
    var_c = 0x72
    ecx = "iy >= 0"

sub_63b870(result, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomMap.cpp", var_c, 
    "BinGetCoordY")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
