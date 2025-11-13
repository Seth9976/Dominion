// 函数: sub_73ca00
// 地址: 0x73ca00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
uint16_t ebp = &__saved_ebp
BOOL y = data_147ac28
int32_t xmm0 = (zx.o(0)).d
int32_t xmm1 = (zx.o(0)).d
int32_t var_8 = 0
BOOL bShow

if ((*(y + 0x1c) & 2) == 0)
label_73ca9a:
    
    if (data_147def0 == 1)
        data_147def0 = 0
        bShow = 1
    label_73caac:
        y = ShowCursor(bShow)
        xmm1 = (zx.o(0)).d
        xmm0 = var_8
else
    y = data_cf65b4
    
    if (*(y + 0x18) == 0)
        goto label_73ca9a
    
    if (data_147def0 != 0)
        POINT point
        y = GetCursorPos(&point)
        xmm1 = (zx.o(0)).d
        
        if (y != 0)
            int32_t x = point.x
            int32_t edx_2 = x - data_147def4
            y = point.y
            void* esi_2 = y - data_147def8
            data_147def4 = x
            float xmm0_2 = _mm_cvtepi32_ps(zx.o(edx_2))
            data_147def8 = y
            var_8 = xmm0_2 + 0f
            xmm1 = 0f + _mm_cvtepi32_ps(zx.o(esi_2))
        
        xmm0 = var_8
    else
        y = GetCursorPos(&data_147def4)
        
        if (y != 0)
            data_147def0 = 1
            bShow = 0
            goto label_73caac
        
        xmm1 = (zx.o(0)).d
        xmm0 = var_8
void* ecx_1 = data_147abe8
int32_t edx_3 = data_147df4c
data_147df0c = xmm0 f+ data_147df0c
data_147df10 = xmm1 f+ data_147df10

if (ecx_1 == 0)
    sub_63b870(y, &data_801800, "gpGameData", "C:\x\ax2017\Engine\Game.h", 0x45, "GetGameData")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void* esi_3 = *(ecx_1 + 0xc)

if (edx_3 != 0)
    uint32_t eax = zx.d(edx_3.w)
    
    if (eax u< *(esi_3 + 4))
        void* eax_2 = eax * 0x94 + *esi_3
        
        if (*(eax_2 + 0x90) == edx_3 && eax_2 != 0)
            float xmm1_1 = xmm1 f+ *(eax_2 + 0x3c)
            *(eax_2 + 0x2c) = var_8 f+ *(eax_2 + 0x2c)
            *(eax_2 + 0x3c) = xmm1_1

double* result = data_147df54
void* ecx_2 = *(ecx_1 + 0x10)

if (result != 0)
    uint32_t edx_4 = zx.d(result.w)
    
    if (edx_4 u< *(ecx_2 + 4))
        void* esi_5 = edx_4 * 0x7c + *ecx_2
        
        if (*(esi_5 + 0x78) == result && esi_5 != 0)
            float xmm0_12 = data_147df58 f+ data_147df84
            float xmm3_1 = -1f * 200f
            float xmm1_2 = -0f * 200f
            data_147df58 = xmm0_12
            float xmm0_13 = sub_4ae0f0(ebp, xmm0_12)
            float xmm0_15
            result, xmm0_15 = sub_4ae0d0(ebp, data_147df58)
            float xmm0_20 = data_147df60 + 0.00999999978f + xmm0_15 * xmm1_2 + xmm0_13 * xmm3_1
            *(esi_5 + 0x40) = data_147df5c + 200f + xmm0_15 * xmm3_1 - xmm0_13 * xmm1_2
            *(esi_5 + 0x44) = xmm0_20
            *(esi_5 + 0x48) = 0

return result
