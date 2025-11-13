// 函数: _Z14DomCreateClickRK12UI2ClickInfo
// 地址: 0xb34054
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *gCreateDlg
int32_t var_18 = *(gCreateDlg + 0x10)
int64_t (* var_20)() = gCreateDlg + 0x28
uint64_t result = zx.q(DomCreateClick(gCreateDlg, arg1, zx.q(x8 - 1 u< 2 ? 1 : 0), 
    zx.q((x8 & 0xfffffffe) == 2 ? 1 : 0), gCreateDlg + 4, gCreateDlg + 0x70, gCreateDlg + 0x14, 
    gCreateDlg + 0x18)) & 1
return result
