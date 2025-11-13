// 函数: sub_643950
// 地址: 0x643950
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_c
int32_t eax
char const* const ecx

if (data_147aba1 != 0)
    eax = data_e76b40
    
    if (eax s< 0x1000)
        data_e76b40 = eax + 1
        memset(eax * 0x180 + 0xcf6b40, 0, 0x180)
        *(eax * 0x180 + 0xcf6bc0) = data_cf6a80
        *(eax * 0x180 + 0xcf6bd0) = data_cf6a70
        *(eax * 0x180 + 0xcf6be0) = data_cf6a90
        *(eax * 0x180 + 0xcf6cbc) = data_147abc8
        *(eax * 0x180 + 0xcf6cac) = data_cf6a5c
        *(eax * 0x180 + 0xcf6c60) = data_cf6aa0
        *(eax * 0x180 + 0xcf6c64) = data_cf6b18
        *(eax * 0x180 + 0xcf6c74) = data_cf6b28
        *(eax * 0x180 + 0xcf6bac) = data_cf6a40
        *(eax * 0x180 + 0xcf6bbc) = data_cf6a50
        *(eax * 0x180 + 0xcf6c30) = data_cf6ae4
        *(eax * 0x180 + 0xcf6c40) = data_cf6af4
        *(eax * 0x180 + 0xcf6c50) = data_cf6b04
        *(eax * 0x180 + 0xcf6bf0) = data_cf6aa4
        *(eax * 0x180 + 0xcf6c00) = data_cf6ab4
        *(eax * 0x180 + 0xcf6c10) = data_cf6ac4
        *(eax * 0x180 + 0xcf6c20) = data_cf6ad4
        *(eax * 0x180 + 0xcf6ca4) = data_cf6b38
        *(eax * 0x180 + 0xcf6ca8) = data_cf6b3c
        return eax * 0x180 + 0xcf6b40
    
    char const* const var_8_1 = "RenderItemAlloc"
    var_c = 0x203
    ecx = "gDraw3DData.renderItemCount < MAX_RENDER_ITEMS"
else
    char const* const var_8 = "RenderItemAlloc"
    var_c = 0x201
    ecx = "gDraw3DData.submittingRenderItems"

sub_63b870(eax, &data_801800, ecx, "C:\x\ax2017\Engine\Draw3d.cpp", var_c, "RenderItemAlloc")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
